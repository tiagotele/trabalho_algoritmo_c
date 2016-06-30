//============================================================================
// Name        : HelloWorldCplusplus.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "estruturas/TestePilha.h"
#include <iostream>

#include "utils/Pessoa.h"
using namespace std;

int main() {
	int TAMANHO = 10000;
	TestePilha * teste;
	teste = new TestePilha();
	cout << teste->meuMetodo(TAMANHO) << endl;

	teste->~TestePilha();

	/*Pessoa * p;
	p = new Pessoa(10,"Tiago");
	cout << p->toString();
	p->~Pessoa();*/


	return 0;
}
