#include <QCoreApplication>

#include <iostream>
#include <QDebug>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello" << endl;
    qInfo() << "hello";

    int age = 44;
    cout << age;
    cout << endl;
    cout << flush;

    return a.exec();
}
