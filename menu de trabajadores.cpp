#include<iostream>
using namespace std;

void menu()
{
	cout<<"---------------MENU-----------------"<<endl;
	cout<<1<<"--Datos de los trabajadores"<<endl;
	cout<<2<<"--Calculo del porcentaje"<<endl;
	cout<<3<<"--Calculo del pago total"<<endl;
	cout<<4<<"--Regresar al menu anterior"<<endl;
	cout<<5<<"--Salir"<<endl;
		
}
int main()
{	
	menu();	
	char opc;
	cout<<"Elija una opcion: "<<endl;
	cin>>opc;
	switch(opc)
		{
			case '1': 
					char nom [20];
					int cant1;
					cout<<"Ingrese la cantidad de trabajadores:"<<endl;
					cin>>cant1;
					for(int i=0; i<=cant1; i++)
					{
						cout<<"Ingrese el nombre del trabajador"<<endl;
						cin>>nom; 
					}
					break;
			case '2':
					float porcen;
					int cant2;
					cout<<"Ingrese la cantidad de trabajadores:"<<endl;
					cin>>cant2;
					for(int i=0; i<=cant2; i++)
					{
						porcen=(i/cant2)*100;
					}
					cout<<"El porcentaje es--->"<<porcen<<endl;
					break;
			case '3' :
					int cant3, suel;
					float pagoT=0;
			
					cout<<"Ingrese la cantidad de trabajadores:"<<endl;
					cin>>cant3;
					for(int i=0; i<=cant3; i++)
					{
						cout<<"Digite su sueldo"<<endl;
						cin>>suel;
						pagoT=pagoT+suel;
					}
						cout<<"El pago total es ---->"<<pagoT<<endl;
						break;
	}
	
	return 0;
}
