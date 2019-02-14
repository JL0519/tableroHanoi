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

	if(opcion==1){

	cout<<"-------------------Introducir reglas del juego--------------------------------";

	}else if(opcion==2){
	cout<<"---------------------codigo del juego-----------------------------------------";

	}else if(opcion!=1 || opcion!=2 || opcion!=3){

		cout<<"Opcion no valida!!!!!";
	}

	}while(opcion!=3);

	cout<<"Gracias por jugar!!!!!";

}




