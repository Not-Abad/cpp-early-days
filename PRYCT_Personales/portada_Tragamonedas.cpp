/*Intro de tragamonedas*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 
//Codigo Coordenadas
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
//Codigo Colores
 void colors(int ct, int cf){
 	
 	//Delimito el color del texto, para que no halla
 	//modificaciones al color del fondo
  	while(ct>=16)
  		ct=ct-16;
  	
 	int cc;
 	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cc=(cf*16)+ct;
 	SetConsoleTextAttribute(hConsole,cc);
 	
 } 
 
 int main(){
 	
 	for(int y=0;y<=24;y++)
 		for(int x=0;x<=119;x++){
 			gotoxy(x,y);
			colors(y,0);
			printf("%c",178);
	 	}
 	
 		
		 	
 	colors(15,0);
 	return 1;
 }
