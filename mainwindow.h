#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QDebug>
#include <QFileDialog>
#include "despesa.h"
#include "despesat.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    DespesaT despesaT;
    void atualizarDados();
    void atualizarTabela();
    void inserirDescricaoNaTabela(Despesa a, int linha);

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCadastrar_clicked();

    void on_btnOrdenarPorDescricao_clicked();

    void on_btnOrdenarPorDia_clicked();

    void on_btnOrdenarPorValor_clicked();

    void salvar();

    void carregar();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
