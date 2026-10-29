/*Programa que muestre muchos marcos pegados*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 
 #include <conio.h>

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
 void marco(int xi,int yi,int yu,int xu){
 	
 	int xf=xi+(xu*2);
 	int yf=yi+yu;
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

//Texto del menu inicial
char *Op_Menu_Text(int n){
	
	//Enlazar switch a n
	switch(n){
		case 1:
			return "  Nueva Partida";
		case 2:
			return "    Tutorial";
		case 3:
			return "    Opciones";
		case 4:
			return "Creditos del juego";
		default:
			return "ERROR";			
	}
}

//Codigo del Menu principal
void menu(){
	
	//Declarar variables locales
	char tecla;		bool repetir=1;
	int xi=40;		int yi=8;	
	int yu=2;		int xu=15;	
 	int op=1;		int b=0;
 	int r[12];	
 	
 	//Ocultar cursor
 	VerCursor(false);
 	
  	//Matriz de renglones
 	for(int z=yi;z<=yi+12;z++)
 		r[z-yi]=z;	
 	
 	//Pantalla de opciones
 	colors(11,0);		//Mostrar la primer opcion activada
 	marco(xi,r[0],yu,xu);	gotoxy(xi+7,r[1]);	printf("%s",Op_Menu_Text(1));
 	colors(15,0);		//Mostrar las demas opciones desactivadas
	marco(xi,r[3],yu,xu);	gotoxy(xi+7,r[4]);	printf("%s",Op_Menu_Text(2));			
	marco(xi,r[6],yu,xu);	gotoxy(xi+7,r[7]);	printf("%s",Op_Menu_Text(3));
	marco(xi,r[9],yu,xu);	gotoxy(xi+7,r[10]); printf("%s",Op_Menu_Text(4));	
	
	//Repetir infinitamente
	while(repetir){
		
		/*El valor de tecla sera igual al boton presionado 
		por el usuario en cualquier momento*/
		tecla = getch();
		
		//Si se preciono la fecha superior o inferior, Entonces...
		if(tecla == 72 || tecla == 80){
			
			//Desactivar la opcion actual
			colors(15,0);			marco(xi,r[b],yu,xu);
			gotoxy(xi+7,r[b+1]);	printf("%s",Op_Menu_Text(op));
			
			//Si se preciono la fecha superior, Entonces...
			if(tecla == 72){
				
				//Retroceder 1 posicion de la opcion actual
				op--;	b=b-3;	
				
				//Si se retrocedio a una posicion inexistente, Entonces...
				if(op<=0){	
					//Mandar a la 4ta opcion
					op=4;	b=9;
				}
			
				//Activar la nueva opcion	
				colors(11,0);		marco(xi,r[b],yu,xu);
				gotoxy(xi+7,r[b+1]);	printf("%s",Op_Menu_Text(op));
			}
			
			//Si se preciono la fecha inferior, Entonces...
			if(tecla == 80){
				
				//Avanzar 1 posicion de la opcion actual
				op++;	b=b+3;	
				
				//Si se avanzo a una posicion inexistente, Entonces...
				if(op>=5){	
					//Mandar a la 1ra opcion
					op=1;	b=0;
				}
			
				//Activar la nueva opcion	
				colors(11,0);		marco(xi,r[b],yu,xu);
				gotoxy(xi+7,r[b+1]);	printf("%s",Op_Menu_Text(op));
			}
		}
		
		/*Dejar de repetir hasta que el usuario seleccione una opcion
		(el usuario precione la tecla ENTER)*/
		if(tecla == 13)	repetir=0;		
	}	

	gotoxy(55,24);	printf("%i",op);
}

//Inicio del programa
int main(){
	
	/*//Margenes
	for(int x=0;x<=119;x+=10){
		gotoxy(x,0);	printf("x");
	}
		int y;
	for( y=0;y<=29;y++){
		gotoxy(0,y);	printf("%i",y);
	}*/
	
	menu();

	//fin del programa
	colors(15,0);	gotoxy(0,28);	return 1;
}


