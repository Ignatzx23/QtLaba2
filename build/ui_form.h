/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(400, 235);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/img/Shesterni.png"), QSize(), QIcon::Normal, QIcon::Off);
        Form->setWindowIcon(icon);
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 401, 234));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/img/note.png);"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "\320\237\320\276\320\264\321\200\320\276\320\261\320\275\320\276\321\201\321\202\320\270", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
