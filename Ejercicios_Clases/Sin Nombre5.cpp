
//Librerias
 #include <stdio.h>
 
 char *mes(int n)
 {
 	switch(n)
 	{
 		case 1:	
 		case 3:	
 		case 5:	
 		case 7:	
 		case 8:
 		case 10:
 		case 12:	return "31 dias";
 		case 2:		return "28 dias";
 		case 6:	
 		case 9:		return "30 dias";
 		default:	return "Mes no valido";
	 }
	 
 }
 int main(){
 	
 	int n;
 	
 	 printf("\t\tDias del mes");
	 printf("Escribe un numero del mes(1-12): ");
	 scanf("%i",&n);
	 
	 printf("El mes 1 tiene  ");
 	 printf("%s",mes(n));
 	 
	return 1;	 
 }
