/*Programa que indique que letra has tocado al momento*/

//Librerias
 #include <stdio.h>
 #include <conio.h>

 #define ENTER 13

int main(){
	
retorno:
	
    switch (getch())
    {
    case 'a':
        printf("Has pulsado a\n");	break;
    case 'A':
		printf("Has pulsado A\n");	break;
    case 'b':
        printf("Has pulsado b\n");	break;
    case 'B':
		printf("Has pulsado B\n");	break;
    case 'c':
        printf("Has pulsado c\n");	break;
    case 'C':
		printf("Has pulsado C\n");	break;    

    //...

    case '\r':
        printf("Has pulsado enter");	goto fin;
    }
    goto retorno;    
    
fin:
    return 0;
}



