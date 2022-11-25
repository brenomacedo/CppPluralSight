class Pessoa {};
class Homem : public Pessoa {};

void funcaoBoba(int *x) {}

void casting() {
	double doubleValue = 5.3L;
	int integerValue = 0;
	int const x = 5;

	Homem* homem = new Homem();
	Pessoa* pessoa = nullptr;

	char caractere = '5';
	int* ponteiroParaInt = nullptr;

	integerValue = static_cast<int>(doubleValue); // em tempo de compila��o; o compilador vai verificar se esse cast � seguro;
	pessoa = dynamic_cast<Pessoa*>(homem); // utilizado na convers�o de classes filhos para classes pai, faz uma verifica��o
										   // se o ponteiro ou referencia a ser convertida aponta coretamente para um objeto do tipo
										   // desejado. (s� pode ser usado para ponteiros ou referencias de classes, tipos ou void*)
	ponteiroParaInt = reinterpret_cast<int*>(&caractere); // cast for�ado (como o cast do C), requer cuidado ao utilizar, pois � inseguro
	funcaoBoba(const_cast<int*>(&x)); // remove o modifier const de uma variavel, util para passar valores constantes para
									  // fun��es que recebem ponteiros para variaveis nao constantes

}