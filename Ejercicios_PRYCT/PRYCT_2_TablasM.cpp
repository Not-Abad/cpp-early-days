/*Programa que muestre las tablas de 
  multiplicar que el usuario deseara*/
  
//Libreria
#include <stdio.h>

//Inicio del programa
int main () {
	
	//Declarar variables
	int x;
	
	//Pedir datos
	printf("Ingresa un numero: ");
	scanf("%i",&x);
	printf("La tabla de multiplicar de %i es:",x);
	
	//Repetir de i comenzando en 0,hasta que sea menor a 11 de 1 en 1
	for (int i = 1;i <= 10;i ++)
	
		/*para unir muchas variables en printf usamos 
		el formato ("tex,%i,text,%c,...,tex",var1,var2,...,varX);*/
       printf ("\n %i X %i = %i", x , i , i * x);

//Fin del programa    
return 1;
}
/*Version imperfecta del programa que solicito el profe
for (int i=0;i<11;i++){
	printf("%i ",i);
	printf("x");
	printf("%i", x);
	printf("=");
	printf("%i",x*i);
	printf("\n");
}*/
