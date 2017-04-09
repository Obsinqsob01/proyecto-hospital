/*------------------------------------------------------------------------------------------
	Lista de librerias de C++ que usaremos en el programa.
	iostream: contiene las funciones basicas del i/o(input/output) estardard del lenguaje
	vector: forma parte de las librerias STL y nos sirve para usar vectores y manejarlos
			de una mejor forma que la basica de C++
	hospital: esta libreria la hicimos para el proyecto y contiene el namespace hospital
			las funciones y clases que vamos a usar
-------------------------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <conio.h>
#include "hospital.h"

/*
-------------------------------------------------------------------------------------------
	Lista de namespace utilizados
		std: namespace del i/o que nos permite la entrada y salida de datos
		hospital: esta fué declarada por nosotros y posee las diferentes funciones
					que utilizaremos en el programa, como los menus etc
------------------------------------------------------------------------------------------
*/
using namespace std;
using namespace hospital;

int id,edad,tipo_enfermedad,estancia;
		float costo_adicional, costo_total;

/*-----------------------------------------------------------
	Función principal main donde el programa se ejecuta
-----------------------------------------------------------*/
int main(){
	/*----------------------------------------------------------------------------------------------------------------------
		Variables
		salir: tiene un tipo booleano y es la que se encarga de mantener al bucle principal ejecutandose
		opcion: en esta variable guardaremos la opcion que va a ingresar el usuario para hacer cosas
		pacientes: esta clase pertenece al STL vector y es donde guardamos los diferentes registros por paciente
		_paciente: es una estructura de datos donde guardamos los datos temporales del programa ingresados por el usuario 
  	-----------------------------------------------------------------------------------------------------------------------*/
	bool salir = false;
	int * opcion = new int;
	vector<paciente> pacientes(1,paciente{0,23,2,3,23.3,345});
	paciente * _paciente = new paciente;
	
	/*--------------------------------------------------------------------------------------------------------------------
		Lógica principal del programa
		En esta seccion del programa es donde se calculan los datos y se muestra la informacion que pasó el usuario
		también es donde se hace el uso de los diferentes metodos declarados en los namespaces usados y las librerias
		que usamos
	----------------------------------------------------------------------------------------------------------------------*/
	
	/*---------------------------------------------------------
		En este bucle es donde el programa se va a 
		ejecutar principalmente, se le pasa como parametro
		el !salir para que nos de true, debido a la variable
		salir tiene valor de falso
	-----------------------------------------------------------*/
	while(!salir){
		system("cls");
		pintar();
		
		/*--------------------------------------------------------------------------------------
			Pedimos al usuaro que ingrese el numero de opcion de acuerdo a lo que quere realizar
		--------------------------------------------------------------------------------------*/
	
		gotoxy (4,3);
		cout<<"1)Ingresar datos";
		gotoxy(4,4);
		cout<<"2)Ver registros";
		gotoxy(4,5);
		cout<<"3)Salir ";
		gotoxy(4,6); 
		cin>>*opcion;
		
		/*----------------------------------------------------------------------------
			En este switch condicionamos la opcion ingresada por el usuario
			En el caso 1: le pedimos los datos para un uso normal del programa
			En el caso 2: le mostramos una lista de los datos ya ingresados
			En el caso 3: simplemente cambiamos la variable salir a true y asi
							la ejecucion del programa se detiene
		----------------------------------------------------------------------------*/
		system("cls");
		pintar();
		switch(*opcion){
			case 1:
				/*-------------------------------------------------------------------------------------
					Este es el caso uno, primero le pedimos al paciente que ingrese todos los datos
					necesarios para calcular el costo total que va a pagar etc.
				--------------------------------------------------------------------------------------*/
				
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
						/*Si el rango de edad está entre el 14 y el 22 se le calcula un extra del 10%
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
						
						gotoxy(4,9);
						cout<<"Ingrese cualquier tecla para continuar...";
						getch();
						
						/*------------------------------------------------------------------------------------------
							Con este metodo de los vectores agregamos uno nuevo al final de la cola que ya tebnemos
						-------------------------------------------------------------------------------------------*/
						pacientes.push_back(paciente{pacientes.size(),_paciente -> edad,_paciente -> tipo_enfermedad,_paciente -> estancia,_paciente -> costo_total,_paciente -> costo_adicional});
						break;
					/*----------------------------------------------------------------------------------------
						Aqui calculamos el costo del paciente, este caso es el 2, donde se cobra 160 por dia
					----------------------------------------------------------------------------------------*/
					case 2:
						//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
						_paciente -> costo_total = 160 * _paciente -> estancia;
						/*Si el rango de edad está entre el 14 y el 22 se le calcula un extra del 10%
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
						
						gotoxy(4,9);
						cout<<"Ingrese cualquier tecla para continuar...";
						getch();
						
						/*------------------------------------------------------------------------------------------
							Con este metodo de los vectores agregamos uno nuevo al final de la cola que ya tebnemos
						-------------------------------------------------------------------------------------------*/
						pacientes.push_back(paciente{pacientes.size(),_paciente -> edad,_paciente -> tipo_enfermedad,_paciente -> estancia,_paciente -> costo_total,_paciente -> costo_adicional});
						break;
					/*----------------------------------------------------------------------------------------
						Aqui calculamos el costo del paciente, este caso es el 3, donde se cobra 200 por dia
					----------------------------------------------------------------------------------------*/
					case 3:
						//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
						_paciente -> costo_total = 200 * _paciente -> estancia;
						/*Si el rango de edad está entre el 14 y el 22 se le calcula un extra del 10%
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
						
						gotoxy(4,9);
						cout<<"Ingrese cualquier tecla para continuar...";
						getch();
						
						/*------------------------------------------------------------------------------------------
							Con este metodo de los vectores agregamos uno nuevo al final de la cola que ya tebnemos
						-------------------------------------------------------------------------------------------*/
						
						pacientes.push_back(paciente{pacientes.size(),_paciente -> edad,_paciente -> tipo_enfermedad,_paciente -> estancia,_paciente -> costo_total,_paciente -> costo_adicional});
					/*----------------------------------------------------------------------------------------
						Aqui calculamos el costo del paciente, este caso es el 4, donde se cobra 320 por dia
					----------------------------------------------------------------------------------------*/
					case 4:
						//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
						_paciente -> costo_total = 320 * _paciente -> estancia;
						/*Si el rango de edad está entre el 14 y el 22 se le calcula un extra del 10%
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
						
						gotoxy(4,9);
						cout<<"Ingrese cualquier tecla para continuar...";
						getch();
						
						/*------------------------------------------------------------------------------------------
							Con este metodo de los vectores agregamos uno nuevo al final de la cola que ya tebnemos
						-------------------------------------------------------------------------------------------*/
						pacientes.push_back(paciente{pacientes.size(),_paciente -> edad,_paciente -> tipo_enfermedad,_paciente -> estancia,_paciente -> costo_total,_paciente -> costo_adicional});
						break;
				}
				break;
			/*-------------------------------------------------------------------------------------
				Este es el caso 2 donde vamos a mostrar los registros guardados
			-------------------------------------------------------------------------------------*/
			case 2:
				//Mostrar registros
			/*-------------------------------------------------------------------------------------
				Este es el caso 3 donde vamos a cambiar el valor de la variable salir a true para
				que asi el bucle deje de ejecutarse y salga del progrgama
			--------------------------------------------------------------------------------------*/
			case 3:
				system("cls");
				salir = true;
		}
	}
	
	/*--------------------------------------------------------------------------------------------------------
		Fin de la lógica principal del programa
	--------------------------------------------------------------------------------------------------------*/
	gotoxy(2,21);
	system("pause>null");
	return 0;
}
