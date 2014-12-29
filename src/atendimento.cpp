#include	"atendimento.h"

Atendimento::Atendimento()
{
	this->requisicaoEmAtendimento = 0;
}

Atendimento::~Atendimento()
{
}

void Atendimento::iniciaAtendimento(Requisicao& novaRequisicao, int turnoAtual)
{
	if(this->requisicaoEmAtendimento)
	{
		// Temporário, lançar excessão
		return;
	}
	this->requisicaoEmAtendimento = &novaRequisicao;
	(*this->requisicaoEmAtendimento).setTurnoEntrada(turnoAtual);
}

bool Atendimento::verificaStatusAtendimento(int turnoAtual)
{
	/* Verificar se requisicao em atendimento */
	if(!this->requisicaoEmAtendimento)
	{
		return false;
	}
	else 
	{
		/* Verifica se encerrou o atendimento */
		int turno = ((*(this->requisicaoEmAtendimento)).getTurnoEntrada() - turnoAtual);
		if(turno == (*(this->requisicaoEmAtendimento)).getTempoAtendimento())
		{
			return true;
		}
	}
	return false;
}

Requisicao Atendimento::encerraAtendimento()
{
	if(!this->requisicaoEmAtendimento)
		// Temporário, lançar excessão
		return *this->requisicaoEmAtendimento;

	Requisicao* temp = this->requisicaoEmAtendimento;
	this->requisicaoEmAtendimento = 0;

	return (*temp);
}

