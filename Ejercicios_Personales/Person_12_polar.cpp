/*Programa que convierta numeros 
complejos a coordenadas polares*/
/*
2+3i
fijo carteciano(2,3)
r=raiz cuadrada(2*2+3*3)
angulo=atg(3/2)
forma polar(r,angulo)
*/

//Libreria
#include <stdio.h> 
#include <cmath> 

//Inicio de la estructura del programa
int main (void) {
	
	//Declarar variables
	int nr,ni;
	float r,angulo;
	
	//Pedir datos
	printf("Programa que convierete numeros complejos");
	printf("a coordenadas polares\n");
	printf("Dame el numero real: ");
	scanf("%i",&nr);
	printf("Dame el numero imaginario: ");
	scanf("%i",&ni);
	
	//r=raiz cuadrada((nr^2)+(ni^2))
	r=sqrt((nr*nr)+(ni*ni));
	
	//angulo=arcotangente(ni/nr)
	angulo=(180/3.14)*atan2(ni,nr);
	
	//Mostrar forma carteciana y polar
	printf("Su forma carteciana es:\n        (%i,%i)\n",nr,ni);
	printf("  Su forma porlar es:\n (%f,%f')",r,angulo);
	
//Fin de la estructura del programa
return 1;
}

