/*
 * TesteTabelaHash.cpp
 *
 *  Created on: Jul 3, 2016
 *      Author: Tiago
 */

#include "TesteTabelaHash.h"

TesteTabelaHash::TesteTabelaHash() {

}

TesteTabelaHash::~TesteTabelaHash() {
}

void TesteTabelaHash::geraEstruturaDefault(int tamanho) {
	clock_t begin = clock();
	std::unordered_map<std::string, int> tempMap;
	std::unordered_map<std::string, int>::iterator it;
	std::srand(std::time(0));

	for (int indice = 0; indice < tamanho; indice++) {
		tempMap.insert(std::make_pair(std::to_string(std::rand()), indice));
	}

	for (it = tempMap.begin(); it != tempMap.end(); it++) {
		//std::cout << it->first << std::endl;
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaDefault: "
			+ std::to_string(elapsed_secs);

	cout << resultado << endl;

	Utils * utils = new Utils();
	utils->criaLogDeExecucao(resultado);
	utils->~Utils();

}

void TesteTabelaHash::geraEstruturaCustomizada(int tamanho) {
	clock_t begin = clock();

	std::unordered_map<std::string, Pessoa> tempMap;
	std::unordered_map<std::string, Pessoa>::iterator it;
	std::srand(std::time(0));

	for (int indice = 0; indice < tamanho; indice++) {

		Pessoa * p = new Pessoa(indice, "Tiago");
		std::pair<std::string, Pessoa> myshopping(std::to_string(std::rand()),
				*p);

		tempMap.insert(myshopping);
		p->~Pessoa();
	}

	for (it = tempMap.begin(); it != tempMap.end(); it++) {
		string chave = it->first;
		Pessoa pessoaDaTabelaHash = tempMap.at(chave);
		/*std::cout << "Tabela Hash com chave e valor "
		 << pessoaDaTabelaHash.toString() << std::endl;*/

	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin);

	string resultado = "Tempo de execução do método geraEstruturaCustomizada: "
			+ std::to_string(elapsed_secs);
	cout << resultado << endl;

	Utils * utils = new Utils();
	utils->criaLogDeExecucao(resultado);
	utils->~Utils();
}
