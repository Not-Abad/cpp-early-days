/*Programa que muestre en cascada el nombre del tecnologico.*/

//Librerias
#include <stdio.h>  
#include <windows.h>  

//Funcion gotoxy
 void gotoxy(int x,int y)
{  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }   
 
//Inicio del programa
int main ()
{
//Declarar variable(En este caso una matriz de variables)
char nombre[]="Instituto Tecnologico Superior de Xalapa";

//Escribir la cadena de la matriz "nombre"
 printf("%s",nombre);

   /*se va a repetir "i" 40 veces y "y" 23, donde (i,y) representaran
    las coordenadas y "nombre[i]" el caracter del momento*/
	for (int i=0;i<=40;i++)
		for(int y=1;y<=24;y++)
		{
			Sleep(100);
			gotoxy(i,y-1);
			printf(" ");
			gotoxy(i,y);
			printf("%c",nombre[i]);
		}

//Fin del programa	
return 1;
}
