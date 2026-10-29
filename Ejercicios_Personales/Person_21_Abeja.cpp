
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
 	
	 int i;
 	
	 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	 i=7;color;	
 	 for(int y=0;y<=25;y++)
 	 	for(int x=0;x<=120;x++){
 	 		gotoxy(x,y);
 	 		printf("%c",219);
		}
		
 	 i=6;color;
 	 for(int y=1;y<=20;y++)
 		for(int x=35;x<=75;x++){
 			gotoxy(x,y);
 	 		printf("%c%c",219,219);
		 }
		 
 	i=0;color;	
 	 for(int y=3;y<=5;y++)
 	 	for(int x=41;x<=45;x++){
 	 		gotoxy(x,y);
 	 		printf("%c%c",219,219);
 	 		gotoxy(x+24,y);
 	 		printf("%c%c",219,219);
		}
		  
	 for(int y=12;y<=17;y++)
 	 	for(int x=35;x<=45;x++){
 	 		gotoxy(x,y);
 	 		printf("%c%c",219,219);
 	 		gotoxy(x+30,y);
 	 		printf("%c%c",219,219);
		}	  
	 i=3;color;	
	 for(int y=12;y<=14;y++)
 	 	for(int x=41;x<=45;x++){
 	 		gotoxy(x,y);
 	 		printf("%c%c",219,219);
 	 		gotoxy(x+24,y);
 	 		printf("%c%c",219,219);
		}	  
		
			
 	 i=112;color;
 gotoxy(0,22);
 return 1;
}	



