/*
 * Pessoa.h
 *
 *  Created on: Jun 29, 2016
 *      Author: Tiago
 */

#ifndef PESSOA_H_
#define PESSOA_H_
#include <string>
using namespace std;


class Pessoa {
private:
	int id;
	string nome;
public:
	Pessoa(int id, string nome);
	virtual ~Pessoa();

	int getId();
	string getNome();
	string toString();
};

#endif /* PESSOA_H_ */
