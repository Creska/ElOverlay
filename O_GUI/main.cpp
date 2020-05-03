#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]){
 QApplication app(argc,argv);
 QLabel *label = new QLabel("Hello kerial");
 label->setWindowTitle("ElOverlay");
 label->resize(752,532);
 label->show();
 return app.exec();
}
