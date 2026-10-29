/*Programa que compare 2 valores y muestre
   el resultado de la comparacion*/
   
//Libretia
#include <stdio.h> 
int main (void)
//Inicio de la estructura del programa
{
	//Declaro las variables
	int x , y;
	x=18;
	y=17;
	
	if(x>y)  //Si X ES MAYOR a Y, entonces.....
	{
		//Escribe
		printf("X ES MAYOR a Y ");
		printf("ITSX");
	}
	else	//Si x NO ES MAYOR a y, entonces....
			if(y>x)  //Si Y ES MAYOR a X, entonces.....
			{
			//Escribe
			printf("Y ES MAYOR a X ");
			printf("ITSX");
			}
		else	//Si Y ES IGUAL A X, entonces....
		
		//Escribe
		printf("Y ES IGUAL A X ");
	
	return 1;
	
}
