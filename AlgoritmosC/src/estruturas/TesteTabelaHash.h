/*
 * TesteTabelaHash.h
 *
 *  Created on: Jul 3, 2016
 *      Author: Tiago
 */

#ifndef ESTRUTURAS_TESTETABELAHASH_H_
#define ESTRUTURAS_TESTETABELAHASH_H_
#include "../utils/Pessoa.h"
#include "../utils/Utils.h"
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

class TesteTabelaHash {
public:
	TesteTabelaHash();
	virtual ~TesteTabelaHash();
	void geraEstruturaDefault(int tamanho);
	void geraEstruturaCustomizada(int tamanho);
};

#endif /* ESTRUTURAS_TESTETABELAHASH_H_ */
