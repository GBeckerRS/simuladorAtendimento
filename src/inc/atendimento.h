#ifndef		SRC_INC_ATENDIMENTO_H
#define		SRC_INC_ATENDIMENTO_H

#include	"requisicao.h"

class Atendimento
{
public:
	Atendimento(int tempoDeAtendimento);
	virtual ~Atendimento();

	void iniciaAtendimento(Requisicao& novaRequisicao, int turnoAtual);
	bool verificaStatusAtendimento(int turnoAtual);
	Requisicao encerraAtendimento();

	int getTempoDeAtemdimento();

private:
	Requisicao* requisicaoEmAtendimento;
	int tempoDeAtendimento;
};

#endif		// SRC_INC_ATENDIMENTO_H

