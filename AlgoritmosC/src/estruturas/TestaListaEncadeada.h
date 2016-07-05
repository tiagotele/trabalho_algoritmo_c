/*
 * TestaListaEncadeada.h
 *
 *  Created on: Jul 3, 2016
 *      Author: Tiago
 */

#ifndef ESTRUTURAS_TESTALISTAENCADEADA_H_
#define ESTRUTURAS_TESTALISTAENCADEADA_H_
#include "../utils/Pessoa.h"
#include "../utils/Utils.h"
#include <list>
#include <forward_list>
#include <iostream>
#include <string>
#include <ctime>
#include <random>

using namespace std;


class TestaListaEncadeada {
public:
	TestaListaEncadeada();
	virtual ~TestaListaEncadeada();
	void geraEstruturaDefault(int tamanho);
	void geraEstruturaCustomizada(int tamanho);
};

#endif /* ESTRUTURAS_TESTALISTAENCADEADA_H_ */
