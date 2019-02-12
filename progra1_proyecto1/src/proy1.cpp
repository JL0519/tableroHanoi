#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int menu();

int main()
{
	system("cls");
	menu();
	return 0;
}

int menu()
{
	int opcion;

	system("cls");
	cout << " .: Bivenvenido al juego Torres de Hanoi:."<<endl;

	do{
	cout << "\n######### Menu ##########"<<endl;
	cout << "1. Ver reglas del juego.. " << endl;
	cout << "2. Iniciar Juego." << endl;
	cout << "3. Salir." << endl;
	cout << "\n#########################" << endl;

	cin>>opcion;

	switch(opcion){

	case 1: cout<<"-------------------Introducir reglas del juego--------------------------------"; break;

	case 2: cout<<"---------------------codigo del juego-----------------------------------------"; break;

	//default: cout<<"Opcion no valida!!!!!"; break;
	}

	}while(opcion!=3);

	cout<<"Gracias por jugar!!!!!";

}




