
//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 
 //Comando personales
 #define color SetConsoleTextAttribute(hConsole,i)
 
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
 	
 	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 	int i=-1;
 	for(int y=0;y<=15;y++)
 	for(int x=0;x<=15;x++){
 		i++;
	    color;
	    gotoxy(y*7,x);
	    printf(" %c%c%c%c",176,177,178,219);
	}
 i=15;
 color;
 
 return 1;	
 }
 
  /*
 	for(int y=0;y<=25;y++)
 	for(int x=0;x<=9;x++)
 		{
 			color(hConsole,(y*10)+x);
 			gotoxy(x*12,y);
 			printf("  %c%c%c%c%c%c%c%c",176,176,177,177,178,178,219,219);
		 }
 	*/

