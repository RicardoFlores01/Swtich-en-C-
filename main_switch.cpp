#include <iostream>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int numero;
	cout<<"Ingresa un numero del 1 al 12: ";
	cin>>numero;
	switch(numero)
	{
		case 1:
			cout<<"Escogiste el mes Enero";
			break;
		case 2:
			cout<<"Escogiste el mes Febrero";
			break;
		case 3:
			cout<<"Escogiste el mes Marzo";
			break;
		case 4:
			cout<<"Escogiste el mes Abril";
			break;
		case 5:
			cout<<"Escogiste el mes Mayo";
			break;
		case 6:
			cout<<"Escogiste el mes Junio";
			break;
		case 7:
			cout<<"Escogiste el mes Julio";
			break;
		case 8:
			cout<<"Escogiste el mes Agosto";
			break;
		case 9:
			cout<<"Escogiste el mes Septiembre";
			break;
		case 10:
			cout<<"Escogiste el mes Octubre";
			break;
		case 11:
			cout<<"Escogiste el mes Noviembre";
			break;
		case 12:
			cout<<"Escogiste el mes Diciembre";
			break;
		default:
			cout<<"Solo se permiten numeros del 1 al 12";
			break;
			
	}
	return 0;
}
