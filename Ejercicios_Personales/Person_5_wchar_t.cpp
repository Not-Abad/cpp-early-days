//Programa que almacene una variable tipo caracter

//Libretia
#include <stdio.h> 
	
//Inicio de la estructura del programa
int main ()
{
	//Declaro variables
	wchar_t nombre;
	
	//Pedir datos
	printf("¿Cual es tu nombre? ");
	scanf("%s",&nombre);
	
	//Escribir
	printf("Tu nombre es ");
	printf("%s",&nombre);
	
	/*wchar_t es incapas de almacenar el caracter del espaciador
	" " por lo que se tiene que sustituir por guion bajo "_"*/
	
//Fin del programa
return 1;
}
