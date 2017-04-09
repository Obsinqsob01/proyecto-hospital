/*------------------------------------------------------------------------------------------
	Lista de librerias de C++ que usaremos en el programa.
	iostream: contiene las funciones basicas del i/o(input/output) estardard del lenguaje
	vector: forma parte de las librerias STL y nos sirve para usar vectores y manejarlos
			de una mejor forma que la basica de C++
	hospital: esta libreria la hicimos para el proyecto y contiene el namespace hospital
			las funciones y clases que vamos a usar
-------------------------------------------------------------------------------------------*/
#include <windows.h>
#include <stdio.h>

/*-------------------------------------------------------------------------
	Declaramos el namespace biblioteca, el cual contendrá las diferentes
	funciones que nos serán utiles al hacer el programa
-------------------------------------------------------------------------*/

namespace hospital {
	struct paciente{
		int id,edad,tipo_enfermedad,estancia;
		float costo_adicional, costo_total;
	};
	
/*-------------------------------------------------------------------
		Esta función nos permite posicionar objetos en la pantalla
		por lineas y columnas, utiliza la API de windows para realizarlo
		debido a que windows no admite secuencias de escape con lo que
		seria mas sencillo realizarlo solo pintando:
		"\033[columna;filaHContenido"
		Esto funciona es sistemas basados en unix
	-------------------------------------------------------------------*/
	void gotoxy(int x, int y){
		HANDLE hCon;
		COORD dwPos;
		
		dwPos.X = x;
		dwPos.Y = y;
		hCon = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hCon,dwPos);
	}
	/*-------------------------------------------------------------------
		Con esta función pintamos el recuadro principal en la pantalla
		aqui utilizamos la funcion gotoxy(int x, int y); que declaramos
		arriba, para poder posicionar los diferentes caracteres en su 
		sitio. Y con la funcion system(); le pasamos como parametro 
		color 97 para pintar el fondo azul y las letras blancas el numero
		9 correspone al color azul y el 7 al color blanco.
	---------------------------------------------------------------------*/
	void pintar(){
		//Lineas horizonales
		for(int i=2; i<100; i++){
			gotoxy(i,1); printf("%c",205);
			gotoxy(i,20); printf("%c",205);
		}
		//Lineas verticales
		for(int i=1; i<21; i++){
			gotoxy(2,i); printf("%c",186);
			gotoxy(99,i); printf("%c",186);
		}
		//Esquinas <>
		gotoxy(2,1); printf("%c",201);
		gotoxy(2,20); printf("%c",200);
		gotoxy(99,1); printf("%c",187);
		gotoxy(99,20); printf("%c",188);
		
		system("color 97"); //Pintamos a la pantalla con color azul de fondo y blanco para las letras
	}
	void mostrar_registros(int total,paciente pacientes[]){
		//Lineas horizonales
		for(int i=2; i<100; i++){
			gotoxy(i,1); printf("%c",205);
			gotoxy(i,20); printf("%c",205);
		}
		//Lineas verticales
		for(int i=1; i<total + ; i++){
			gotoxy(2,i); printf("%c",186);
			gotoxy(99,i); printf("%c",186);
		}
		//Esquinas <>
		gotoxy(2,1); printf("%c",201);
		gotoxy(2,20); printf("%c",200);
		gotoxy(99,1); printf("%c",187);
		gotoxy(99,20); printf("%c",188);
		
		system("color 97"); //Pintamos a la pantalla con color azul de fondo y blanco para las letras
	}
}
