
//Libreria
#include <stdio.h>  
#include <windows.h>  
#include <conio.h> 

//Comandos personales
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

//Variables globales 
 int xi=3, xf=xi+115;
 int yi=2 , yf=yi+22;

//Funcion Coordenadas
 void gotoxy(int x,int y) {  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 //Funcion Ocultar cursor
 void OcultarCursor(){
	  HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      CONSOLE_CURSOR_INFO cci;
      cci.dwSize = 1;
      cci.bVisible = FALSE;
      SetConsoleCursorInfo(hcon,&cci);  
 	
 }

//Funcion marco
 void marco(){
 	
 	//Limpiar pantalla 
 	system("cls");
 	
 	//Lineas horizontales
	for(int x=xi;x<=xf;x++){
		gotoxy(x,yi); printf("%c",205);
		gotoxy(x,yf); printf("%c",205);
	}
	
	//Lineas verticales
	for(int y=yi;y<=yf;y++){
		gotoxy(xi,y); printf("%c",186);
		gotoxy(xf,y); printf("%c",186);
	}
	
	
	//Esquinas del marco
	gotoxy(xi,yi); printf("%c",201);
	gotoxy(xf,yi); printf("%c",187);
	gotoxy(xi,yf); printf("%c",200);
    gotoxy(xf,yf); printf("%c",188);
	}

//Inicio del programa
 int main()
{  
//Nombre del programa en .exe
system("title Serpiente");

//Declarar variables
 int x=10,y=10,a=0;
 bool game_over = false; 
 char tecla;
 
 //Llamar a OcultarCursor
 OcultarCursor();
 marco();
 
 gotoxy(x,y); printf("%c%c",219,219); 
 gotoxy(1,1); printf("%i",a);
 
 Hola:
	 gotoxy(x,y); printf("%c%c",219,219); 	
	 getch();
	 
    if(kbhit()){
    	tecla = getch();
      	gotoxy(x,y); printf("  ");
      	if (tecla == IZQUIERDA && xi<x-1)x--;
      	if (tecla == DERECHA && x<xf-2)x++;
      	if (tecla == ARRIBA && yi<y-1)y--;
      	if (tecla == ABAJO && y<yf-1)y++;
      	gotoxy(1,1); printf("%i",a);a=a+1;
	}
 goto Hola;	
 
 return 1;  
 }


