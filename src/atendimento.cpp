#include	"atendimento.h"

Atendimento::Atendimento()
{
    this->requisicaoEmAtendimento = 0;
}

Atendimento::~Atendimento()
{
}

void Atendimento::iniciaAtendimento(Requisicao& requisicao, int turnoAtual)
{
    if(this->requisicaoEmAtendimento)
    {
        // Erro, ja existe uma requisicao em atendimento
        return;
    }
    // TRATAR EXCESSAO OPERADOR NEW
    this->requisicaoEmAtendimento = new Requisicao(requisicao);
    this->requisicaoEmAtendimento->setTurnoEntrada(turnoAtual);
}

bool Atendimento::verificaStatusAtendimento(int turnoAtual)
{
    if(!this->requisicaoEmAtendimento)
    {
        return false;
    }
    else 
    {
        int turno = ((*(this->requisicaoEmAtendimento)).getTurnoEntrada() - turnoAtual);
        if(turno == (*(this->requisicaoEmAtendimento)).getTempoAtendimento())
        {
            return true;
        }
    }
    return false;
}

Requisicao* Atendimento::encerraAtendimento()
{
    if(!this->requisicaoEmAtendimento)
    {
        // Erro, nao ha requisicao em atendimento
        return NULL;
    }

    Requisicao* temp = this->requisicaoEmAtendimento;
    this->requisicaoEmAtendimento = NULL;

    return temp;
}

