/*
 * TestaListaDePrioridades.h
 *
 *  Created on: Jun 30, 2016
 *      Author: Tiago
 */

#ifndef ESTRUTURAS_TESTAFILADEPRIORIDADES_H_
#define ESTRUTURAS_TESTAFILADEPRIORIDADES_H_
#include "../utils/Pessoa.h"
#include "../utils/Utils.h"
#include <queue>
#include <iostream>
#include <string>
#include <ctime>
#include <random>
using namespace std;


class TestaFilaDePrioridades {
public:
	TestaFilaDePrioridades();
	virtual ~TestaFilaDePrioridades();
	void geraEstruturaDefault(int tamanho);
	void geraEstruturaCustomizada(int tamanho);
};

#endif /* ESTRUTURAS_TESTAFILADEPRIORIDADES_H_ */
