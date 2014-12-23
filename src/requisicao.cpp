#include	"requisicao.h"

Requisicao::Requisicao(int id, int tempoAtendimento)
{
	// Construtor
	this->id = id;
	this->tempoAtendimento = tempoAtendimento;
}

Requisicao::~Requisicao()
{
	// Destrutor
}

void Requisicao::setTurnoEntrada(int novoValor)
{
	this->turnoDeEntrada = novoValor;
}

void Requisicao::setTurnoSaida(int novoValor)
{
	this->turnoDeSaida = novoValor;
}

int Requisicao::getId()
{
	return this->id;
}

int Requisicao::getTempoAtendimento()
{
	return this->tempoAtendimento;
}

int Requisicao::getTurnoEntrada()
{
	return this->turnoDeEntrada;
}

int Requisicao::getTurnoSaida()
{
	return this->turnoDeSaida;
}

