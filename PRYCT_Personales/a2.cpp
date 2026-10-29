/*Tragamonedas*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 #include <cstdlib> 
 #include <time.h>
 
//Variables globales
 int t=3; 	 int n=7;
 int ty=t;	 int tx=t*2;
 int pox=36; int pfx=pox+(n*tx);
 int poy=0;  int pfy=poy+(n*ty);

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
 void marco(int xi,int yi){
 	
 	colors(12,0);
 	int xf=xi+tx;
 	int yf=yi+ty;
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

//Funcion figuras
 void figura(int x, int y,int z){
	 
 	char fs[6];
 	char fi[6];
 	fs[0]=219;	fi[0]=220;
 	fs[1]=201;	fi[1]=188;
 	fs[2]=223;	fi[2]=220;
 	fs[3]=223;	fi[3]=219;
 	fs[4]=207;	fi[4]=221;
 	fs[5]=178;	fi[5]=178;
 	fs[6]=187; 	fi[6]=200;
 
 	gotoxy(x+3,y+1); printf("%c",fs[z]);	
 	gotoxy(x+3,y+2); printf("%c",fi[z]);
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

//funcion movimiento
 void movimiento(int m){
 	
 	int x=pox;
 	int y=poy;
 	int i=0;
 	int z;
 	
 	while(i<=m){
 		i++;
 hola:		
 		z=i/n;
		switch(z){
			case 0:x=x+tx;	y=poy;	break;
 			case 1:y=y+ty;	x=pfx-tx;	break;
			case 2:x=x-tx;	y=pfy-ty;	break;
			case 3:y=y-ty;	x=pox;	break;
			default:break;
	 	} 	
		 marco(x,y);
		 Sleep(100)	;
	 }
	 
 
 
		 	
 	marco(x,y);

 }
//Funcion tablero
 void tablero(){
	
	colors(15,0);
	
	int i=-1;
	//lineas horizontales
	for(int y=poy;y<=pfy;y++){
		gotoxy(pox,y);		printf("%c",186);
		gotoxy(pox+tx,y);	printf("%c",186);
		gotoxy(pfx,y);		printf("%c",186);
		gotoxy(pfx-tx,y);	printf("%c",186);
	}
	
	//Lineas verticales
	for(int x=pox;x<=pfx;x++){
		gotoxy(x,poy);		printf("%c",205);
		gotoxy(x,poy+ty);	printf("%c",205);
		gotoxy(x,pfy);		printf("%c",205);
		gotoxy(x,pfy-ty);	printf("%c",205);
	}
	
	//Separadores horizontales
	for(int y=poy+ty;y<=pfy-ty;y+=ty){
		gotoxy(pox,y);		printf("%c",204);
		gotoxy(pox+tx,y);	printf("%c",185);	
		gotoxy(pfx-tx,y);	printf("%c",204);	
		gotoxy(pfx,y);		printf("%c",185);
		
		i++;
		figura(pox,y,i);	figura(pfx-tx,y-ty,i);
		for(int x=pox+1;x<=pox+tx-1;x++){
			gotoxy(x+((n-1)*tx),y);	printf("%c",205);
			gotoxy(x,y);	printf("%c",205);
		}
	}
	i+=2;
	//Separadores verticales
	for(int x=pox+tx;x<=pfx-tx;x+=tx){
	
		gotoxy(x,poy);		printf("%c",203);
		gotoxy(x,poy+ty);	printf("%c",202);
		gotoxy(x,pfy-ty);	printf("%c",203);		
		gotoxy(x,pfy);		printf("%c",202);
		
		i--;
		figura(x-tx,poy,i);	figura(x,pfy-ty,i);
		for(int y=poy+1;y<=poy+ty-1;y++){
			gotoxy(x,y+((n-1)*ty));	printf("%c",186);
			gotoxy(x,y);	printf("%c",186);
		}
		/*
		for(int y=pfy-ty+1;y<=pfy-1;y++){
			gotoxy(x,y);	printf("%c",186);
		}*/
	}
	
	//Esquinas centrales
	gotoxy(pox+tx,poy+ty);	printf("%c",206);
	gotoxy(pfx-tx,poy+ty);	printf("%c",206);
	gotoxy(pox+tx,pfy-ty);	printf("%c",206);
	gotoxy(pfx-tx,pfy-ty);	printf("%c",206);
	
	//Esquinas exteriores
	gotoxy(pox,poy);	printf("%c",201);
	gotoxy(pfx,poy);	printf("%c",187);
	gotoxy(pox,pfy);	printf("%c",200);
	gotoxy(pfx,pfy);	printf("%c",188);
}

//Inicio del programa
int main(){
	
	tablero();
	VerCursor(false);
	//marco(pox,poy);
	
	//fin del programa
	colors(15,0);	gotoxy(0,poy+24);	return 1;
}

 
