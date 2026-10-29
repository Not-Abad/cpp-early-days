/*Programa que muestre si el numero que
  escribe el usuario es primo o compuesto */

//Libreria
#include <stdio.h>

//Inicio del programa
int main () {
	
	//Declarar variables
	int numero, residuo, contador;
		
	//Pedir datos
	printf("Dame un numero: ");	
	scanf("%i",&numero);
		
	/*Repetir de i comenzando en 1,siempre y cuando sea
	 menor o igual a "numero" de 1 en 1	*/
	for (int i = 1;i <= numero;i ++)
	{
		residuo=numero%i;
		
		//Si residuo=0 entonces sumale a contador
		if (residuo==0)
			contador=contador+1;
	}
	
	if (contador<=2)
		printf("Es un numero primo");
	else
		printf("Es un numero compuesto");

//Fin del programa    
return 1;
}
