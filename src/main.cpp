#include "mainwindow.h"
#include <QApplication>
#include <QStringConverter>  // Para Qt 6
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication a(argc, argv);
    qDebug() << "Sistema usando UTF-8 por defecto";
    QString prueba = "Texto con acentos áéíóú y ñ";
    qDebug() << prueba;
    MainWindow w;
    w.show();
    return a.exec();
}
