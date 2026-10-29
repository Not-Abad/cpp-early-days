//Librerias
#include <stdio.h>  

//Inicio del programa
int main ()
{
//Declarar variable(En este caso una matriz de variables)
 char oracion[]="ana ana";
 int a,z,b;
 
 
 for (int w=0;oracion[w]!='\0';w++)
	 for (a=w;oracion[w]==' ';a--)
	 {
	 	for (z=w;oracion[z]!='\0';z++)
 			oracion[w]=oracion[z+1];
	 }
 		
 	
 	printf("%s\n",oracion);
 	
 for (int x=0;x<=z;x++) 
 { 
  if (oracion[x]==oracion[z-x+a])
 		b++;
	 }
	 
 if(b>=1)
 	printf("No es un polindromo");
 else	
 	printf("Es un polindromo");
 	
 	

	
 /*
 int z;
 for (z=0;nombre[z]!='\0';z++);
 printf("%i ",a);*/

return 1;
}

