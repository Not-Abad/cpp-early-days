 #include <stdio.h> 
 
 int main ()
{
 char oracion[]="analavalana";
 int palindromo=1 , i;
 
 printf("La oracion es: %s\n",oracion);
  
 for(i=0;oracion[i]!='\0';i++);
	 for(int w=0;w<i;w++)
	 	if(oracion[w]==oracion[i-(w+1)])
	 		palindromo=palindromo*1;
	 	else
	 		palindromo=palindromo*0;
	 		
 printf("%i",palindromo);
return 1;
}
