/*Programa que almacene el cuadrado de
  5 valores que da el usuario*/

//Libreria
#include <stdio.h>

//Inicio del programa
int main () {
	
	//Declarar variables locales
	int n[5];
	int x[5];
	
	//Repetir de i comenzando en 1,
	//Siempre y cuando sea menor o igual a 5
	for (int i = 1;i <= 5;i++)
	{
		//Pedir al usuario
		printf("Escribe el valor %i: ",i);	
		scanf("%i",&x[i]);
		
		//Formulario
		n[i] = x[i] * x[i];
	}
		
	for (int i = 1;i <= 5;i++){
		
		printf("La multiplicacion de %i X %i = %i\t",x[i],x[i],x[i]*x[i]);
		printf("El cuadrado de %i es : %i\n",x[i],n[i]);	
		
	}
	
		
	return 1;
}

