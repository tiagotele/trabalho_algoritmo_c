/*
 * TesteListaEncadeada.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: Tiago
 */

#include "TestePilha.h"

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

TestePilha::TestePilha() {
	cout << "Construtor" << endl; // prints !!!Hello World!!!

}

string TestePilha::meuMetodo(int tamanho) {

	clock_t begin = clock();

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
	cout << "Destrutor" << endl; // prints !!!Hello World!!!
}

void TestePilha::geraEstruturaDefault(int tamanho) {

}

void TestePilha::geraEstruturaCustomizada(int tamanho) {

}
