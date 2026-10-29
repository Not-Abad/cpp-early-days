/*Programa que te deje apostar a la cara de un dado*/

//Librerias
 #include <stdio.h> 
 #include <cstdlib> 
 #include <time.h>  

//Inicio del programa
 int main (void)  {	
 
//Declarar variable
 int nAleatorio;
 int Limite_inferior=1;
 int Limite_superior=6;
 	
//Semilla de aleatoriedad respecto al tiempo
 srand(time(NULL));	
 
 /*Los valores que puede tomar el numero aleatorio
 esta limitado por el minimo y el maximo, por lo
 que no puede tomar valores menores al minimo
 ni mayores que e maximo*/
 
  for (int i=1;i<=10;i++) 
  {
  	nAleatorio = Limite_inferior + rand() % (Limite_superior+1-Limite_inferior);
	printf("%i\n",nAleatorio);	
  }
 

//Fin del programa
 return 1;     
}

