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

	std::srand(std::time(0));

	std::priority_queue<int> queue;

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

struct CompIdade {
	bool operator()(Pessoa& p1, Pessoa& p2) {
		return p1.getId() < p2.getId();
	}
};

void TestaFilaDePrioridades::geraEstruturaCustomizada(int tamanho) {
	clock_t begin = clock();
	cout << " pessoa" << endl;

	priority_queue<Pessoa, vector<Pessoa>, CompIdade> queue;

	std::srand(std::time(0));
	for (int indice = 0; indice < tamanho; indice++) {
		int random_variable = std::rand();
		Pessoa * p = new Pessoa(random_variable, "Tiago");
		queue.push(*p);
		p->~Pessoa();
	}

	for (int indice = 0; indice < tamanho; indice++) {
		Pessoa p = queue.top();
		cout << " pessoa" << p.toString() << endl;
		queue.pop();
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaCustomizada: "
			+ std::to_string(elapsed_secs);
	cout << resultado << endl;

}
