Proceso hospital
	Definir salir Como Logico;
	salir = Falso;
	Definir continuar Como Caracter;
	Definir id,edad,tipo_enfermedad,estancia Como Entero;
	Definir costo_adicional, costo_total Como Real;

	//Logica principal del programa
	//En esta seccion del programa es donde se calculan los datos y se muestra la informacion que paso el usuario
	//tambien es donde se hace el uso de los diferentes metodos declarados en los namespaces usados y las librerias
	//que usamos
	
	//---------------------------------------------------------
	//En este bucle es donde el programa se va a ejecutar principalmente, se le pasa como parametro
	//el !salir para que nos de true, debido a la variable salir tiene valor de falso

	Mientras NO salir Hacer
		Borrar Pantalla;
		
		//-----------------------------------------------------------------------------------------
		//Pedimos al usuaro que ingrese los datos necesarios para hacer los calculos necesarios
		//-----------------------------------------------------------------------------------------
		Escribir "Ingrese la edad del paciente: ";
		Leer edad;
		
		Escribir "Ingrese el tipo de enfermedad del paciente: ";
		Leer tipo_enfermedad;
		
		Escribir "Ingrese el numero de dias que estuvo internado: ";
		Leer estancia;
		
		//----------------------------------------------------------------------------------------
		//Aqui calculamos el costo del paciente para cada caso, segun su tipo de enfermedad
		//----------------------------------------------------------------------------------------
		Segun tipo_enfermedad Hacer
			//----------------------------------------------------------------------------------------
			//Aqui calculamos el costo del paciente, este caso es el 1, donde se cobra 250 por dia
			//----------------------------------------------------------------------------------------
			caso 1:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				costo_total = 250 * estancia;
				
				//Si el rango de edad esta entre el 14 y el 22 se le calcula un extra del 10%
				//el cual se le suma al valor total
				Si edad >= 14 && edad < 23 Entonces
					costo_adicional = costo_total * .10;
					costo_total = costo_total + costo_adicional;
				FinSi
				//------------------------------------------------------------------------------
				//Mostramos los resultados al usuario en la pantalla
				//------------------------------------------------------------------------------
				Borrar Pantalla;
				
				Escribir "La edad del paciente es: ", edad, " años";
				
				Escribir "El tipo de enfermedad del paciente es: ", tipo_enfermedad;
				
				Escribir "Estuvo internado por: ", estancia;
				
				Escribir "El costo total es de: $", costo_total;
				
				Si edad >= 14 && edad < 23 Entonces
					Escribir "Se le cobró un 10% extra";
				FinSi
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				Escribir "Ingrese c para hacer otro cobro o ingrese s para salir: ";
				Leer continuar;
				
				//Comparamos la entrada para saber que ingreso
				Si Minusculas(continuar) == 's' Entonces
					Borrar Pantalla;
					salir = Verdadero;
				FinSi
				
			//----------------------------------------------------------------------------------------
			//Aqui calculamos el costo del paciente, este caso es el 2, donde se cobra 160 por dia
			//----------------------------------------------------------------------------------------
			caso 2:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				costo_total = 160 * estancia;
				
				//Si el rango de edad esta entre el 14 y el 22 se le calcula un extra del 10%
				//el cual se le suma al valor total
				Si edad >= 14 && edad < 23 Entonces
					costo_adicional = costo_total * .10;
					costo_total = costo_total + costo_adicional;
				FinSi
				
				//------------------------------------------------------------------------------
				//Mostramos los resultados al usuario en la pantalla
				//------------------------------------------------------------------------------
				Borrar Pantalla;
				
				Escribir "La edad del paciente es: ", edad, " años";
				
				Escribir "El tipo de enfermedad del paciente es: ", tipo_enfermedad;
				
				Escribir "Estuvo internado por: ", estancia;
				
				Escribir "El costo total es de: $", costo_total;
				
				Si edad >= 14 && edad < 23 Entonces
					Escribir "Se le cobró un 10% extra";
				FinSi
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				Escribir "Ingrese c para hacer otro cobro o ingrese s para salir: ";
				Leer continuar;
				
				//Comparamos la entrada para saber que ingreso
				Si Minusculas(continuar) == 's' Entonces
					Borrar Pantalla;
					salir = Verdadero;
				FinSi
			//----------------------------------------------------------------------------------------
			//Aqui calculamos el costo del paciente, este caso es el 3, donde se cobra 200 por dia
			//----------------------------------------------------------------------------------------
			caso 3:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				costo_total = 200 * estancia;
				
				//Si el rango de edad esta entre el 14 y el 22 se le calcula un extra del 10%
				//el cual se le suma al valor total
				Si edad >= 14 && edad < 23 Entonces
					costo_adicional = costo_total * .10;
					costo_total = costo_total + costo_adicional;
				FinSi
				
				//------------------------------------------------------------------------------
				//Mostramos los resultados al usuario en la pantalla
				//------------------------------------------------------------------------------
				Borrar Pantalla;
				
				Escribir "La edad del paciente es: ", edad, " años";
				
				Escribir "El tipo de enfermedad del paciente es: ", tipo_enfermedad;
				
				Escribir "Estuvo internado por: ", estancia;
				
				Escribir "El costo total es de: $", costo_total;
				
				Si edad >= 14 && edad < 23 Entonces
					Escribir "Se le cobró un 10% extra";
				FinSi
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				Escribir "Ingrese c para hacer otro cobro o ingrese s para salir: ";
				Leer continuar;
				
				//Comparamos la entrada para saber que ingreso
				Si Minusculas(continuar) == 's' Entonces
					Borrar Pantalla;
					salir = Verdadero;
				FinSi
				//----------------------------------------------------------------------------------------
				//Aqui calculamos el costo del paciente, este caso es el 4, donde se cobra 320 por dia
				//----------------------------------------------------------------------------------------
			caso 4:
				//Calculamos el costo total multiplicando el precio del caso, por los dias que estuvo internado
				costo_total = 320 * estancia;
				
				//Si el rango de edad esta entre el 14 y el 22 se le calcula un extra del 10%
				//el cual se le suma al valor total
				Si edad >= 14 && edad < 23 Entonces
					costo_adicional = costo_total * .10;
					costo_total = costo_total + costo_adicional;
				FinSi
				
				//------------------------------------------------------------------------------
				//Mostramos los resultados al usuario en la pantalla
				//------------------------------------------------------------------------------
				Borrar Pantalla;
				
				Escribir "La edad del paciente es: ", edad, " años";
				
				Escribir "El tipo de enfermedad del paciente es: ", tipo_enfermedad;
				
				Escribir "Estuvo internado por: ", estancia;
				
				Escribir "El costo total es de: $", costo_total;
				
				Si edad >= 14 && edad < 23 Entonces
					Escribir "Se le cobró un 10% extra";
				FinSi
				
				//Le preguntamos al usuario si quiere hacer otro cobro o si quiere salir
				Escribir "Ingrese c para hacer otro cobro o ingrese s para salir: ";
				Leer continuar;
				
				//Comparamos la entrada para saber que ingreso
				Si Minusculas(continuar) == 's' Entonces
					Borrar Pantalla;
					salir = Verdadero;
				FinSi
				
			De Otro Modo:
				Escribir "El tipo ingresado no es correcto.";
				Esperar Tecla;
				
		FinSegun
	FinMientras
	//--------------------------------------------------------------------------------------------------------
	//Fin de la logica principal del programa
	//--------------------------------------------------------------------------------------------------------*/
FinProceso	