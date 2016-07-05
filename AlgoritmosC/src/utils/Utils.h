/*
 * Utils.h
 *
 *  Created on: Jul 4, 2016
 *      Author: Tiago
 */

#ifndef UTILS_UTILS_H_
#define UTILS_UTILS_H_
#include <string>
using namespace std;

class Utils {
public:
	const std::string log = "log.txt";
	Utils();
	virtual ~Utils();
	void criaLogDeExecucao(string conteudo);
	void apagaLogDeExecucao();
};

#endif /* UTILS_UTILS_H_ */
