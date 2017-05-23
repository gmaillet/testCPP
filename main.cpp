/*
#include <iostream>

int main(int argc, char **argv)
{
        std::cout << "TEST"<<std::endl;
        return 0;
}
*/
#include <QApplication>
#include <QTextEdit>

int main(int argv, char **args)
{
        QApplication app(argv, args);
        QTextEdit textEdit;
        textEdit.show();
        return app.exec();
}

