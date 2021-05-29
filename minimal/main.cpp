//#include <QApplication>
//#include <QLabel>

//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);
//    QLabel *label = new QLabel("<h2>Hello <font color=red><i>world</i></font></h2>");

//    label->show();

//    return app.exec();
//}

//#include <QApplication>
//#include <QPushButton>
//#include <QHBoxLayout>
//#include <QVBoxLayout>

//int main(int argc, char *argv[])
//{
//    QApplication app(argc, argv);

//    QWidget *window = new QWidget;
//    window->setWindowTitle("My App");

//    QPushButton *button1 = new QPushButton("one");
//    QPushButton *button2 = new QPushButton("two");
//    QPushButton *button3 = new QPushButton("three");

//    //QHBoxLayout *hlayout = new QHBoxLayout;
//    QVBoxLayout *vlayout = new QVBoxLayout;

//    vlayout->addWidget(button1);
//    vlayout->addWidget(button2);
//    vlayout->addWidget(button3);

//    window->setLayout(vlayout);

//    window->show();
//    return app.exec();
//}

#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("Name:");
    QLineEdit *txtName = new QLineEdit;

    QLabel *label2 = new QLabel("Name:");
    QLineEdit *txtName2 = new QLineEdit;

    layout->addWidget(label1, 0, 0);
    layout->addWidget(txtName, 0, 1);

    layout->addWidget(label2, 1, 0);
    layout->addWidget(txtName2, 1, 1);

    QPushButton *button = new QPushButton("OK");

    layout->addWidget(button, 2, 0, 1, 2);

    window->setLayout(layout);

    window->show();
    return app.exec();
}
