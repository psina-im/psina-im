
/// \file main.cpp
/// Contains application main function

#include "main_window.hpp"
#include <QApplication>
#include <boost/program_options.hpp>
#include <clocale>
#include <iostream>


namespace po = boost::program_options;


int main(int argc, char * argv[]) {
    try {
        std::setlocale(LC_ALL, "");

        po::options_description desc("Command line options");

        desc.add_options()
            ("help,h", "Display help and exit")
            ("version,v", "Display version information and exit");

        po::variables_map vm;
        po::store(po::command_line_parser(argc, argv).options(desc).run(), vm);
        po::notify(vm);

        std::string ver_str = "Psina IM version 0.1.0";

        // display help message if requested
        if (vm.count("help")) {
            std::cerr << ver_str << "\n\n" << desc;
            return 1;
        }

        // display version information if requested
        if (vm.count("version")) {
            std::cerr << ver_str << "\n";
            return 1;
        }

        QApplication app{argc, argv};
        psina::main_window main_wnd;
        main_wnd.show();
        return app.exec();

    }
    catch(std::exception & err) {
        std::cerr << "ERROR: " << err.what() << "\n";
    }
}
