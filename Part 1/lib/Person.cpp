#include <iostream>
#include "Person.h"
 
std::string Person::getName() const {
	return firstname + " " + lastname;
}

Person::Person(std::string first, std::string last, int arbitrary)
	: firstname(first), lastname(last), arbitrarynumber(arbitrary) // boa pratica: inicializar as variaveis com os valores
																   // passados nos parametros dos construtores vai evitar que passos
																   // desnecess�rios sejam feitos, caso a inicializa��o seja feita
																   // no corpo da fun��o, as variaveis ser�o inicializadas e depois
																   // atribuidas os valores corretos, ou seja, um passo desnecess�rio
{}

Person::Person() : arbitrarynumber(0) {
	std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::~Person() {
	std::cout << "Destructing" << std::endl;
}