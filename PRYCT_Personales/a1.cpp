/*Programa que muestre muchos marcos pegados*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 #include <cstdlib> 
 #include <time.h>
 
 //Variables globales
 int c=3; int t=7;
 int pox=36; int pfx=pox+(t*2*c);
 int poy=0;  int pfy=poy+(t*c);

 //funcion Coordenadas
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 //funcion Color 2
 void colors(int ct, int cf){
 	int cc;
 	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cc=(cf*16)+ct;
 	SetConsoleTextAttribute(hConsole,cc);
 	
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
 
 //Cuadros verticales
 void marco_vertical(int xi, int yi){
 	 	
 	int xf=xi+c*2; //20+(3*2)=26
 	int yf=yi+c;	//3+3=6
 	
 	//Lineas horizontales
	for(int x=xi+1;x<=xf-1;x++){
		gotoxy(x,yi); printf("%c",205);
		gotoxy(x,yf); printf("%c",205);
	}
	
	//Lineas verticales
	for(int y=yi+1;y<=yf-1;y++){
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
	for(int x=xi+1;x<=xf-1;x++){
		gotoxy(x,yi); printf("%c",205);
		gotoxy(x,yf); printf("%c",205);
	}
	
	//Lineas verticales
	for(int y=yi+1;y<=yf-1;y++){
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
 
//Funcion figuras
 void figura(int x, int y,int z){
	 
 char fs[6];
 char fi[6];
 fs[0]=219;	fi[0]=220;
 fs[1]=201;	fi[1]=188;
 fs[2]=223;	fi[2]=220;
 fs[3]=207;	fi[3]=221;
 fs[4]=178;	fi[4]=178;
 fs[5]=223; fi[5]=219;
 fs[6]=187; fi[6]=200;
 
 	gotoxy(x+3,y+1); printf("%c",fs[z]);	
 	gotoxy(x+3,y+2); printf("%c",fi[z]);
	
}

//tablero
 void tablero(){
 	
 colors(15,0);
 char fs[6];
 char fi[6];
 fs[0]=219;	fi[0]=220;
 fs[1]=201;	fi[1]=188;
 fs[2]=223;	fi[2]=220;
 fs[3]=207;	fi[3]=221;
 fs[4]=178;	fi[4]=178;
 fs[5]=223; fi[5]=219;
 fs[6]=187; fi[6]=200;
 
 for(int z=0;z<=6;z++){
 	gotoxy(pox+3+(6*z),poy+1); printf("%c",fs[z]);	
 	gotoxy(pox+3+(6*z),poy+2); printf("%c",fi[z]);
 	gotoxy(pfx+3-(6*z),pfy+1); printf("%c",fs[z]);	
 	gotoxy(pfx+3-(6*z),pfy+2); printf("%c",fi[z]);
 	gotoxy(pfx+3,poy+1+(3*z)); printf("%c",fs[z]);	
 	gotoxy(pfx+3,poy+2+(3*z)); printf("%c",fi[z]);
 	gotoxy(pox+3,pfy+1-(3*z)); printf("%c",fs[z]);	
 	gotoxy(pox+3,pfy+2-(3*z)); printf("%c",fi[z]);
 }
 	
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

 }
 
//Funcion marco
 void marco(int xi,int yi){
 	
 	colors(12,0);
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

//Numeros aleatorios
int random(int minimo,int maximo){
	
	//Declarar variable
	int nAleatorio;
	
 	//Semilla de aleatoriedad respecto al tiempo
 	srand(time(NULL));	
 	
 	/*Los valores que puede tomar el numero aleatorio
 	  esta limitado por el minimo y el maximo, por lo
	  que no puede tomar valores menores al minimo
	  ni mayores que e maximo*/
 	nAleatorio = minimo + rand() % (maximo+1-minimo);
 	
 	//Al finalizar la funcion, regresa al programa el numero aleatorio
 	return(nAleatorio);
}

//Inicio del programa
 int main() {	
 //Nombre del programa en el formato .exe
 system("title Marcos");
 
//Declarar variables locales 
 int i,t;
 t=20;
 
 //Llamar a traer
 OcultarCursor();
 tablero();
 printf("%i",random(20,30));
 
 for(int n=1;n<=3;n++){
 i=-1;
 t=t*n;
 //Repetir iniciando en el punto de origen, siempre y cuando
 //estes antes de 1 pocision antes del punto final avanzando 
 //el doble que la constante
 for(int x=pox;x<=pfx-(c*2);x+=(c*2)){
 	 	i=i+1;
		marco(x,poy);
 	 	figura(x,poy,i);
 	 	Sleep(t);
 	 	tablero();
 }
 i=-1;
  for(int y=poy;y<=pfy-c;y+=c){
 	 	i=i+1;
		marco(pfx,y);
 	 	figura(pfx,y,i);
 	 	Sleep(t);
 	 	tablero();
 }
 i=-1;
 for(int x=pfx;x>=pox+(c*2);x-=(c*2)){
 	 	i=i+1;
		marco(x,pfy);
 	 	figura(x,pfy,i);
 	 	Sleep(t);
 	 	tablero();
 }
  i=-1;
 for(int y=pfy;y>=poy+c;y-=c){
 	 	i=i+1;
		marco(pox,y);
 	 	figura(pox,y,i);
 	 	Sleep(t);
 	 	tablero();
 }
 }
 
//fin del programa 
 colors(15,0);  gotoxy(0,24);
 return 1;
 }
