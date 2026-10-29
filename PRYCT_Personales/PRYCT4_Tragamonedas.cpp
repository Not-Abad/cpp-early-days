/*Programa de tragamonedas 100 funcional*/

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

 void tablero(int pox,int t,int n){
 	
 	int poy=0;
 	int ty=t;
 	int tx=t*2;
 	int x[4];
 	x[0]=pox;
	x[1]=pox+(tx);
 	x[2]=pox+(tx*(n-1));
	x[3]=pox+(tx*n);
	int y[4];
	y[0]=poy;
	y[1]=poy+ty;
	y[2]=poy+(ty*(n-1));
	y[3]=poy+(ty*n);
	int i=45;
	
 	for(int z=1;z<=3;z++){
 		i=i+3;
 		gotoxy(x[z],2); printf("a");
 		gotoxy(i,6);printf("%i ",x[z]);	
 		
 		//Lineas horizontales
 		for(int xm=x[0];xm<=x[1];xm++){
			gotoxy(xm,y[z-1]); printf("%c",205);
			gotoxy(xm,y[z]); printf("%c",205);
		}	
		//Lineas verticales
		for(int ym=y[z-1];ym<=y[z];ym++){
			gotoxy(x[z-1],ym); printf("%c",186);
			gotoxy(x[z],ym); printf("%c",186);
	}	 
	 }
 	


 	
 }

 int main() {
	
	gotoxy(40,6);printf("Hola ");
	tablero(20,4,3);
	 
 gotoxy(0,24);
 return 1;
}
