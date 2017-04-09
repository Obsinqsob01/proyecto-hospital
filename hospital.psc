Proceso hospital
	Definir salir Como Logico;
	salir = Falso;
	Definir opc,edad,estancia, tipo_enfermedad Como Entero;
	Definir costo_adicional, costo_total Como Real;
	
	//Lógica del programa*/
	Mientras NO salir Hacer
		segun opc Hacer
			caso 1:
				Segun (tipo_enfermedad) Hacer
					caso 1:
						costo_total<-250 * estancia;
						Si edad >= 14 && edad < 23 Entonces
							costo_adicional<- costo_total * .10;
							costo_total = costo_total+ costo_adicional;
						FinSi
					caso 2:
						costo_total = 160 * estancia;
						Si edad >= 14 && edad < 23 Entonces
							costo_adicional = costo_total * .10;
							costo_total = costo_total+ costo_adicional;
						FinSi
					caso 3:
						costo_total<-200 * estancia;
						Si edad >= 14 && edad < 23 Entonces
							costo_adicional = costo_total * .10;
							costo_total = costo_total+ costo_adicional;
		                FinSi
					caso 4:
						costo_total<-320 * estancia;
						Si edad >= 14 && edad < 23 Entonces
							costo_adicional<- costo_total * .10;
							costo_total = costo_total + costo_adicional;
						FinSi
				FinSegun
			caso 2:
				//Mostrar registros
			caso 3:
				salir = true;
		FinSegun
	FinMientras
	
	//Fin de la lógica*/
FinProceso