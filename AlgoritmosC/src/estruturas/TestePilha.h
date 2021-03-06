/*
 * TesteListaEncadeada.h
 *
 *  Created on: Jun 29, 2016
 *      Author: Tiago
 */

#ifndef TESTEPILHA_H_
#define TESTEPILHA_H_
#include "../utils/Pessoa.h"
#include "../utils/Utils.h"
#include <stack>
#include <string>
#include <iostream>
#include <ctime>

class TestePilha {

public:
	TestePilha();
	virtual ~TestePilha();
	void geraEstruturaDefault(int tamanho);
	void geraEstruturaCustomizada(int tamanho);
};

#endif /* TESTEPILHA_H_ */
