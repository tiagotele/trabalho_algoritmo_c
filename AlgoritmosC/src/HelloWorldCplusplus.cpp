//============================================================================
// Name        : HelloWorldCplusplus.cpp
// Author      :Tiago Melo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "estruturas/TestePilha.h"
#include <iostream>
#include "estruturas/TestaFilaDePrioridades.h"
#include "utils/Pessoa.h"

using namespace std;

int main() {
	int TAMANHO = 100000;
	TestePilha * testePilha;
	testePilha = new TestePilha();

	cout << testePilha->meuMetodo(TAMANHO) << endl;
	testePilha->geraEstruturaCustomizada(TAMANHO);

	testePilha->~TestePilha();

	TestaFilaDePrioridades * testaListaDePrioridades =
			new TestaFilaDePrioridades();
	testaListaDePrioridades->geraEstruturaDefault(TAMANHO);
	testaListaDePrioridades->geraEstruturaCustomizada(TAMANHO);
	testaListaDePrioridades->~TestaFilaDePrioridades();



	return 0;
}
