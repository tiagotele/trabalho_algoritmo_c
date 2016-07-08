//============================================================================
// Name        : Comparacoes.cpp
// Author      :Tiago Melo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "utils/Pessoa.h"
#include "utils/Utils.h"
#include "estruturas/TestePilha.h"
#include "estruturas/TestaFilaDePrioridades.h"
#include "estruturas/TesteTabelaHash.h"
#include "estruturas/TestaListaEncadeada.h"
#include <iostream>

using namespace std;

int main() {
	int TAMANHO = 100000;

	Utils * utilsPtr = new Utils();
	utilsPtr->apagaLogDeExecucao();
	utilsPtr->criaLogDeExecucao("Log");

	//PILHA
	utilsPtr->criaLogDeExecucao("PILHA");
	TestePilha * testePilhaPtr;
	testePilhaPtr = new TestePilha();
	testePilhaPtr->geraEstruturaDefault(TAMANHO);
	testePilhaPtr->geraEstruturaCustomizada(TAMANHO);
	testePilhaPtr->~TestePilha();

	//FILA DE PRIORIDADES
	utilsPtr->criaLogDeExecucao("FILA DE PRIORIDADES");
	TestaFilaDePrioridades * testaListaDePrioridadesPtr =
			new TestaFilaDePrioridades();
	testaListaDePrioridadesPtr->geraEstruturaDefault(TAMANHO);
	testaListaDePrioridadesPtr->geraEstruturaCustomizada(TAMANHO);
	testaListaDePrioridadesPtr->~TestaFilaDePrioridades();

	//TABELA HASH
	utilsPtr->criaLogDeExecucao("TABELA HASH");
	TesteTabelaHash * testaTabelaHashPtr = new TesteTabelaHash();
	testaTabelaHashPtr->geraEstruturaDefault(TAMANHO);
	testaTabelaHashPtr->geraEstruturaCustomizada(TAMANHO);
	testaTabelaHashPtr->~TesteTabelaHash();

	//LISTA ENCADEADA
	utilsPtr->criaLogDeExecucao("LISTA ENCADEADA");
	TestaListaEncadeada * testaListaEncadeadaPtr = new TestaListaEncadeada();
	testaListaEncadeadaPtr->geraEstruturaDefault(TAMANHO);
	testaListaEncadeadaPtr->geraEstruturaCustomizada(TAMANHO);
	testaListaEncadeadaPtr->~TestaListaEncadeada();

	utilsPtr->~Utils();

	return 0;
}
