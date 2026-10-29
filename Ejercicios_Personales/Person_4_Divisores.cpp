/*Programa que calcule todos los 
  divisores de cualquier numero*/
  
//Libreria
#include <stdio.h>

//Inicio del programa
int main () {
	
	//Declarar variables
	int Numero;
	
	//Mostrar y pedir datos
	printf("Programa que muestra los divisores de cualquier numero\n\n");
	printf("Escribe un numero: ");
	scanf("%i",&Numero);
	
	//Escribir
	printf("Los multiplos de %i son:\n",Numero);
	for (int x=1;x<=Numero;x++) 
		if(Numero%x==0)
			printf("%i ",x);	

//Fin del programa    
return 1;
}
