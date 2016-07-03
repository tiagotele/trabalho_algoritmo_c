//============================================================================
// Name        : HelloWorldCplusplus.cpp
// Author      :Tiago Melo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "estruturas/TestePilha.h"
#include "estruturas/TestaFilaDePrioridades.h"
#include "estruturas/TesteTabelaHash.h"
#include <iostream>
#include "utils/Pessoa.h"

using namespace std;

int main() {
	int TAMANHO = 100000;


	//PILHA
	TestePilha * testePilha;
	testePilha = new TestePilha();
	cout << testePilha->meuMetodo(TAMANHO) << endl;
	testePilha->geraEstruturaCustomizada(TAMANHO);
	testePilha->~TestePilha();

	//FILA DE PRIORIDADES
	TestaFilaDePrioridades * testaListaDePrioridades =
			new TestaFilaDePrioridades();
	testaListaDePrioridades->geraEstruturaDefault(TAMANHO);
	testaListaDePrioridades->geraEstruturaCustomizada(TAMANHO);
	testaListaDePrioridades->~TestaFilaDePrioridades();

	//TABELA HASH
	TesteTabelaHash * testaTabelaHash = new TesteTabelaHash();
	testaTabelaHash->geraEstruturaDefault(TAMANHO);
	testaTabelaHash->geraEstruturaCustomizada(TAMANHO);
	testaTabelaHash->~TesteTabelaHash();

	return 0;
}
