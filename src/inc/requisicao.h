#ifndef		SRC_INC_REQUISICAO_H
#define		SRC_INC_REQUISICAO_H

class Requisicao
{
public:
	Requisicao(int id, int tempoAtendimento);
	virtual ~Requisicao();

	void setTurnoEntrada(int novoValor);
	void setTurnoSaida(int novoValor);
	int getId();
	int getTempoAtendimento();
	int getTurnoEntrada();
	int getTurnoSaida();

private:
	int id;
	int tempoAtendimento;
	int turnoDeEntrada;
	int turnoDeSaida;
};

#endif		// SRC_INC_REQUISICAO_H

