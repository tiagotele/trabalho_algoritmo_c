/*
 * TesteListaEncadeada.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: Tiago
 */

#include "TestePilha.h"

TestePilha::TestePilha() {
	cout << "Construtor" << endl; // prints !!!Hello World!!!
}

TestePilha::~TestePilha() {
	cout << "Destrutor" << endl;
}

void TestePilha::geraEstruturaDefault(int tamanho) {
	clock_t begin = clock();

	std::stack<int> queue;

	for (int indice = tamanho; indice >= 0; indice--) {
		queue.push(indice);
	}

	while (!queue.empty()) {
		queue.pop();
	}

	clock_t end = clock();
	double elapsed_secs = (double(end - begin))/CLOCKS_PER_SEC;

	string resultado = "Tempo de execução do método geraEstruturaCustomizada: "
			+ std::to_string(elapsed_secs);

	cout << resultado << endl;

	Utils * utils = new Utils();
	utils->criaLogDeExecucao(resultado);
	utils->~Utils();
}

void TestePilha::geraEstruturaCustomizada(int tamanho) {
	clock_t begin = clock();

	std::stack<Pessoa> queue;

	for (int indice = tamanho; indice >= 0; indice--) {
		Pessoa * p = new Pessoa(indice, "Tiago");
		queue.push(*p);
		p->~Pessoa();
	}

	while (!queue.empty()) {
		queue.pop();
	}

	clock_t end = clock();
	double elapsed_secs = (double(end - begin))/CLOCKS_PER_SEC;

	string resultado = "Tempo de execução do método geraEstruturaCustomizada: "
			+ std::to_string(elapsed_secs);
	cout << resultado << endl;

	Utils * utils = new Utils();
	utils->criaLogDeExecucao(resultado);
	utils->~Utils();
}
