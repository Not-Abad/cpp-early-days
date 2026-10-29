/*Programa que pida al usuario 2 valores y muestre
   el resultado de la comparacion*/
   
//Libretia
#include <stdio.h> 
int main ()
//Inicio de la estructura del programa
{
	//Declaro las variables
	int x , y;
	
	printf("Dame un valor: ");
	scanf("%i",&x);
	printf ("Dame otro valor:");
	scanf("%i",& y);
	
	if(x>y)  //Si X ES MAYOR a Y, entonces.....
	{
		//Escribe
		printf("%i",x);
		printf(" ES MAYOR A ");
		printf("%i",y);	
	}
	else	//Si x NO ES MAYOR a y, entonces....
		if(y>x)  //Si Y ES MAYOR a X, entonces.....
		{
			//Escribe
			printf("%i",y);
			printf(" ES MAYOR A ");
			printf("%i",x);	
		}
		else	//Si Y ES IGUAL A X, entonces....
		
		//Escribe
		printf("Y ES IGUAL A X ");
	
	return 1;
	
}
