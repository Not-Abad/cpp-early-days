/*Programa que tenga una funcion que te de la palabra del numero(4-cuatro)*/

//Librerias
 #include <stdio.h> 
 
  char *Unidades(int n)
  {
  	if(n==0)
  		return "";
  	if(n==1)
  		return "uno";	
	if(n==2)
  		return "dos";
  	if(n==3)
  		return "tres";	
  	if(n==4)
  		return "cuatro";
	if(n==5)
  		return "cinco"; 	
  	if(n==6)
  		return "seis";
	if(n==7)
  		return "siete";	 
	if(n==8)
  		return "ocho";
	if(n==9)
  		return "nueve";	  	   	
  }

  char *DecenasM(int n)
  {
  	if(n==11)
  		return "once";
  	if(n==12)
  		return "doce ";	
	if(n==13)
  		return "trece ";	
  	if(n==14)
  		return "catorce ";
	if(n==15)
  		return "quince "; 	 	 
  }
  
  char *Decenas(int n,int u)
  {
  	if(n==0)
  		return "";
  	if(n==1)
  		if(u>=6 && 9>=u)
  			return "dieci";
  		else	
  			return "diez ";
	if(n==2)
		if(u>0)	 
		 	return "veinti";
		 else
		 	return "veinte ";	
  	if(n==3)
  		return "treinta ";	
  	if(n==4)
  		return "cuarenta ";
	if(n==5)
  		return "cincuenta "; 	
  	if(n==6)
  		return "sesenta ";
	if(n==7)
  		return "setenta ";	 
	if(n==8)
  		return "ochenta ";
	if(n==9)
  		return "noventa ";	  	   	
  }

  char *Centenas(int n)
  {
  	if(n==0)
  		return "";
  	if(n==1)
  		return "ciento ";	
	if(n==2)
  		return "docientos ";
  	if(n==3)
  		return "trecientos ";	
  	if(n==4)
  		return "cuatrocientos ";
	if(n==5)
  		return "quinientos "; 	
  	if(n==6)
  		return "seicientos ";
	if(n==7)
  		return "setecientos ";	 
	if(n==8)
  		return "ochocientos ";
	if(n==9)
  		return "novecientos ";	  	   	
  }
 
 void cifras(int n)
 {
 	int u,d,c;
 	
	if(n>=100)
	{
		c=n/100;
		n=n-(c*100)	;
	}
	else
		c=0;
	
	if(n>=10)
	{
		d=n/10;
		n=n-(d*10);	
	}
	else
		d=0;
		
	u=n;	
	
	printf("%s",Centenas(c));
	if(((d*10)+u)<=15 && ((d*10)+u)>=11)
		printf("%s",DecenasM((d*10)+u));
	else
	{
		printf("%s",Decenas(d,u));
		if(u>0 && d!=2 && d!=1 && d!=0)
			printf("y ");	
		printf("%s",Unidades(u));
	}

 }
 
int main()
{
	int n;
	
	printf("Escribe un numero:");
	scanf("%i",&n);
	printf("El numero que escribiste fue el: ");
	cifras(n);
	
	return 1;
}



//26 de noviembre de 20xx
