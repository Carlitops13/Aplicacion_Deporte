#ifndef AGREGARDIALOG_H
#define AGREGARDIALOG_H

#include <QDialog>
#include "deportista.h"

namespace Ui {
class AgregarDialog;
}

class AgregarDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AgregarDialog(QWidget *parent = nullptr);
    ~AgregarDialog();

    Deportista getDeportista() const;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AgregarDialog *ui;
    Deportista deportista;
    bool validarFormulario();
};

#endif // AGREGARDIALOG_H
