#ifndef DESPESA_H
#define DESPESA_H

#include <QObject>

class Despesa
{

private:
    QString descricao;
    double valor;
    double dia;

public:
    Despesa();
    QString getDescricao()const;
    void setDescricao(const QString &value);
    double getValor()const;
    void setValor(double value);
    double getDia()const;
    void setDia(double value);

};

#endif // DESPESA_H
