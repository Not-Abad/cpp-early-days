/*Programa que tenga una funcion que te de la palabra del numero(4-cuatro)*/

//Librerias
 #include <stdio.h> 
 
 char *Unidades(int n,int x,int ml)
  {
  	char a[]="uno";
  	switch(n)
  	{
  		case 1:
		  	if(1999>=x && x>=1000 && ml!=1)
  				return "";
  			else	
		  		return a;
 		case 2: return "dos";
 		case 3: return "tres";
 		case 4: return "cuatro";
 		case 5: return "cinco";
 		case 6: return "seis";
 		case 7: return "siete";
 		case 8: return "ocho";
 		case 9: return "nueve";
 		default: return ""; 		
	  }
  }

 char *DecenasM(int n)
  {
    switch(n)
  	{
  		case 11: return "once";
 		case 12: return "doce";
 		case 13: return "trece";
 		case 14: return "catorce";
 		case 15: return "quince";
 		default: return ""; 		
	  }	  	 
  }
  
 char *Decenas(int n,int u)
  {
  	switch(n)
  	{
  		case 1:if(u>5 && 9>u)
  				return "dieci";
			else
		  		return "diez ";
 		case 2: if(u>0)	
 				return "veinti";
 			else
 				return "veinte ";
 		case 3: return "treinta ";
 		case 4: return "cuarenta ";
 		case 5: return "cincuenta ";
 		case 6: return "sesenta ";
 		case 7: return "setenta ";
 		case 8: return "ochenta ";
 		case 9: return "noventa ";
 		default: return ""; 		
	  }	  	   	
  }

 char *Centenas(int n,int d, int u)
  {
  	switch(n)
  	{
  		case 1:if(d!=0 || u!=0)
		   		return "ciento ";
		   	else
			   	return "cien ";
 		case 2: return "docientos ";
 		case 3: return "trecientos ";
 		case 4: return "cuatrocientos ";
 		case 5: return "quinientos ";
 		case 6: return "seicientos ";
 		case 7: return "setecientos ";
 		case 8: return "ochocientos ";
 		case 9: return "novecientos ";
 		default: return ""; 		
	  }  	
  }

 void cifras(int n)
  {
 	int u,d,c,ml,x;
	x=n;
 hola:	
  	if(1000000>n && n>=1000)
 		ml=1000;
 	else
	 	ml=1;
	 	
	if(n>=100*ml)
	{
		c=n/(100*ml);
		n=n-(c*100*ml);
		
	}
	else
		c=0;
	
	if(n>=10*ml)
	{
		d=n/(ml*10);
		n=n-(d*10*ml);	
	}
	else
		d=0;
	
	u=n/(ml);	
	n=n-(u*ml);
	
	printf("%s",Centenas(c,d,u));
	if(((d*10)+u)<=14 && ((d*10)+u)>=11)
		printf("%s",DecenasM((d*10)+u));
	else
	{
		printf("%s",Decenas(d,u));
		if(u>0 && d!=2 && d!=1 &&d!=0)
			printf("y ");	
		printf("%s",Unidades(u,x,ml));
	}
	
	if(n>0 || (u*ml)==1000)
	{
		printf(" mil ");
		goto hola;	
	} 

  }
 
int main()
 {
	int n;
	
	printf("Escribe un numero:");
	scanf("%i",&n);
	/*
	for(int i=1;n>=i;i++)
	{
		printf("\n%i.- ",i);
		cifras(i);
	}
	*/
	
	printf("El numero que escribiste fue el: ");
	cifras(n);
	
	return 1;
 }
