/*
 * TestaListaDePrioridades.cpp
 *
 *  Created on: Jun 30, 2016
 *      Author: Tiago
 */

#include "../utils/Pessoa.h"
#include "TestaFilaDePrioridades.h"
#include <queue>
#include <iostream>
#include <string>
#include <ctime>
#include <random>

using namespace std;

TestaFilaDePrioridades::TestaFilaDePrioridades() {
}

TestaFilaDePrioridades::~TestaFilaDePrioridades() {
}

void TestaFilaDePrioridades::geraEstruturaDefault(int tamanho) {
	clock_t begin = clock();

	std::priority_queue<int> queue;

	std::srand(std::time(0)); // use current time as seed for random generator
	for (int indice = 0; indice < tamanho; indice++) {
		int random_variable = std::rand();
		queue.push(random_variable);
	}

	for (int indice = 0; indice < tamanho; indice++) {
		cout << queue.top() << endl;
		queue.pop();
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaDefault: "
			+ std::to_string(elapsed_secs);
}

void TestaFilaDePrioridades::geraEstruturaCustomizada(int tamanho) {
	clock_t begin = clock();

	priority_queue<Pessoa*, vector<Pessoa*>,less<vector<Pessoa*>::value_type> > queue;
	//std::priority_queue<Pessoa> queue;

	std::srand(std::time(0)); // use current time as seed for random generator
	for (int indice = 0; indice < tamanho; indice++) {
		int random_variable = std::rand();
		Pessoa * p = new Pessoa(random_variable, "Tiago");
		queue.push(p);
		p->~Pessoa();
	}

	for (int indice = 0; indice < tamanho; indice++) {
		queue.pop();
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaDefault: "
			+ std::to_string(elapsed_secs);

}
