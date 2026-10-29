/*Programa que una las letras H,o,l,a de los
extremos de la pantalla usando ciclo for*/
//Librerias
#include <stdio.h>  
#include <windows.h>  

//Funcion gotoxy
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 //Inicio del programa
 int main() {
	
	int y=1;
	/*Repetir iniciando en x=1 siempre y cuando
	x sea menor o igual a 5 aumentando 1 en cada repeticion*/
	for (int x=1;x<=39;x++) {
		if (39%x==0)
			y=y+1;
		gotoxy(x,6);
		printf(" H");
		gotoxy(41,1+y);
		printf("o");
		gotoxy(41,y-1);
		printf(" ");
		gotoxy(42,13-y);
		printf(" ");
		gotoxy(42,11-y);
		printf("l");
		gotoxy(82-x,6);
		printf("a ");
		Sleep(10);

}
//Fin del programa
 return 1;
 }
