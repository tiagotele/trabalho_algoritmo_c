/*
 * TestaListaEncadeada.cpp
 *
 *  Created on: Jul 3, 2016
 *      Author: Tiago
 */

#include "TestaListaEncadeada.h"

TestaListaEncadeada::TestaListaEncadeada() {
}

TestaListaEncadeada::~TestaListaEncadeada() {
}

void TestaListaEncadeada::geraEstruturaDefault(int tamanho) {
	clock_t begin = clock();

	std::srand(std::time(0));
	std::forward_list<int> list;
	std::forward_list<int>::iterator it;

	for (int indice = 0; indice < tamanho; indice++) {
		int random_variable = std::rand();
		list.push_front(random_variable);
	}

	for (int indice = 0; indice < tamanho; indice++) {
		int random_variable = std::rand();
		list.pop_front();
	}

	clock_t end = clock();
	double elapsed_secs = (double(end - begin))/CLOCKS_PER_SEC;

	string resultado = "Tempo de execução do método geraEstruturaDefault: "
			+ std::to_string(elapsed_secs);
	cout << resultado << endl;

	Utils * utils = new Utils();
	utils->criaLogDeExecucao(resultado);
	utils->~Utils();

}

void TestaListaEncadeada::geraEstruturaCustomizada(int tamanho) {
	clock_t begin = clock();

	std::srand(std::time(0));
	std::forward_list<Pessoa> list;
	std::forward_list<int>::iterator it;

	for (int indice = 0; indice < tamanho; indice++) {
		int random_variable = std::rand();

		Pessoa * p = new Pessoa(random_variable, "Tiago");
		list.push_front(*p);
		p->~Pessoa();
	}

	for (int indice = 0; indice < tamanho; indice++) {
		int random_variable = std::rand();
		list.pop_front();
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

