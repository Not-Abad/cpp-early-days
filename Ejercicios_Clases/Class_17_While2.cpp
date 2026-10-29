#include <stdio.h>  
#include <windows.h>  

//Declarar variables
char r[]="SISTEMAS";
int i=0;

//Inicio del programa
int main (){
	
//Mientras la matriz no tenga el caracter vacio	
  while (r[i]!='\0'){
   	
   	//Escribe
   	printf("%c",r[i]);
   	
   	//Aumenta 1 en cada repecion
   	i=i+1;
   	
   	//Relentizar 1000 unidades
   	Sleep(1000);
   }
   
//Fin del programa   
return 1;
}
