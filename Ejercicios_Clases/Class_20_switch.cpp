
//Librerias
 #include <stdio.h>
 
 int main(){
 	
 	int n;
 	
	 printf("Escribe un numero(1-9): ");
	 scanf("%i",&n);
	 
	 printf("El numero que escribiste fue: ");
 	switch(n)
 	{
 		case 1:	printf("uno");	break;
 		case 2:	printf("dos");	break;
 		case 3:	printf("tres");	break;
 		case 4:	printf("cuatro");break;
 		case 5:	printf("cinco");break;
 		case 6:	printf("seis");	break;
 		case 7:	printf("siete");break;
 		case 8:	printf("ocho");	break;
 		case 9:	printf("nueve");break;
 		default:printf("error");break;
	 }
 }
