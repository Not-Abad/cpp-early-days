//Programa que muestra las iniciales del tecnologico

//Libreria
#include <stdio.h>  

/*Declarar variable global(En este caso una matriz
 donde el numero de variables en la matriz corresponde 
 a cada caracter de la oracion colocada)*/
char nombre[]="Instituto Tecnologico Superior de Xalpa";

//Inicio del programa
 int main ()
 {
 	//Escribir variable "nombre[0]"
	printf("%c",nombre[0]);
	
	//Escribir variable "nombre[10]"
	printf("%c",nombre[10]);
	
	//Escribir variable "nombre[22]"
	printf("%c",nombre[22]);
	
	//Escribir variable "nombre[34]"
	printf("%c",nombre[34]);
	
/*Ya que no se a indicado que se cambie de renglon
 en ningun momento, todas las variables se escribiran
 una a lado de la otra*/
 
//Fin del programa	
return 1;
 }
