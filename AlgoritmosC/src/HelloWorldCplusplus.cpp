//============================================================================
// Name        : HelloWorldCplusplus.cpp
// Author      :Tiago Melo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "estruturas/TestePilha.h"
#include <iostream>

using namespace std;

int main() {
	int TAMANHO = 100000;
	TestePilha * teste;
	teste = new TestePilha();

	cout << teste->meuMetodo(TAMANHO) << endl;
	teste->geraEstruturaCustomizada(TAMANHO);

	teste->~TestePilha();

	return 0;
}
