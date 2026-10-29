/*Programa que muestre la cara de un Creeper*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 
//funcion Color 2
 void colors(int ct, int cf){
 	int cc;
 	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cc=(cf*16)+ct;
 	SetConsoleTextAttribute(hConsole,cc);
 	
 } 
 
 //funcion Color
 void color(int c){
 	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 	SetConsoleTextAttribute(hConsole,c);
 }
 
 //funcion Coordenadas
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 //Inicio del programa
 int main(){
 	
	//Referencias horizontal
	 for(int x=5;x<=110;x+=6)
	 {
	 	gotoxy(x,0);printf("*");
	 }
	 
	//Referencias Verticales
	 for(int y=1;y<=24;y+=3)
	 {
	 	gotoxy(33,y);printf("*");
	 }
	
	//indica que el fondo sea negro y los caracteres verdes
	colors(2,0);
	
	//Piel del Creeper 
 	 for(int y=1;y<=24;y++)
 		for(int x=35;x<=82;x++){
 			gotoxy(x,y);
 	 		printf("%c",219);
		 }
	
	//Boca del Creeper
 	 for(int y=4;y<=9;y++)
 	 	for(int x=41;x<=52;x++){
 	 		gotoxy(x,y);
 	 		printf(" ",219);
 	 		gotoxy(x+24,y);
 	 		printf(" ",219);
		}
	
	 for(int y=10;y<=12;y++)
 	 	for(int x=53;x<=64;x++){
 	 		gotoxy(x,y);
 	 		printf(" ",219);
		}	
 	 for(int y=13;y<=18;y++)
 	 	for(int x=47;x<=70;x++){
 	 		gotoxy(x,y);
 	 		printf(" ",219);
		}
 	 
	  for(int y=18;y<=21;y++)
 	 	for(int x=47;x<=52;x++){
 	 		gotoxy(x,y);
 	 		printf(" ",219);
 	 		gotoxy(x+18,y);
 	 		printf(" ",219,219);
		}	
					  			
/* i=112;color; */
 color(15);
 colors(15,0);
 gotoxy(0,25);
 return 1;
}	


