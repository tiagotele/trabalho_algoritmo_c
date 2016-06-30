/*
 * TesteListaEncadeada.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: Tiago
 */

#include "TestePilha.h"
#include "../utils/Pessoa.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

TestePilha::TestePilha() {
	cout << "Construtor" << endl; // prints !!!Hello World!!!
}

string TestePilha::meuMetodo(int tamanho) {

	clock_t begin = clock();

	std::stack<int> queue;

	for (int indice = tamanho; indice >= 0; indice--) {
		queue.push(indice);
	}

	while (!queue.empty()) {
		queue.pop();
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaCustomizada: "
			+ std::to_string(elapsed_secs);
	return resultado;
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
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaCustomizada: "
			+ std::to_string(elapsed_secs);

	cout << resultado << endl;
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
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaCustomizada: "
			+ std::to_string(elapsed_secs);
	cout << resultado << endl;
}
