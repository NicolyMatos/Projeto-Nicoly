#include "despesa.h"

QString Despesa::getDescricao() const
{
    return descricao;
}

void Despesa::setDescricao(const QString &value)
{
    descricao=value;
}

double Despesa::getValor() const
{
    return valor;
}

void Despesa::setValor(double value)
{
    valor=value;
}

double Despesa::getDia() const
{
    return dia;
}
void Despesa::setDia(double value)
{
    dia=value;
}


Despesa::Despesa()
{

}
