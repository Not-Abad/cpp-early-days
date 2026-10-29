/*Convierte la cadena que retorna una funcion a una
 matriz de caracteres dentro del programa*/

//Librerias
 #include <stdio.h> 
 
 //Funcion tipo cadena
 char* funcionCadena(){
 	
 	//Regresar el valor
 	return "hola";
 }
 
 //Inicio del programa
 int main(){
 	
 	//Variables locales
 	char arreglo[20];
 	int longitud=0;
 	
 	//Enlazar el Puntero a la funcion
 	/*El puntero permite agarrar 1 solo caracter de toda 
	 la cadena a la cual se le dio el mismo valor*/
 	char* ptr=funcionCadena();
 	
 	//Mostrar toda la cadena mediante
 	//la variable enlazada
 	printf("%s\n",ptr);
 	
 	/*Repetir siempre y cuando el puntero
 	  no muestre el caracter "vacio"*/
 	while(*ptr!='\0'){
 		
 		//muestra el valor actual que tomaste
 		printf("%i.-\t%c\n",*ptr,*ptr);
 		
		//aumenta en 1 el contador
 		longitud++;
 		
 		/*Mueve una posicion hacia adelante el puntero*/
 		ptr++;
	 }
	 
	//Regresar el puntero a la posicion 1
	 ptr=ptr-longitud;
	 
	
	/*Repetir contador iniciando en 0 aumentando 1 en cada repeticion
	 siempre y cuando el contador sea menor a la longitud de la cadena*/
	 for(int i=0;i<longitud;i++) {
	 	
	 	//Meter el caracter que selecciona el puntero
	 	//a la posicion "i" de la matriz
		arreglo[i]=*ptr;
		
		//mover el puntero una posicion hacia adelante
		ptr++;
	}
	
	
	arreglo[longitud]='\0';
	for(int i=0;i<longitud;i++) 
	{
		printf("%c\n",arreglo[i]);

	}
	arreglo[0]=arreglo[0]-32;
	 printf("%s",arreglo);
 	return 1;
 }
