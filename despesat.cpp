#include "despesat.h"

DespesaT::DespesaT()
{

}

void DespesaT::inserirDespesa(Despesa a)
{
    despesaT.push_back(a);
}

Despesa DespesaT::operator[](int i)
{
    return despesaT[i];
}

double DespesaT::getValor()
{
    double valor=0;
    for(Despesa a: despesaT){
        valor+=a.getValor();
    }
    return valor;
}

double DespesaT::getMenorValor()
{
    Despesa *menor=std::min_element(despesaT.begin(),despesaT.end(),compararPorValor);
    return menor->getValor();
}
double DespesaT::getMaiorValor()
{
    Despesa *maior=std::max_element(despesaT.begin(),despesaT.end(),compararPorValor);
    return maior->getValor();
}

void DespesaT::ordenarPorDescricao()
{
    std::sort(despesaT.begin(),despesaT.end(),compararPorDescricao);
}
void DespesaT::ordenarPorValor()
{
    std::sort(despesaT.begin(),despesaT.end(),compararPorValor);
}
void DespesaT::ordenarPorDia()
{
    std::sort(despesaT.begin(),despesaT.end(),compararPorDia);
}
int DespesaT::size()
{
    return despesaT.size();
}

bool DespesaT::salvarDespesaT(QString arquivo)
{
    QFile file(arquivo);
    QString linha;
    if(!file.open(QIODevice::WriteOnly))
        return false;

    for(Despesa a : despesaT)
    {
        linha = a.getDescricao()+','+QString::number(a.getValor())+','+QString::number(a.getDia())+'\n';
        file.write(linha.toLocal8Bit());
    }
    file.close();
    return true;
}

bool DespesaT::carregarDespesaT(QString arquivo)
{
    QFile file(arquivo);
    if(!file.open(QIODevice::ReadOnly))
        return false;
    QString linha;
    Despesa a;
    while(!file.atEnd())
    {
        linha=file.readLine();
        QStringList dados = linha.split(",");
        a.setDescricao(dados[0]);
        a.setValor(dados[1].toDouble());
        a.setDia(dados[2].toDouble());
        inserirDespesa(a);
    }
    file.close();
    return true;
}

bool compararPorValor(Despesa a, Despesa b)
{
    return a.getValor()>b.getValor();
}
bool compararPorDescricao(Despesa a, Despesa b)
{
    return a.getDescricao().toUpper()<b.getDescricao().toUpper();
}
bool compararPorDia(Despesa a, Despesa b)
{
    return a.getDia()<b.getDia();
}
