/*Programa que te deje apostar a la cara de un dado*/

//Librerias
 #include <stdio.h> 
 #include <cstdlib> 
 #include <time.h>
 
 //Numeros aleatorios
int random(int minimo,int maximo){
	
	//Declarar variable local
	int nAleatorio;
	
 	//Semilla de aleatoriedad respecto al tiempo
 	srand(time(NULL));	
 	
 	/*Los valores que puede tomar el numero aleatorio
 	  esta limitado por el minimo y el maximo, por lo
	  que no puede tomar valores menores al minimo
	  ni mayores que e maximo*/
 	nAleatorio = minimo + rand() % (maximo+1-minimo);
 	
 	//Al finalizar la funcion, regresa al programa el numero aleatorio
 	return(nAleatorio);
}

//Inicio del programa
 int main () {
	
	//Declarar variables locales
	int opcion, dado, apuesta;
	int Coins=10;
	int Meta=50;
	
	//Repetir siempre que tengas Coins
	//y aun no llegues a la meta
	while(Coins>=1 && Meta>Coins){
		
		//Darle un valor aleatorio al dado
		dado=random(1,6);
		
		//Pedir datos
		printf("\nTienes %i Coins, Cuantas coins vas a apostar: ",Coins);
		scanf("%i", & apuesta);
		Coins=Coins-apuesta;
		printf("A que cara del dado quieres apostar? ");
		scanf("%i", & opcion);
		printf("La cara del dado que salio fue %i ",dado);
	
		//Si el usuario hacerto entonces...	
		if(opcion==dado)
		{
			Coins=Coins+(apuesta*3);
			printf("Ganaste %i",apuesta*3);
		}
		else
			printf("Perdiste %i",apuesta);
		//Fin if
	//Fin while
	}

//Fin del programa	
return 1;	
}
