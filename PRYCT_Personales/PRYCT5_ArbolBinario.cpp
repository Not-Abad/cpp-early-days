/*Programa que muestre un recorrido in orden*/

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
 
//Funcion marco
 void marco(int xi,int yi){
 	
 	int xf=xi+4;
 	int yf=yi+2;
 
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
    
    gotoxy(xi+2,yi+1);	printf("%c",219);
    
}

//Inicio del programa
 int main(){
 	
 	system("title In Orden");
 	marco(10,5);
 	gotoxy(5,0);	printf("Hola");
 	return 1;
 }
