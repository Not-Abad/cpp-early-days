#include <stdio.h> 

int main( )
{ 
int a,b,c,d;
//tipo de variable son:
//alfanumerico= caracter y cadena
//				char		wchar_t o char variable[
//tipo numerico= enteros y decimales
//				int			float
/*
para alguna variable numerica como int se puede usar tanto el principio como en algum otro momento del codigo*/
//printf("Texto %(tipo de la variable) alsdnkfsjbas",variable);
printf("Introduce el primer numero: ");
//scanf(%(tipo de variable))
scanf("%i",&a);
printf("Introduce el segundo numero: ");
scanf("%i",&b);

printf("Suma %i",a+b);



return 1;
} 
