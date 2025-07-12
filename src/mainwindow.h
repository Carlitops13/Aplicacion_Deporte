#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "deportista.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void agregarDeportista(const Deportista& nuevoDeportista);

private slots:
    void on_btnAgregar_clicked();
    void on_btnMostrar_clicked();

private:
    Ui::MainWindow *ui;
    QList<Deportista> deportistas;
    void actualizarVista();
    void mostrarMensajeExito();
};

#endif // MAINWINDOW_H
