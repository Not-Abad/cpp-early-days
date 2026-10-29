/*Programa que muestre muchos marcos pegados*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 
 //Variables globales
 int c=3;
 int pox=38; int pfx=pox+(14*c);
 int poy=0;  int pfy=poy+(7*c);

 //funcion Coordenadas
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 //Cuadros verticales
 void marco_vertical(int xi, int yi){
 	 	
 	int xf=xi+c*2;
 	int yf=yi+c;
 	
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
	gotoxy(xi,yi); printf("%c",204);
	gotoxy(xf,yi); printf("%c",185);
	gotoxy(xi,yf); printf("%c",200);
    gotoxy(xf,yf); printf("%c",188);
 	
 }
 
//Cuadros horizontal
 void marco_horizontal(int xi, int yi){
 	 	
 	int xf=xi+c*2;
 	int yf=yi+c;
 	
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
	gotoxy(xi,yi); printf("%c",203);
	gotoxy(xf,yi); printf("%c",203);
	gotoxy(xi,yf); printf("%c",202);
    gotoxy(xf,yf); printf("%c",202);
 	
 }
 
//Cambia todos los extremos 
 void esquinero(){
 int cc=c*2;
 
//Esquinas superiores izquierdas
 gotoxy(pox,poy); printf("%c",201);
 gotoxy(pox+cc,poy); printf("%c",203);
 gotoxy(pox,poy+c); printf("%c",204); 
 gotoxy(pox+cc,poy+c); printf("%c",206);

//Esquinas superiores derechas
 gotoxy(pfx,poy); printf("%c",203);
 gotoxy(pfx+cc,poy); printf("%c",187);
 gotoxy(pfx,poy+c); printf("%c",206);
 gotoxy(pfx+cc,poy+c); printf("%c",185);
 
//Esquinas inferiores izquierdas 
 gotoxy(pox,pfy); printf("%c",204);
 gotoxy(pox+cc,pfy); printf("%c",206);
 gotoxy(pox,pfy+c); printf("%c",200);
 gotoxy(pox+cc,pfy+c); printf("%c",202);
 
//Esquinas inferiores derechas 
 gotoxy(pfx,pfy); printf("%c",206);
 gotoxy(pfx+cc,pfy); printf("%c",185);
 gotoxy(pfx,pfy+c); printf("%c",202);
 gotoxy(pfx+cc,pfy+c); printf("%c",188);
 }
 
//Funcion marco
 void marco(int xi,int yi){
 	
 	int xf=xi+c*2;
 	int yf=yi+c;
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
 int main() {	
 
 //Nombre del programa en el formato .exe
 system("title Marcos");

//Crea los cuadrados de las lineas verticales
 for(int y=poy;y<=pfy;y+=c){
 	marco_vertical(pox,y);
 	marco_vertical(pfx,y);
 }
 
//Crea los cuadrados de las lineas horizontales
 for(int x=pox;x<=pfx;x+=c*2){
 	marco_horizontal(x,poy);
 	marco_horizontal(x,pfy);	
 }
 
//Mejora las esquinas extremas 
 esquinero();

// marco(60,12);
 
//fin del programa 
 gotoxy(0,24);
 return 1;
 }
 
/*comando para llenar toda la pantalla de cuadrados
 for(int y=0;y<=24;y+=c+1) 
 	for(int x=0;x<=80;x+=(c*2)+1)
 		marco(x,y);
 */
 
 
