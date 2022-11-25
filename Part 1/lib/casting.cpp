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

	integerValue = static_cast<int>(doubleValue); // em tempo de compilação; o compilador vai verificar se esse cast é seguro;
	pessoa = dynamic_cast<Pessoa*>(homem); // utilizado na conversão de classes filhos para classes pai, faz uma verificação
										   // se o ponteiro ou referencia a ser convertida aponta coretamente para um objeto do tipo
										   // desejado. (só pode ser usado para ponteiros ou referencias de classes, tipos ou void*)
	ponteiroParaInt = reinterpret_cast<int*>(&caractere); // cast forçado (como o cast do C), requer cuidado ao utilizar, pois é inseguro
	funcaoBoba(const_cast<int*>(&x)); // remove o modifier const de uma variavel, util para passar valores constantes para
									  // funções que recebem ponteiros para variaveis nao constantes

}