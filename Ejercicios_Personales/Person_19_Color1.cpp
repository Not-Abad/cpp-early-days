
//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 
 //Comando personal
 #define color SetConsoleTextAttribute

 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 
 //Incio del programa
 int main(){
 
 //	Nombre del programa en formato .exe
 system("title Hola Mundo de Colores");
 
 //Tomar el control de CMD
 HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
 /*
 for(int i=1;i<=256;i++){
 	color(hConsole, i);
 	printf("Hola mundo\n");
 }
 
 */
 for(int y=0;y<=25;y++)
 	for(int x=0;x<=9;x++)
 		{
 			color(hConsole,(y*10)+x);
 			gotoxy(x*12,y);
 			printf("  %c%c%c%c%c%c%c%c",176,176,177,177,178,178,219,219);
		 }

 //Fin del programa
 return 1;	
 }
 
  /*
 color(hConsole, 1);
 gotoxy(0,0); forma;
 
 color(hConsole, 7);
 gotoxy(2,0); forma*/;
