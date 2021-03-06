#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void menu();
void reglas();
void estructura();
void jugada();

int main()
{
	system("cls");
	menu();
	return 0;
}

void menu()
{
	int opcion;

	system("cls");
	cout << "  .: Bivenvenido al juego Torres de Hanoi:. "<<endl;
	do{
	cout << endl << "######### Menu ##########"<<endl;
	cout << " 1. Ver reglas del juego.. " << endl;
	cout << " 2. Iniciar Juego." << endl;
	cout << " 3. Salir." << endl;
	cout << "#########################" << endl;

	cin>>opcion;

	if(opcion == 1){
		reglas();
		}
	else if(opcion==2){

	 estructura();

	}
	else if (opcion == 3)
		{
			exit(0);
		}
	else if(opcion!=1 || opcion!=2 || opcion!=3){

		cout<< endl << "Opcion no valida!!!!!, por favor ingrese una opcion disponible." << endl;

	}

	}while(opcion!=3);
        cout<<"Gracias por jugar!!!!!";
}

void reglas(){
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
	
}

void jugada(int disco, int torre1, int torre2, int torre3){
	if (disco <=0){
		cout << "el numero de discos nos es valido. " << endl;
	}
	else if (disco == 1){
	cout << "Mover disco de la torre " << torre1 << " hacia la torre " << torre3 << endl;
	}
	else{
		jugada(disco - 1, torre1, torre3, torre2);
		cout << "mover disco de la torre " << torre1 << " a la torre " << torre3 << endl;
		jugada(disco - 1, torre2, torre1, torre3);
	}
}

void estructura() {
	system("cls");
	char resp;
	int torre1 = 1, torre2 = 2, torre3 = 3, disco = 0;
	cout << " ¿Con cuantos discos quiere jugar? ";
	cin >> disco;
	jugada(disco, torre1, torre2, torre3);
	mv = (pow(2, disco))-1;
	cout << endl << "Los movimientos minimos que se pueden hacer son: " << mv << endl;
	cout << "Desea volver a jugar s/n: ";
	cin >> resp;
	if (resp == 's')
		estructura();
	else
		menu();
}



