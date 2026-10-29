/*Realizar un programa que realice descuentos
  dependiendo la edad y genero del usuario */

//Libretia
#include <stdio.h> 
	
//Inicio de la estructura del programa
int main ()
{
	//Declaro las variables
	int edad , boleto;
	float descuento;
	char genero;
	boleto=10;
	descuento=0;
	
	//Pedir datos
	printf("¿Eres hombre o mujer? ");
	scanf("%c",&genero);
	printf ("¿Que edad tienes?:");
	scanf("%i",&edad);

	//Separamos opciones
	if(genero=='M')  	//(G-1)Si el usuario es igual a M (mujer), entonces...
	
		if(18>edad) 	//(M-1)Si el usuario es menor a 18, entonces...
		{
			//Escribe
			descuento=0.3;
			boleto=boleto-(descuento*boleto);
			printf("LO QUE VAS A PAGAR VA A SER ");	
			printf("%i",boleto);
			printf(" POR SER MUJER ");
		}
		else	//(M-1)Sino
			if(edad>65)		//(M-2)Si el usuario es mayor a 65, entonces...
				{
				//Escribe
				descuento=0.70;
				boleto=boleto-(descuento*boleto);
				printf("LO QUE VAS A PAGAR VA A SER ");	
				printf("%i",boleto);
				printf(" POR SER MUJER");
				}	
			else	//(M-2) Sino
				{
				//Escribe
				printf("LO QUE VAS A PAGAR VA A SER ");	
				printf("%i",boleto);
				printf(" POR SER MUJER");
				}	
			//(M-2)Fin
		//(M-1)Fin  
			
	else	//(G-1)Sino
		if(18>edad)		//(H-1)Si el usuario es menor a 18, entonces...
		{
			//Escribe
			descuento=0.2;
			boleto=boleto-(descuento*boleto);
			printf("LO QUE VAS A PAGAR VA A SER ");	
			printf("%i",boleto);
			printf(" POR SER HOMBRE ");
		}
		else		//(H-1) Sino
			if(edad>65)		//(H-2) Si el usuario es mayor a 65, entonces...
				{
				//Escribe
				descuento=0.5;
				boleto=boleto-(descuento*boleto);
				printf("LO QUE VAS A PAGAR VA A SER ");	
				printf("%i",boleto);
				printf(" POR SER HOMBRE");
				}	
			else		//(H-2) Sino
				{
				//Escribe
				printf("LO QUE VAS A PAGAR VA A SER ");	
				printf("%i",boleto);
				printf(" POR SER HOMBRE");
				}	
			//(H-2)Fin
		//(H-1)Fin
	//(G-1)Fin
	
//Fin del programa
return 1;
}
