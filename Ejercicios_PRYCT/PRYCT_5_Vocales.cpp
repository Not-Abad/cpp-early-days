//Librerias
#include <stdio.h>  

//Inicio del programa
int main ()
{
//Declarar variable(En este caso una matriz de variables)
 char nombre[]="la cancion de aquiles con el mayor sonido que tiene";
 char vocales[]="aeiouAEIOU";
 int a=0,b=0,c=0,z;
 
 //Repetir siempre y cuando el caracter NO(!) sea '\0'
 //iniciando en 0, aumentando 1 en cada repeticion
 for (z=0;nombre[z]!='\0';z++);
 
 //Repetir siempre y cuando x sea menor o igual a z
 //iniciando x=0 aumentando 1 en cada repeticion
 for (int x=0;x<=z;x++)  {
 	//SI nombre[x]=' ' Entonces sumale 1 a b
 	if (nombre[x]==' '){
	  	b=b+1;
		 }

 		
 	//Repetir siempre y cuando "y" sea menor o igual a 9,
 	//iniciando en 0 aumentando 1 en cada repeticion
 	for (int y=0;y<=9;y++)
 		//SI nombre[x]=cualquier vocal Entonces suamle 1 a "a"
 		if (nombre[x]==vocales[y])
	 			a++;	
	 
 }
	printf("%s\n\n",nombre);
	printf("El numero de letras de la oracion son: %i\n",z);
	printf("Las vocales que tiene la oracion son: %i\n",a);
	printf("Los espacios de la oracion son: %i \n",b);
	printf("Las consonantes de la oracion son: %i",z-(a+b));
	
 /*
 int z;
 for (z=0;nombre[z]!='\0';z++);
 printf("%i ",a);*/

return 1;
}

