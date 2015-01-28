/*
*
*/

#ifndef     SRC_INC_ATENDIMENTO_H
#define     SRC_INC_ATENDIMENTO_H

#include    <iostream>

#include    "requisicao.h"

class Atendimento
{
public:
    Atendimento();
    virtual ~Atendimento();

    /* Inicia o atendimento de uma nova requisição */
    void iniciaAtendimento(Requisicao& requisicao, int turnoAtual);
    /* Verifica se o atendimento da requisição atual foi concluido */
    bool verificaStatusAtendimento(int turnoAtual);
    /* Encerra o atendimento de uma requisição e retorna a mesma */
    Requisicao* encerraAtendimento();

private:
    /* Requisição em atendimento */
    Requisicao* requisicaoEmAtendimento;
};

#endif      // SRC_INC_ATENDIMENTO_H

