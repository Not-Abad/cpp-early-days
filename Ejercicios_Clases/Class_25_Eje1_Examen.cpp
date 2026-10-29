/*Programa que simule un reloj*/

//Libreria
#include <stdio.h>

//Inicio del programa
int main () {
	
	//Repetir iniciando a las 0hrs hasta las 24hrs
	for(int hh = 0;hh < 24;hh++)
		//Repetir iniciando en 0 min hasta 60 min
		for(int mm = 0;mm < 60;mm++)
			//Repetir iniciando en 0 seg hasta 60 seg
			for(int ss = 0; ss < 60; ss++)
				//Mostrar en pantalla el ciclo
				printf("%i:%i:%i\n",hh,mm,ss);
			

	return 0;
}

