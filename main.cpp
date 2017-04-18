/*------------------------------------------------------------------------------------------
	Lista de librerias de C++ que usaremos en el programa.
	iostream: contiene las funciones basicas del i/o(input/output) estardard del lenguaje
	conio.h: esta libreria contiene funciones un poco mas dedicadas a la manipulacion
			don el teclado, y nos brinda una funcion para detectar cuando una tecla
			es presionada
	string.h: contiene funciones para manejar cadenas de caracteres, usaremos
				tolower() para hacer una entrada del usuario a minusculas
				y llevar un mejor control del programa
	hospital: esta libreria la hicimos para el proyecto y contiene el namespace hospital
			las funciones y clases que vamos a usar
-------------------------------------------------------------------------------------------*/
#include <iostream>
#include <conio.h>
#include <string.h>
#include "hospital.h"

/*
-------------------------------------------------------------------------------------------
	Lista de namespace utilizados
		std: namespace del i/o que nos permite la entrada y salida de datos
		hospital: esta fue declarada por nosotros y posee las diferentes funciones
					que utilizaremos en el programa, como los menus etc
------------------------------------------------------------------------------------------
*/
using namespace std;
using namespace hospital;

/*-----------------------------------------------------------
	Funcion principal main donde el programa se ejecuta
-----------------------------------------------------------*/
int main(){
	/*----------------------------------------------------------------------------------------------------------------------
		Variables del programa
		salir: tiene un tipo booleano y es la que se encarga de mantener al bucle principal ejecutandose
		_paciente: es una estructura de datos donde guardamos los datos temporales del programa ingresados por el usuario
  	-----------------------------------------------------------------------------------------------------------------------*/
	bool salir = false;
	char continuar;
	paciente * _paciente = new paciente;
	
	/*--------------------------------------------------------------------------------------------------------------------
		Logica principal del programa
		En esta seccion del programa es donde se calculan los datos y se muestra la informacion que paso el usuario
		tambien es donde se hace el uso de los diferentes metodos declarados en los namespaces usados y las librerias
		que usamos
	----------------------------------------------------------------------------------------------------------------------*/
	
	/*---------------------------------------------------------
		En este bucle es donde el programa se va a ejecutar principalmente, se le pasa como parametro
		el !salir para que nos de true, debido a la variable salir tiene valor de falso
	-----------------------------------------------------------*/
	while(!salir){
		system("cls");
		pintar();
		
		/*-----------------------------------------------------------------------------------------
			Pedimos al usuaro que ingrese los datos necesarios para hacer los calculos necesarios
		-----------------------------------------------------------------------------------------*/
		gotoxy(4,3);
		cout<<"Ingrese la edad del paciente: ";
		cin>>_paciente -> edad;
		
		gotoxy(4,4);
		cout<<"Ingrese el tipo de enfermedad del paciente: ";
		cin>>_paciente -> tipo_enfermedad;
		
		gotoxy(4,5);
		cout<<"Ingrese el numero de dias que estuvo internado: ";
		cin>>_paciente -> estancia;

		/*----------------------------------------------------------------------------------------
			Aqui calculamos el costo del paciente para cada caso, segun su tipo de enfermedad
		----------------------------------------------------------------------------------------*/
		switch(_paciente -> tipo_enfermedad){
			/*----------------------------------------------------------------------------------------
				Aqui calculamos el costo del paciente, este caso es el 1, donde se cobra 250 por dia
			----------------------------------------------------------------------------------------*/
			case 1:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				_paciente -> costo_total = 250 * _paciente -> estancia;

				/*Si el rango de edad esta entre el 14 y el 22 se le calcula un extra del 10%
				el cual se le suma al valor total*/
				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					_paciente -> costo_adicional = _paciente -> costo_total * .10;
					_paciente -> costo_total += _paciente -> costo_adicional;
				}
				
				/*------------------------------------------------------------------------------
					Mostramos los resultados al usuario en la pantalla
				------------------------------------------------------------------------------*/
				system("cls");
				pintar();
				
				gotoxy(4,3);
				cout<<"La edad del paciente es: "<<_paciente -> edad<<" a"<<char(164)<<"os";

				gotoxy(4,4);
				cout<<"El tipo de enfermedad del paciente es: "<<_paciente -> tipo_enfermedad;

				gotoxy(4,5);
				cout<<"Estuvo internado por: "<<_paciente -> estancia;

				gotoxy(4,6);
				cout<<"El costo total es de: $"<<_paciente -> costo_total;

				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					gotoxy(4,7);
					cout<<"Se le cobr"<<char(162)<<" un 10% extra";
				}
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				gotoxy(4,9);
				cout<<"Ingrese 'c' para hacer otro cobro o ingrese 's' para salir: ";
				cin>>continuar;

				//Comparamos la entrada para saber que ingreso
				if(tolower(continuar) == 's'){
					system("cls");
					salir = true;
					delete _paciente;
				}
				
				break;
			/*----------------------------------------------------------------------------------------
				Aqui calculamos el costo del paciente, este caso es el 2, donde se cobra 160 por dia
			----------------------------------------------------------------------------------------*/
			case 2:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				_paciente -> costo_total = 160 * _paciente -> estancia;

				/*Si el rango de edad esta entre el 14 y el 22 se le calcula un extra del 10%
				el cual se le suma al valor total*/
				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					_paciente -> costo_adicional = _paciente -> costo_total * .10;
					_paciente -> costo_total += _paciente -> costo_adicional;
				}
				
				/*------------------------------------------------------------------------------
					Mostramos los resultados al usuario en la pantalla
				------------------------------------------------------------------------------*/
				system("cls");
				pintar();
				
				gotoxy(4,3);
				cout<<"La edad del paciente es: "<<_paciente -> edad<<" a"<<char(164)<<"os";

				gotoxy(4,4);
				cout<<"El tipo de enfermedad del paciente es: "<<_paciente -> tipo_enfermedad;

				gotoxy(4,5);
				cout<<"Estuvo internado por: "<<_paciente -> estancia;

				gotoxy(4,6);
				cout<<"El costo total es de: $"<<_paciente -> costo_total;
				
				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					gotoxy(4,7);
					cout<<"Se le cobr"<<char(162)<<" un 10% extra";
				}
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				gotoxy(4,9);
				cout<<"Ingrese 'c' para hacer otro cobro o ingrese 's' para salir: ";
				cin>>continuar;

				//Comparamos la entrada para saber que ingreso
				if(tolower(continuar) == 's'){
					system("cls");
					salir = true;
					delete _paciente;
				}
				
				break;
			/*----------------------------------------------------------------------------------------
				Aqui calculamos el costo del paciente, este caso es el 3, donde se cobra 200 por dia
			----------------------------------------------------------------------------------------*/
			case 3:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				_paciente -> costo_total = 200 * _paciente -> estancia;

				/*Si el rango de edad esta entre el 14 y el 22 se le calcula un extra del 10%
				el cual se le suma al valor total*/
				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					_paciente -> costo_adicional = _paciente -> costo_total * .10;
					_paciente -> costo_total += _paciente -> costo_adicional;
				}
				
				/*------------------------------------------------------------------------------
					Mostramos los resultados al usuario en la pantalla
				------------------------------------------------------------------------------*/
				system("cls");
				pintar();
				
				gotoxy(4,3);
				cout<<"La edad del paciente es: "<<_paciente -> edad<<" a"<<char(164)<<"os";

				gotoxy(4,4);
				cout<<"El tipo de enfermedad del paciente es: "<<_paciente -> tipo_enfermedad;

				gotoxy(4,5);
				cout<<"Estuvo internado por: "<<_paciente -> estancia;

				gotoxy(4,6);
				cout<<"El costo total es de: $"<<_paciente -> costo_total;
				
				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					gotoxy(4,7);
					cout<<"Se le cobr"<<char(162)<<" un 10% extra";
				}
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				gotoxy(4,9);
				cout<<"Ingrese 'c' para hacer otro cobro o ingrese 's' para salir: ";
				cin>>continuar;

				//Comparamos la entrada para saber que ingreso
				if(tolower(continuar) == 's'){
					system("cls");
					salir = true;
					delete _paciente;
				}
				
				break;
			/*----------------------------------------------------------------------------------------
				Aqui calculamos el costo del paciente, este caso es el 4, donde se cobra 320 por dia
			----------------------------------------------------------------------------------------*/
			case 4:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				_paciente -> costo_total = 320 * _paciente -> estancia;
				
				/*Si el rango de edad est� entre el 14 y el 22 se le calcula un extra del 10%
				el cual se le suma al valor total*/
				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					_paciente -> costo_adicional = _paciente -> costo_total * .10;
					_paciente -> costo_total += _paciente -> costo_adicional;
				}
				
				/*------------------------------------------------------------------------------
					Mostramos los resultados al usuario en la pantalla
				------------------------------------------------------------------------------*/
				system("cls");
				pintar();
				
				gotoxy(4,3);
				cout<<"La edad del paciente es: "<<_paciente -> edad<<" a"<<char(164)<<"os";

				gotoxy(4,4);
				cout<<"El tipo de enfermedad del paciente es: "<<_paciente -> tipo_enfermedad;

				gotoxy(4,5);
				cout<<"Estuvo internado por: "<<_paciente -> estancia;

				gotoxy(4,6);
				cout<<"El costo total es de: $"<<_paciente -> costo_total;
				
				if(_paciente -> edad >= 14 && _paciente -> edad < 23){
					gotoxy(4,7);
					cout<<"Se le cobr"<<char(162)<<" un 10% extra";
				}
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				gotoxy(4,9);
				cout<<"Ingrese 'c' para hacer otro cobro o ingrese 's' para salir: ";
				cin>>continuar;

				//Comparamos la entrada para saber que ingreso
				if(tolower(continuar) == 's'){
					system("cls");
					salir = true;
					delete _paciente;
				}
				
				break;
			default:
				cout<<"El tipo ingresado no es correcto.";
				getch();
		}
	}
	/*--------------------------------------------------------------------------------------------------------
		Fin de la logica principal del programa
	--------------------------------------------------------------------------------------------------------*/
	gotoxy(2,21);
	system("pause>null");
	return 0;
}
