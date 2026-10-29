//Funciones recursivas

//Libretia
#include <stdio.h> 
	
int factorial(int n){

		return (factorial(n-1)*n);	
	
}	

int main(){
	
	int n;
	printf("Escribe un numero: ");
	scanf("%i",&n);
	printf("el factorial de %i es: %i",n,factorial(n));
	return 1;
}	
