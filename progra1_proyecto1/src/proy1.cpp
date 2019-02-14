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

	cout<<"Se colocan X (cantidad) de discos en uno de los ejes o columnas, en forma decreciente, con el disco mayor en la base"<<endl;
cout<<"El juego consiste en trasladar los discos de dicho eje a cualquiera de los dos restantes"<<endl;
cout<<"pudiéndose utilizar los tres ejes indistintamente a lo largo de todo el desarrollo del juego,"<<endl;
cout<<"todo esto con movimientos sucesivos, pero teniendo en cuenta que solamente deberá moverse un disco por vez,"<<endl;
cout<<"estando prohibido colocar un disco de mayor diámetro sobre uno de menor diametro, se debe realizar el cambio"<<endl;
cout<<"con la menor cantidad de movimientos posibles";

	}else if(opcion==2){
	cout<<"---------------------codigo del juego-----------------------------------------";

	}else if(opcion!=1 || opcion!=2 || opcion!=3){

		cout<<"Opcion no valida!!!!!";
	}

	}while(opcion!=3);

	cout<<"Gracias por jugar!!!!!";

}




