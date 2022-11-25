#include <string>

class Person {
	private:
		std::string firstname = "Breno";
		std::string lastname = "Macedo";
		int arbitrarynumber;

	public:
		std::string getName() const;
		int getNumber() const { return arbitrarynumber; }; // fun��o const significa que n�o vai mudar nenhum valor da classe
		void setNumber(int number) { arbitrarynumber = number; };

		Person(std::string first, std::string last, int arbitrary);
		// Person() = default; -> informar ao compilador que Person() � um construtor default
		// ou seja, n�o recebe nenhum parametro e nao realiza nenhuma instru��o ao inicializar a classe
		Person();
		~Person();
};