/********************************************************************************
** Form generated from reading UI file 'agregardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGARDIALOG_H
#define UI_AGREGARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AgregarDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditNombre;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEditEdad;
    QLineEdit *lineEditPais;
    QComboBox *comboDeporte;
    QComboBox *comboGenero;

    void setupUi(QDialog *AgregarDialog)
    {
        if (AgregarDialog->objectName().isEmpty())
            AgregarDialog->setObjectName("AgregarDialog");
        AgregarDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AgregarDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        lineEditNombre = new QLineEdit(AgregarDialog);
        lineEditNombre->setObjectName("lineEditNombre");
        lineEditNombre->setGeometry(QRect(130, 30, 113, 22));
        label = new QLabel(AgregarDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 80, 49, 16));
        label_2 = new QLabel(AgregarDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 130, 49, 16));
        label_3 = new QLabel(AgregarDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(48, 30, 61, 20));
        label_4 = new QLabel(AgregarDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 180, 61, 16));
        label_5 = new QLabel(AgregarDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 230, 81, 16));
        lineEditEdad = new QLineEdit(AgregarDialog);
        lineEditEdad->setObjectName("lineEditEdad");
        lineEditEdad->setGeometry(QRect(130, 80, 113, 22));
        lineEditPais = new QLineEdit(AgregarDialog);
        lineEditPais->setObjectName("lineEditPais");
        lineEditPais->setGeometry(QRect(130, 130, 113, 22));
        comboDeporte = new QComboBox(AgregarDialog);
        comboDeporte->setObjectName("comboDeporte");
        comboDeporte->setGeometry(QRect(130, 230, 69, 22));
        comboGenero = new QComboBox(AgregarDialog);
        comboGenero->setObjectName("comboGenero");
        comboGenero->setGeometry(QRect(130, 180, 69, 22));

        retranslateUi(AgregarDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AgregarDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AgregarDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AgregarDialog);
    } // setupUi

    void retranslateUi(QDialog *AgregarDialog)
    {
        AgregarDialog->setWindowTitle(QCoreApplication::translate("AgregarDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AgregarDialog", "EDAD : ", nullptr));
        label_2->setText(QCoreApplication::translate("AgregarDialog", "PAIS : ", nullptr));
        label_3->setText(QCoreApplication::translate("AgregarDialog", "NOMBRE : ", nullptr));
        label_4->setText(QCoreApplication::translate("AgregarDialog", "GENERO : ", nullptr));
        label_5->setText(QCoreApplication::translate("AgregarDialog", "DISCIPLINA : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AgregarDialog: public Ui_AgregarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGARDIALOG_H
