//mainwindow.h
#include <QMainWindow>
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
};

//main.cpp
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

//mainwindow.cpp
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}
MainWindow::~MainWindow()
{
}