/*Programa que pida 2 valores y que
  muestre el resultado de la suma*/
  
//Libretia
#include <stdio.h> 
int main (void)
//Inicio de la estructura del programa
{
	int A , B;
	printf("Dame un valor: ");
	scanf("%i",& A);
	printf ("Dame otro valor: ");
	scanf("%i",& B);
	printf("La suma es %i", A + B);	

	//Le regresa el control al sistema operativo
	//y le indica que no hay fallas
	return 1;
}
//Fin de la estructura del programa
