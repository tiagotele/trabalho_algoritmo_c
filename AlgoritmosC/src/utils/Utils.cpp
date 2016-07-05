/*
 * Utils.cpp
 *
 *  Created on: Jul 4, 2016
 *      Author: Tiago
 */

#include "Utils.h"

#include <iostream>
#include <fstream>
#include <iostream>
#include <cstdio>

Utils::Utils() {
}

Utils::~Utils() {
}

void Utils::apagaLogDeExecucao() {
	std::remove(log.c_str());
}

void Utils::criaLogDeExecucao(string conteudo) {

	std::ofstream outfile;

	outfile.open(log, std::ios_base::app);
	outfile << conteudo <<endl;
	outfile.close();
}
