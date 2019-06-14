#ifndef DESPESAT_H
#define DESPESAT_H

#include <QObject>
#include <QVector>
#include <algorithm>
#include <QFile>
#include "despesa.h"

class DespesaT
{

private:
    QVector<Despesa> despesaT;

public:
    DespesaT();
    void inserirDespesa(Despesa a);
    Despesa operator[](int i);
    double getValor();
    double getMaiorValor();
    double getMenorValor();
    void ordenarPorDescricao();
    void ordenarPorValor();
    void ordenarPorDia();
    int size();

    bool salvarDespesaT(QString arquivo);
    bool carregarDespesaT(QString arquivo);

};
bool compararPorDia(Despesa a, Despesa b);
bool compararPorValor(Despesa a, Despesa b);
bool compararPorDescricao(Despesa a, Despesa b);


#endif // DESPESAT_H
