/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEditSaidaCA;
    QLineEdit *lineEditSaidaCB;
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEditIncluirCB;
    QPushButton *pushButtonIncluirCB;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEditTamanhoCB;
    QPushButton *pushButtonCriarCB;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditIncluirCA;
    QPushButton *pushButtonIncluirCA;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEditTamanhoCA;
    QPushButton *pushButtonCriarCA;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonUniao;
    QPushButton *pushButtonIntersecao;
    QPushButton *pushButtonCADiferencaCB;
    QPushButton *pushButtonCBDiferencaCA;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QLineEdit *lineEditResultado;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QString::fromUtf8("TelaPrincipal"));
        TelaPrincipal->resize(800, 600);
        centralwidget = new QWidget(TelaPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 20, 181, 31));
        lineEditSaidaCA = new QLineEdit(centralwidget);
        lineEditSaidaCA->setObjectName(QString::fromUtf8("lineEditSaidaCA"));
        lineEditSaidaCA->setGeometry(QRect(20, 180, 341, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        lineEditSaidaCA->setFont(font);
        lineEditSaidaCB = new QLineEdit(centralwidget);
        lineEditSaidaCB->setObjectName(QString::fromUtf8("lineEditSaidaCB"));
        lineEditSaidaCB->setGeometry(QRect(430, 180, 341, 31));
        lineEditSaidaCB->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(520, 20, 181, 31));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(430, 130, 339, 35));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEditIncluirCB = new QLineEdit(layoutWidget);
        lineEditIncluirCB->setObjectName(QString::fromUtf8("lineEditIncluirCB"));
        lineEditIncluirCB->setFont(font);

        horizontalLayout_3->addWidget(lineEditIncluirCB);

        pushButtonIncluirCB = new QPushButton(layoutWidget);
        pushButtonIncluirCB->setObjectName(QString::fromUtf8("pushButtonIncluirCB"));
        pushButtonIncluirCB->setFont(font);

        horizontalLayout_3->addWidget(pushButtonIncluirCB);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(430, 70, 344, 35));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEditTamanhoCB = new QLineEdit(layoutWidget_2);
        lineEditTamanhoCB->setObjectName(QString::fromUtf8("lineEditTamanhoCB"));
        lineEditTamanhoCB->setFont(font);

        horizontalLayout_4->addWidget(lineEditTamanhoCB);

        pushButtonCriarCB = new QPushButton(layoutWidget_2);
        pushButtonCriarCB->setObjectName(QString::fromUtf8("pushButtonCriarCB"));
        pushButtonCriarCB->setFont(font);

        horizontalLayout_4->addWidget(pushButtonCriarCB);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 130, 339, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditIncluirCA = new QLineEdit(layoutWidget1);
        lineEditIncluirCA->setObjectName(QString::fromUtf8("lineEditIncluirCA"));
        lineEditIncluirCA->setFont(font);

        horizontalLayout_2->addWidget(lineEditIncluirCA);

        pushButtonIncluirCA = new QPushButton(layoutWidget1);
        pushButtonIncluirCA->setObjectName(QString::fromUtf8("pushButtonIncluirCA"));
        pushButtonIncluirCA->setFont(font);

        horizontalLayout_2->addWidget(pushButtonIncluirCA);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 70, 344, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEditTamanhoCA = new QLineEdit(layoutWidget2);
        lineEditTamanhoCA->setObjectName(QString::fromUtf8("lineEditTamanhoCA"));
        lineEditTamanhoCA->setFont(font);

        horizontalLayout->addWidget(lineEditTamanhoCA);

        pushButtonCriarCA = new QPushButton(layoutWidget2);
        pushButtonCriarCA->setObjectName(QString::fromUtf8("pushButtonCriarCA"));
        pushButtonCriarCA->setFont(font);

        horizontalLayout->addWidget(pushButtonCriarCA);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 230, 751, 35));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonUniao = new QPushButton(layoutWidget3);
        pushButtonUniao->setObjectName(QString::fromUtf8("pushButtonUniao"));
        pushButtonUniao->setFont(font);

        horizontalLayout_5->addWidget(pushButtonUniao);

        pushButtonIntersecao = new QPushButton(layoutWidget3);
        pushButtonIntersecao->setObjectName(QString::fromUtf8("pushButtonIntersecao"));
        pushButtonIntersecao->setFont(font);

        horizontalLayout_5->addWidget(pushButtonIntersecao);

        pushButtonCADiferencaCB = new QPushButton(layoutWidget3);
        pushButtonCADiferencaCB->setObjectName(QString::fromUtf8("pushButtonCADiferencaCB"));
        pushButtonCADiferencaCB->setFont(font);

        horizontalLayout_5->addWidget(pushButtonCADiferencaCB);

        pushButtonCBDiferencaCA = new QPushButton(layoutWidget3);
        pushButtonCBDiferencaCA->setObjectName(QString::fromUtf8("pushButtonCBDiferencaCA"));
        pushButtonCBDiferencaCA->setFont(font);

        horizontalLayout_5->addWidget(pushButtonCBDiferencaCA);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 290, 751, 54));
        verticalLayout = new QVBoxLayout(layoutWidget4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        lineEditResultado = new QLineEdit(layoutWidget4);
        lineEditResultado->setObjectName(QString::fromUtf8("lineEditResultado"));
        lineEditResultado->setFont(font);

        verticalLayout->addWidget(lineEditResultado);

        TelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        TelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaPrincipal->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEditTamanhoCA, pushButtonCriarCA);
        QWidget::setTabOrder(pushButtonCriarCA, lineEditTamanhoCB);
        QWidget::setTabOrder(lineEditTamanhoCB, pushButtonCriarCB);
        QWidget::setTabOrder(pushButtonCriarCB, lineEditIncluirCA);
        QWidget::setTabOrder(lineEditIncluirCA, pushButtonIncluirCA);
        QWidget::setTabOrder(pushButtonIncluirCA, lineEditIncluirCB);
        QWidget::setTabOrder(lineEditIncluirCB, pushButtonIncluirCB);
        QWidget::setTabOrder(pushButtonIncluirCB, pushButtonUniao);
        QWidget::setTabOrder(pushButtonUniao, pushButtonIntersecao);
        QWidget::setTabOrder(pushButtonIntersecao, pushButtonCADiferencaCB);
        QWidget::setTabOrder(pushButtonCADiferencaCB, pushButtonCBDiferencaCA);
        QWidget::setTabOrder(pushButtonCBDiferencaCA, lineEditSaidaCA);
        QWidget::setTabOrder(lineEditSaidaCA, lineEditResultado);
        QWidget::setTabOrder(lineEditResultado, lineEditSaidaCB);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QCoreApplication::translate("TelaPrincipal", "SISTEMA TEORIA DOS CONJUNTOS", nullptr));
        label->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">CONJUNTO A</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">CONJUNTO B</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">INCLUIR</span></p></body></html>", nullptr));
        pushButtonIncluirCB->setText(QCoreApplication::translate("TelaPrincipal", "INCLUIR", nullptr));
        label_6->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">TAMANHO</span></p></body></html>", nullptr));
        pushButtonCriarCB->setText(QCoreApplication::translate("TelaPrincipal", "CRIAR", nullptr));
        label_3->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">INCLUIR</span></p></body></html>", nullptr));
        pushButtonIncluirCA->setText(QCoreApplication::translate("TelaPrincipal", "INCLUIR", nullptr));
        label_2->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">TAMANHO</span></p></body></html>", nullptr));
        pushButtonCriarCA->setText(QCoreApplication::translate("TelaPrincipal", "CRIAR", nullptr));
        pushButtonUniao->setText(QCoreApplication::translate("TelaPrincipal", "A UNIAO B", nullptr));
        pushButtonIntersecao->setText(QCoreApplication::translate("TelaPrincipal", " A INTERSE\303\207\303\203O B", nullptr));
        pushButtonCADiferencaCB->setText(QCoreApplication::translate("TelaPrincipal", "A - B", nullptr));
        pushButtonCBDiferencaCA->setText(QCoreApplication::translate("TelaPrincipal", "B - A", nullptr));
        label_7->setText(QCoreApplication::translate("TelaPrincipal", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">RESULTADO</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
