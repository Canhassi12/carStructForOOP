#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct carro
{
	string cor;
	string prefixo;
	string modelo;
	int ano;
	double valor;
};

carro carros[] = 
{ 
	{"branco", "Fiat", "Toro", 2019, 90.990},
	{"preto", "Audi", "A4", 2021, 242.990},
	{"preto, branco", "Golf", "GTI", 2019, 143.790},
	{"azul", "Uno", "firma", 1995, 7.000}
};

void printcar(carro c)
{
	cout << "\nNome: "<< c.prefixo << " " << c.modelo << endl;
	cout << "Cor: " << c.cor << endl;
	cout << "Ano: " << c.ano << endl;
	cout << "Valor: " << c.valor << " mil reais" << endl;
}

int main()
{
	string escolha;
	string resposta;

	std::cout << std::fixed;
    std::cout << std::setprecision(3);

	cout << "Bem vindo a Loja de carros!!" << endl; ///apresenta��o
	cout << "\ngostaria de comprar um carro ?" << endl;

	cin >> resposta;

	if (resposta == "sim")
	{
		cout << "\nCerto, vamos la!!" << endl;

		cout << "\ntemos os seguintes modelos: " << endl;

		cout << "\nFiat Toro..." << endl;
		cout << "\nAudi A4..." << endl;
		cout << "\nGolf Gti..." << endl;
		cout << "\nUninho de firma..." << endl;

		cout << "\nSelecione o modelo que lhe interesse!" << endl;
		cout << "\nPara isso eh simples, de !modelo; (Exemplo:!toro, !audi...)" << endl;

		cin >> escolha; ///escolha do modelo

		if (escolha == "!toro")
		{
			printcar(carros[0]);
		}

		else if (escolha == "!audi")
		{
			printcar(carros[1]);
		}
		else if (escolha == "!golf")
		{
			printcar(carros[2]);
		}
		else if (escolha == "!uno")
		{
			printcar(carros[3]);
		}

		else
		{
			cout << "\no modelo informado nao existe ou esta indisponivel no momento :(" << endl;
		}
	}

		else if (resposta == "nao")
		{
			cout << "\nSem problemas, volte quando quiser!!" << endl;
		}

		else
		{
			cout << "\nNao entendi!!" << endl;
		}
	
	    return 0;
}