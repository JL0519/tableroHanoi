#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int menu();
char reglas();

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
	cout << "#########################" << endl;

	cin>>opcion;

	if(opcion == 1){
		reglas();
	
	}else if(opcion==2){

	cout<<"---------------------codigo del juego!!-----------------------------------------";

	}else if(opcion!=1 || opcion!=2 || opcion!=3){

		cout<<"Opcion no valida!!!!!, por favor ingrese una opcion disponible.";

	}

	}while(opcion!=3);

	cout<<"Gracias por jugar!!!!!";
	return 0;
}

char reglas(){
	system("cls");
	char opc;
	cout << "####### Reglas del Juego #######" << endl;

	cout << "- Se colocan X (cantidad) de discos en uno de los ejes o columnas, en forma decreciente, con el disco mayor en la base" << endl;
	cout << "- El juego consiste en trasladar los discos de dicho eje a cualquiera de los dos restantes" << endl;
	cout << "  pudiéndose utilizar los tres ejes indistintamente a lo largo de todo el desarrollo del juego," << endl;
	cout << "  todo esto con movimientos sucesivos, pero teniendo en cuenta que solamente deberá moverse un disco por vez," << endl;
	cout << "  estando prohibido colocar un disco de mayor diámetro sobre uno de menor diametro, se debe realizar el cambio" << endl;
	cout << "  con la menor cantidad de movimientos posibles" << endl;
	cout << endl << "desea regresar al menu. s/n" << endl;
	cin >> opc;
	if (opc = 's' | 'S')
	menu();
	else
		exit;
	return 0;
}



