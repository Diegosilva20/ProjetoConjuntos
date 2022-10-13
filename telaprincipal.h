#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QMainWindow>
#include<conjunto.h>
#include<QString>
#include<QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class TelaPrincipal; }
QT_END_NAMESPACE

class TelaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    TelaPrincipal(QWidget *parent = nullptr);
    ~TelaPrincipal();

private slots:
    void on_pushButtonCriarCA_clicked();

    void on_pushButtonCriarCB_clicked();

    void on_pushButtonUniao_clicked();

    void on_pushButtonIntersecao_clicked();

    void on_pushButtonCADiferencaCB_clicked();

    void on_pushButtonCBDiferencaCA_clicked();

    void on_pushButtonIncluirCA_clicked();

    void on_pushButtonIncluirCB_clicked();

private:
    Ui::TelaPrincipal *ui;
    ejm::Conjunto *CA;
    ejm::Conjunto *CB;
    ejm::Conjunto *CC;
};
#endif // TELAPRINCIPAL_H
