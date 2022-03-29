#include <iostream>
#include <string>
#include "carro.h"

using namespace std;

void setAndPrintToro()
{
	carro c1;
	c1.setColor("branco");
	c1.setPrefix("Fiat");
	c1.setMolel("Toro");
	c1.setAge(2019);
	c1.setValue(90.990);

	c1.printCar();
}

void setAndPrintAudi()
{
	carro c2;
	c2.setColor("preto");
	c2.setPrefix("Audi");
	c2.setMolel("A4");
	c2.setAge(2021);
	c2.setValue(242.990);

	c2.printCar();
}

void setAndPrintGolf()
{
	carro c3;
	c3.setColor("preto, branco");
	c3.setPrefix("Wolkswagen");
	c3.setMolel("Golf GTI");
	c3.setAge(2019);
	c3.setValue(143.790);

	c3.printCar();
}

void setAndPrintUno()
{
	carro c4;
	c4.setColor("azul");
	c4.setPrefix("Fiat");
	c4.setMolel("Uno de firma");
	c4.setAge(1995);
	c4.setValue(7.000);

	c4.printCar();
}
int main()
{
	int escolha;
	string resposta;
	
	cout << "Welcome to the car shop" << endl; ///apresenta��o
	cout << "\ndo you want buy a car ? Yes/No" << endl;
	cin >> resposta;

	if(resposta == "yes")
	{
		cout << "\nOkay, lest go!!" << endl;

		cout << "\nWe have thats models: " << endl;

		cout << "\n1: Fiat Toro..." << endl;
		cout << "\n2: Audi A4..." << endl;
		cout << "\n3: Golf Gti..." << endl;
		cout << "\n4: Uninho de firma..." << endl;
		cin>>escolha;

		switch(escolha)
		{
			case 1: setAndPrintToro();

				break;

			case 2: setAndPrintAudi();

				break;

			case 3: setAndPrintGolf();

				break; 

			case 4: setAndPrintUno();

				break;
		}
	}
	else if(resposta=="no")
	{
		cout<<"No problem, comeback anytime"<<endl;
	}
	else
	{
		cout<<"\nwe dont have that options"<<endl;
	}

	return 0;
}