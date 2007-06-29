/********************************************************************************
** Form generated from reading ui file 'connectForm.ui'
**
** Created: Fri Jun 29 00:03:25 2007
**      by: Qt User Interface Compiler version 4.3.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CONNECTFORM_H
#define UI_CONNECTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_connectForm
{
public:
    QHBoxLayout *hboxLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *hostLineEdit;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QPushButton *connectButton;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *connectForm)
    {
    if (connectForm->objectName().isEmpty())
        connectForm->setObjectName(QString::fromUtf8("connectForm"));
    QSize size(310, 237);
    size = size.expandedTo(connectForm->minimumSizeHint());
    connectForm->resize(size);
    hboxLayout = new QHBoxLayout(connectForm);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    gridLayout = new QGridLayout();
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(connectForm);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    hostLineEdit = new QLineEdit(connectForm);
    hostLineEdit->setObjectName(QString::fromUtf8("hostLineEdit"));
    hostLineEdit->setMaxLength(100);
    hostLineEdit->setFrame(true);
    hostLineEdit->setCursorPosition(0);

    gridLayout->addWidget(hostLineEdit, 0, 1, 1, 1);

    label_2 = new QLabel(connectForm);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 1, 0, 1, 1);

    portLineEdit = new QLineEdit(connectForm);
    portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
    portLineEdit->setMaxLength(5);
    portLineEdit->setEchoMode(QLineEdit::Normal);
    portLineEdit->setCursorPosition(0);

    gridLayout->addWidget(portLineEdit, 1, 1, 1, 1);

    connectButton = new QPushButton(connectForm);
    connectButton->setObjectName(QString::fromUtf8("connectButton"));

    gridLayout->addWidget(connectButton, 2, 1, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem1, 3, 0, 1, 1);


    hboxLayout->addLayout(gridLayout);

    label->setBuddy(hostLineEdit);
    label_2->setBuddy(portLineEdit);
    QWidget::setTabOrder(hostLineEdit, portLineEdit);
    QWidget::setTabOrder(portLineEdit, connectButton);

    retranslateUi(connectForm);

    QMetaObject::connectSlotsByName(connectForm);
    } // setupUi

    void retranslateUi(QWidget *connectForm)
    {
    connectForm->setWindowTitle(QApplication::translate("connectForm", "Form", 0, QApplication::UnicodeUTF8));
    label->setAccessibleName(QApplication::translate("connectForm", "Host", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("connectForm", "&Host:", 0, QApplication::UnicodeUTF8));
    hostLineEdit->setToolTip(QApplication::translate("connectForm", "The address of the host to connect to", 0, QApplication::UnicodeUTF8));
    hostLineEdit->setText(QApplication::translate("connectForm", "irc.freenode.net", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("connectForm", "&Port:", 0, QApplication::UnicodeUTF8));
    portLineEdit->setText(QApplication::translate("connectForm", "6667", 0, QApplication::UnicodeUTF8));
    connectButton->setText(QApplication::translate("connectForm", "&Connect", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(connectForm);
    } // retranslateUi

};

namespace Ui {
    class connectForm: public Ui_connectForm {};
} // namespace Ui

#endif // UI_CONNECTFORM_H
