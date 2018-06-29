
#include <QApplication>

#include <iostream>

int
main(int argc, char **argv)
{
    QApplication app(argc, argv);
    std::cerr << "Created application. Remaining arguments: "
              << app.arguments().join(",").toStdString() << std::endl;
}

