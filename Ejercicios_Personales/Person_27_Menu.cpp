/*Menu*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 
 //funcion Coordenadas
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
//funcion Colores
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
 
 //Funcion Mostrar cursor
 bool VerCursor(bool cursor){
	HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;
    cci.bVisible = cursor;
    SetConsoleCursorInfo(hcon,&cci);  
 }
 
//Funcion marco
 void marco(int xi,int yi,int xf, int yf){
 	
 	colors(0,15);

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

int main(){
	
	colors(0,15);	system("cls");
	
	marco(5,7,40,14);
	
	gotoxy(0,24);	return 1;
}
