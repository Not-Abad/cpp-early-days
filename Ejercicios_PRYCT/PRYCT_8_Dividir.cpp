/*Programa que divida sin dividir*/

//Librerias
 #include <stdio.h> 
 
 //Inicio del programa
 int main () 
  {
  	//Declarar variables
  	int numerador, denominador;
  	int i=0;
  	
  	//Pedir datos
  	printf("Escribe un numero: ");
  	scanf("%i",&numerador);
  	printf("A que numero lo quieres dividir? ");
  	scanf("%i",&denominador);
  	
  	//Repetir siempre y cuando el numerador sea
  	//mayor o igual al denominador
  	while(numerador>=denominador){  
  	//En dado caso que se quiera usar el ciclo for
  	//for(i=0; numerador>=denominador;i++)
  	
  		//Aumentale a "i" 1 en cada repeticion
  		i++;
  		
  		//En cada repeticion resta el denominador a numerador
  		numerador=numerador-denominador;
  	
	/*Fin del While*/
	}
	  
	 //Mostrar resultado 
	 printf("El cociente es %i\n",i); 
	 printf("Y el residuo es: %i\n",numerador);
	
//Fin del programa	
return 1;  
  }
