/*
 * Pessoa.cpp
 *
 *  Created on: Jun 29, 2016
 *      Author: Tiago
 */

#include "../utils/Pessoa.h"
using namespace std;
Pessoa::Pessoa(int id, string nome) {
	this->id = id;
	this->nome = nome;
}

Pessoa::~Pessoa() {
	// TODO Auto-generated destructor stub
}

int Pessoa::getId() {
	return id;
}

string Pessoa::getNome() {
	return nome;
}

string Pessoa::toString() {
	return "id: " + std::to_string(id) + ": nome: " + nome;
}

/*bool Pessoa::operator<(const Pessoa& right) const {
	return id < right.id;
}*/
