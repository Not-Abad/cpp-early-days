/* Programa que muestre todos los factores
  que corresponden a cada numero del 1 al 99*/
//Libreria
#include <stdio.h>

//Inicio del programa
int main () {

//Muestra los numeros del 0 al 99
	/*Repetir iniciando en 0 siempre y cuando sea menor 
	o igual a 9, aumentando 1 en cada repeticion*/
	for (int x=0;x<=9;x++) {
		printf("\n");
		
		/*Repetir iniciando en 0 siempre y cuando sea menor
		o igual a 9, aumentando 1 en cada repeticion*/
		for (int y=0;y<=9;y++)
			printf("%i%i ",x,y); 
	}
	
	//Muestra los divisores de cada numero del 1 al 99
	printf("\n Los numeros divisores de los numeros anteriores son:");
	/*Repetir iniciando en 1, siempre y cuando sea menor
	 o igual a 99, aumentando 1 en cada repeticion*/
	for (int z=1;z<=99;z++){	//For(z)
		printf("\n%i esta compuesto por :",z);
		/*Repetir iniciando en 1 , siempre y cuando sea menor
		 o igual a x, aumentando 1 en cada repeticion*/
		 
		for (int x=1;x<=z;x++)		//For(x)
			if (z%x==0)		//Si el residuo de z/x=0 Entonces....
				printf("%i ",x);
				
			//Fin if
		//Fin for(x)
	}//Fin for(z)
	
//Fin del programa
return 1;
}

