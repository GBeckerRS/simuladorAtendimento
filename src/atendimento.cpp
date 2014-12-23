#include	"atendimento.h"

Atendimento::Atendimento(int tempoDeAtendimento)
{
	this->tempoDeAtendimento = tempoDeAtendimento;
}

Atendimento::~Atendimento()
{
}

void Atendimento::iniciaAtendimento(Requisicao& novaRequisicao, int turnoAtual)
{
}

bool Atendimento::verificaStatusAtendimento(int turnoAtual)
{
	return false;
}

Requisicao Atendimento::encerraAtendimento()
{
	return (*requisicaoEmAtendimento);
}

int Atendimento::getTempoDeAtemdimento()
{
	return this->tempoDeAtendimento;
}

