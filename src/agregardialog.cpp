#include "agregardialog.h"
#include "ui_agregardialog.h"
#include <QMessageBox>

AgregarDialog::AgregarDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AgregarDialog)
{
    ui->setupUi(this);

    // Configuración inicial
    setWindowTitle("Agregar Deportista");

    // Llenar combobox de deportes
    QStringList deportes = {"Fútbol", "Baloncesto", "Tenis", "Natación", "Atletismo"};
    ui->comboDeporte->addItems(deportes);

    // Llenar combobox de género
    QStringList generos = {"Masculino", "Femenino", "Otro"};
    ui->comboGenero->addItems(generos);
}

Deportista AgregarDialog::getDeportista() const
{
    return deportista;
}

bool AgregarDialog::validarFormulario()
{
    if(ui->lineEditNombre->text().isEmpty()) {
        QMessageBox::warning(this, "Error", "El nombre es obligatorio");
        return false;
    }

    bool edadValida;
    int edad = ui->lineEditEdad->text().toInt(&edadValida);

    if(!edadValida || edad <= 0) {
        QMessageBox::warning(this, "Error", "Ingrese una edad válida");
        return false;
    }

    return true;
}

void AgregarDialog::on_buttonBox_accepted()
{
    if(!validarFormulario()) {
        return;
    }

    QChar genero = ui->comboGenero->currentText().at(0).toUpper();

    deportista = Deportista(
        ui->lineEditNombre->text(),
        ui->lineEditPais->text(),
        ui->lineEditEdad->text().toInt(),
        ui->comboDeporte->currentText(),
        genero
        );

    accept();
}

AgregarDialog::~AgregarDialog()
{
    delete ui;
}
