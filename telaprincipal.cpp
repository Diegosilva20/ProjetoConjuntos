#include "telaprincipal.h"
#include "ui_telaprincipal.h"

TelaPrincipal::TelaPrincipal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TelaPrincipal),
      CA(0),
      CB(0),
      CC(0)
{
    ui->setupUi(this);
    ui->lineEditIncluirCA->setEnabled(false);
    ui->lineEditIncluirCB->setEnabled(false);
    ui->pushButtonIncluirCA->setEnabled(false);
    ui->pushButtonIncluirCB->setEnabled(false);
    ui->lineEditSaidaCA->setEnabled(false);
    ui->lineEditSaidaCB->setEnabled(false);
    ui->lineEditResultado->setEnabled(false);
    ui->pushButtonUniao->setEnabled(false);
    ui->pushButtonIntersecao->setEnabled(false);
    ui->pushButtonCADiferencaCB->setEnabled(false);
    ui->pushButtonCBDiferencaCA->setEnabled(false);
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
    if(CA) delete CA;
    if(CB) delete CB;
    if(CC) delete CC;
}


void TelaPrincipal::on_pushButtonCriarCA_clicked()
{
    try {
        int tamanho = ui->lineEditTamanhoCA->text().toInt();
        CA = new ejm::Conjunto(tamanho);
         ui->lineEditIncluirCA->setEnabled(true);
         ui->pushButtonIncluirCA->setEnabled(true);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}
void TelaPrincipal::on_pushButtonCriarCB_clicked()
{
    try {
        int tamanho = ui->lineEditTamanhoCB->text().toInt();
        CB = new ejm::Conjunto(tamanho);
        ui->lineEditIncluirCB->setEnabled(true);
        ui->pushButtonIncluirCB->setEnabled(true);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}


void TelaPrincipal::on_pushButtonUniao_clicked()
{
    try {
        CC = CA->uniao(CB);
        ui->lineEditResultado->setText(CC->getConjunto());
        ui->lineEditResultado->setEnabled(true);

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}


void TelaPrincipal::on_pushButtonIntersecao_clicked()
{
    try {
        CC = CA->interseccao(CB);
        ui->lineEditResultado->setText(CC->getConjunto());
        ui->lineEditResultado->setEnabled(true);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}


void TelaPrincipal::on_pushButtonCADiferencaCB_clicked()
{
    try {
        CC = CA->diferenca(CB);
        ui->lineEditResultado->setText(CC->getConjunto());
        ui->lineEditResultado->setEnabled(true);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}


void TelaPrincipal::on_pushButtonCBDiferencaCA_clicked()
{
    try {
        CC = CB->diferenca(CA);
        ui->lineEditResultado->setText(CC->getConjunto());
        ui->lineEditResultado->setEnabled(true);
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}


void TelaPrincipal::on_pushButtonIncluirCA_clicked()
{
    try {
        QString vrf = ui->lineEditIncluirCA->text();
        int elemento = ui->lineEditIncluirCA->text().toInt();
        if(vrf.isEmpty()){
            ui->lineEditIncluirCA->setText(vrf);
        }
        else{
            CA->incluirElemento(elemento);
            ui->lineEditSaidaCA->setText(CA->getConjunto());
            ui->lineEditIncluirCA->clear();
            ui->lineEditSaidaCA->setEnabled(true);
            ui->pushButtonUniao->setEnabled(true);
            ui->pushButtonIntersecao->setEnabled(true);
            ui->pushButtonCADiferencaCB->setEnabled(true);
            ui->pushButtonCBDiferencaCA->setEnabled(true);
        }
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}


void TelaPrincipal::on_pushButtonIncluirCB_clicked()
{
    try {
        QString vrf = ui->lineEditIncluirCB->text();
        int elemento = ui->lineEditIncluirCB->text().toInt();
        if(vrf.isEmpty()){
            ui->lineEditIncluirCB->setText(vrf);
        }
        else{
            CB->incluirElemento(elemento);
            ui->lineEditIncluirCB->clear();
            ui->lineEditSaidaCB->setText(CB->getConjunto());
            ui->lineEditIncluirCA->clear();
            ui->lineEditSaidaCB->setEnabled(true);
            ui->pushButtonUniao->setEnabled(true);
            ui->pushButtonIntersecao->setEnabled(true);
            ui->pushButtonCADiferencaCB->setEnabled(true);
            ui->pushButtonCBDiferencaCA->setEnabled(true);
        }
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    } catch(std::bad_alloc &erro){
        QMessageBox::information(this,"ERRO DO SISTEMA","Conjunto não foi criado");
    }
}

