#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "agregardialog.h"
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Configuración inicial
    setWindowTitle("Gestión de Deportistas");
    resize(800, 600);

    // Configurar tabla
    if(ui->tblDeportistas) {
        QStringList headers;
        headers << "Nombre" << "País" << "Edad" << "Deporte" << "Género";
        ui->tblDeportistas->setColumnCount(headers.size());
        ui->tblDeportistas->setHorizontalHeaderLabels(headers);
        ui->tblDeportistas->setSelectionBehavior(QAbstractItemView::SelectRows);
    }
}

void MainWindow::agregarDeportista(const Deportista& nuevoDeportista)
{
    deportistas.append(nuevoDeportista);
    actualizarVista();
    mostrarMensajeExito();
}

void MainWindow::on_btnAgregar_clicked()
{
    AgregarDialog dlg(this);
    if(dlg.exec() == QDialog::Accepted) {
        agregarDeportista(dlg.getDeportista());
    }
}

void MainWindow::on_btnMostrar_clicked()
{
    if(deportistas.isEmpty()) {
        QMessageBox::information(this, "Información",
                                 "No hay deportistas registrados.");
        return;
    }

    QString lista = "<b>Deportistas registrados:</b><br><br>";
    lista += "<table style='border-collapse: collapse; width: 100%;'>";
    lista += "<tr>"
             "<th style='border: 1px solid #ddd; padding: 8px;'>Nombre</th>"
             "<th style='border: 1px solid #ddd; padding: 8px;'>País</th>"
             "<th style='border: 1px solid #ddd; padding: 8px;'>Edad</th>"
             "<th style='border: 1px solid #ddd; padding: 8px;'>Deporte</th>"
             "</tr>";

    for(const Deportista &d : deportistas) {
        lista += QString("<tr>"
                         "<td style='border: 1px solid #ddd; padding: 8px;'>%1</td>"
                         "<td style='border: 1px solid #ddd; padding: 8px;'>%2</td>"
                         "<td style='border: 1px solid #ddd; padding: 8px;'>%3</td>"
                         "<td style='border: 1px solid #ddd; padding: 8px;'>%4</td>"
                         "</tr>")
                     .arg(d.nombre)
                     .arg(d.pais)
                     .arg(d.edad)
                     .arg(d.deporte);
    }

    lista += "</table>";

    QMessageBox msgBox;
    msgBox.setWindowTitle("Lista de Deportistas");
    msgBox.setTextFormat(Qt::RichText);
    msgBox.setText(lista);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

void MainWindow::actualizarVista()
{
    if(!ui->tblDeportistas) return;

    ui->tblDeportistas->setRowCount(deportistas.size());

    for(int i = 0; i < deportistas.size(); ++i) {
        const Deportista &d = deportistas[i];
        ui->tblDeportistas->setItem(i, 0, new QTableWidgetItem(d.nombre));
        ui->tblDeportistas->setItem(i, 1, new QTableWidgetItem(d.pais));
        ui->tblDeportistas->setItem(i, 2, new QTableWidgetItem(QString::number(d.edad)));
        ui->tblDeportistas->setItem(i, 3, new QTableWidgetItem(d.deporte));
        ui->tblDeportistas->setItem(i, 4, new QTableWidgetItem(QString(d.genero)));
    }

    ui->tblDeportistas->resizeColumnsToContents();
}

void MainWindow::mostrarMensajeExito()
{
    qDebug() << "Nuevo deportista agregado";
    QMessageBox::information(this, "Éxito", "Deportista agregado correctamente");
}

MainWindow::~MainWindow()
{
    delete ui;
}
