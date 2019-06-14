#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionsalvar,SIGNAL(triggered()),this,SLOT(salvar()));
    connect(ui->actioncarregar,SIGNAL(triggered()),this,SLOT(carregar()));

}

void MainWindow::atualizarDados()
{
    double valorTotal=despesaT.getValor();
    double menorValor=despesaT.getMenorValor();
    double maiorValor=despesaT.getMaiorValor();

    ui->valorTotal->setText(QString::number(valorTotal));
    ui->menorValor->setText(QString::number(menorValor));
    ui->maiorValor->setText(QString::number(maiorValor));

}

void MainWindow::atualizarTabela()
{
    ui->Tabela->clearContents();
    for(int i=0;i<despesaT.size();i++){
    inserirDescricaoNaTabela(despesaT[i],i);
    }
}

void MainWindow::inserirDescricaoNaTabela(Despesa a, int linha)
{
    ui->Tabela->setItem(linha,0,new QTableWidgetItem(a.getDescricao()));
    ui->Tabela->setItem(linha,1,new QTableWidgetItem(QString::number(a.getValor())));
    ui->Tabela->setItem(linha,2,new QTableWidgetItem(QString::number(a.getDia())));

}

void MainWindow::salvar()
{
    QString nomeArquivo=QFileDialog::getSaveFileName(this,"Lista de Despesas","","CSV(*csv)");
    despesaT.salvarDespesaT(nomeArquivo);

    ui->Tabela->clearContents();
}

void MainWindow::carregar()
{
    ui->Tabela->clearContents();

    QString nomeArquivo = QFileDialog::getOpenFileName(this,"Lista de Despesas","","CSV(*csv)");
    despesaT.carregarDespesaT(nomeArquivo);
    for(int i=0;i<despesaT.size();i++){
        ui->Tabela->insertRow(i);
        inserirDescricaoNaTabela(despesaT[i],i);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCadastrar_clicked()
{
    Despesa despesa;

    if(ui->descricao->text().size()>3 && ui->descricao->text().size()!=ui->descricao->text().toDouble() && ui->dia->text().toDouble()>0 && ui->dia->text().toDouble()<32 && ui->valor->text().toDouble()>0){

        despesa.setDescricao(ui->descricao->text());
        despesa.setValor(ui->valor->text().toDouble());
        despesa.setDia(ui->dia->text().toDouble());

        int linha=ui->Tabela->rowCount();
        ui->Tabela->insertRow(linha);
        inserirDescricaoNaTabela(despesa,linha);
        despesaT.inserirDespesa(despesa);
        atualizarDados();

        ui->descricao->clear();
        ui->dia->clear();
        ui->valor->clear();

    }

}

void MainWindow::on_btnOrdenarPorDescricao_clicked()
{

    despesaT.ordenarPorDescricao();
    atualizarTabela();
}

void MainWindow::on_btnOrdenarPorDia_clicked()
{
 despesaT.ordenarPorDia();
 atualizarTabela();
}

void MainWindow::on_btnOrdenarPorValor_clicked()
{
    despesaT.ordenarPorValor();
    atualizarTabela();
}



