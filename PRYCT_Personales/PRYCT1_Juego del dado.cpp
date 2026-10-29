/*Programa que te deje apostar a la cara de un dado*/

//Librerias
 #include <stdio.h> 
 #include <cstdlib> 
 #include <time.h>
 #include <windows.h>  

//Variables globales 
 int xi=35, xf=xi+40;
 int yi=7 , yf=yi+10;
 int meta=100; 
 
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
 void marco(){
 	
 	//Limpiar pantalla 
 	system("cls");
 	
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
    
    //Titulo
	gotoxy(xi+12,yi+2);
	printf("Casa de apuestas");
}

//Presentacion del programa
 void intro(){
 	
 	//Matriz de renglones
 	int r[yf-yi];
 	for(int z=yi;z<=yf;z++)
 		r[z-yi]=z;
 	
	//Pantalla 1
	marco();
	gotoxy(xi+6,r[4]);
	printf("Instituto Tecnologico Superior");
	gotoxy(xi+16,r[5]);
	printf("de Xalapa");
	gotoxy(xi+9,r[6]);
	printf("Creado por Jesus Abad R.");	
	gotoxy(xi+6,r[7]);
	printf("PRECIONA ENTER PARA CONTINUAR");
	getchar();
	
	//Pantalla 2
	marco();
	gotoxy(xi+10,r[3]);
	printf("Informacion  General");
	gotoxy(xi+3,r[4]);
	printf("1.-Para ganar necesitas %i Coins.",meta);
	gotoxy(xi+3,r[5]);
	printf("2.-Al ganar una ronda se suma");
	gotoxy(xi+3,r[6]);
	printf("el triple de tu apuesta.");
	gotoxy(xi+3,r[7]);
	printf("3.-Pierdes si te quedas sin Coins.");
	gotoxy(xi+6,r[8]);
	printf("PRECIONA ENTER PARA CONTINUAR");	
	getchar();
	
	//Pantalla 3
	marco();
	gotoxy(xi+10,r[3]);
	printf("Informacion  General");
	gotoxy(xi+3,r[4]);
	printf("4.-No puedes apostar mas del total");
	gotoxy(xi+3,r[5]);
	printf("de Coins que tienes.");
	gotoxy(xi+3,r[6]);
	printf("5.-No puedes apostar a caras del dado");
	gotoxy(xi+3,r[7]);
	printf("inexistentes(solo existen 6).");
	gotoxy(xi+6,r[8]);
	printf("PRECIONA ENTER PARA CONTINUAR");	
	getchar();
	
	//Pantalla 4
	marco();
	gotoxy(xi+10,r[3]);
	printf("Informacion  General");
	gotoxy(xi+3,r[5]);
	printf("6.-No puedes escribir letras");
	gotoxy(xi+3,r[6]);
	printf("7.-Por ultimo, diviertete jugando");
	gotoxy(xi+6,r[8]);
	printf("PRECIONA ENTER PARA CONTINUAR");	
	getchar();
	
	//Limpiar pantalla 
 	system("cls");
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
 int main (void) 
  {	
 
 //Nombre del programa en el formato .exe
 system("title Casa de apuestas");
 
 //Declarar variables locales
 int opcion, dado, apuesta;
 int Coins=10, Nronda=0;
 
 /*Llamar a traer la introduccion del programa
 despues limpiar la pantalla y por ultimo ponerle
 el marco al texto*/
 intro();
 marco();
 
//Matriz de renglones
 int r[yf-yi];
 for(int z=yi;z<=yf;z++)
 	r[z-yi]=z;

//Repetir Hasta que no le queden monedas al usuario 
//o el usuario llegue a la meta de Coins
 for (int i=1;Coins>=1 && meta>=Coins;i++){
 	
//En dado caso que se quiera hacer con While:
//while(Coins>=1 && meta>=Coins)

 	//Cada que inicie una ronda cambiara el valor del dado,
 	//aumentara 1 el numero de la ronda y la apuesta 
 	//anterior se borrara
 	 dado=random(1,6);
 	 Nronda=Nronda+1;
 	 apuesta=0;
 	
//etiqueta de retorno 1
 apostador:	
 
	//mostrar marcador
	marco();
	gotoxy(xi+2,r[1]);
	printf("Coins:%i",Coins);
	gotoxy(xf-10,r[1]);
	printf("Apuesta:%i",apuesta);
	
	/*Comando para hacer trampa*/
	gotoxy(xi+2,r[3]);
	printf("Valor del dado: %i",dado);
	
	
	//Pantalla 1
	gotoxy(xi+13,r[7]);
	printf("Ronda Numero %i",Nronda);
	gotoxy(xi+7,r[4]);
	printf("Tienes %i Coins en tu bolsa",Coins);
	gotoxy(xi+6,r[5]);
	printf("%cCuantas Coins vas a apostar?",168);
	gotoxy(xi+19,r[6]);
	fflush(stdin);
	printf(" ");
	scanf("%i", & apuesta);
	
	//Si el usuario apuesta más de lo que tiene, Entonces... 	
	if(apuesta>Coins){
		
		//Pantalla de Error 1-A
		marco();
		gotoxy(xi+14,r[3]);
		printf("SINTAX ERROR");
		gotoxy(xi+4,r[5]);
		printf("La apuesta no debe ser mayor a las");
		gotoxy(xi+8,r[6]);
		printf("Coins del cual dispones.");
		fflush(stdin);
		gotoxy(xi+6,r[7]);
		printf("PRECIONA ENTER PARA CONTINUAR");
		getchar( );
		apuesta=0;
		
		//Retornar a etiqueta 1
		goto apostador;
		}
	
	//Si el usuario aposto 0 o un numero negativo, Entonces...
	if(apuesta<1){
		
		//Pantalla de Error 1-B
		marco();
		gotoxy(xi+14,r[3]);
		printf("SINTAX ERROR");
		gotoxy(xi+3,r[5]);
		printf("Debes de apostar Coins en cada turno");
		gotoxy(xi+3,r[6]);
		printf("y no puedes apostar Coins negativas.");
		fflush(stdin);
		gotoxy(xi+6,r[7]);
		printf("PRECIONA ENTER PARA CONTINUAR");
		getchar( );
		apuesta=0;
		
		//Retornar a etiqueta 1
		goto apostador;
	}
	
	Coins=Coins-apuesta;
	
//Etiqueta de retorno 2	
option:	

	//mostrar marcador
	marco();
	gotoxy(xi+2,r[1]);
	printf("Coins:%i",Coins);
	gotoxy(xf-10,r[1]);
	printf("Apuesta:%i",apuesta);
	
	//Pantalla 2
	gotoxy(xi+13,r[7]);
	printf("Ronda Numero %i",Nronda);
	gotoxy(xi+3,r[4]);
	printf("Selecciona el numero de la cara del");
	gotoxy(xi+4,r[5]);
	printf("dado a la cual vas a apostar(1-6)");
	gotoxy(xi+19,r[6]);
	printf(" ");
	scanf("%i", & opcion);
	
	//Si el usuario aposto a una cara del dado inexistente, Entonces...
	if(opcion<1 || opcion>6){
		
		//Pantalla de Error 2
		marco();
		gotoxy(xi+14,r[3]);
		printf("SINTAX ERROR");
		gotoxy(xi+4,r[5]);
		printf("No puedes apostar a caras del dado");
		gotoxy(xi+8,r[6]);
		printf("que no existen (opcion:1-6)");
		fflush(stdin);
		gotoxy(xi+6,r[7]);
		printf("PRECIONA ENTER PARA CONTINUAR");
		getchar( );	
		
		//Retornar a etiqueta 2
		goto option;
	//Fin if	
	}
	
	//Pantalla 3
	marco();
	gotoxy(xi+13,r[7]);
	printf("Ronda Numero %i",Nronda);
	gotoxy(xi+5,r[4]);
	printf("La cara del dado que salio fue %i",dado);
	
	//Si la opcion del usuario es igual al numero aleatorio, Entonces...
	if(opcion==dado) {
		
		//Pantalla 3-Ronda Ganada
		gotoxy(xi+11,r[5]);
		printf("ganaste %i monedas",apuesta*3);
		Coins=Coins+(apuesta*3);
		fflush(stdin);
		gotoxy(xi+6,r[7]);
		printf("PRECIONA ENTER PARA CONTINUAR");
		getchar( );
	}
 	else {
 		
 		//Pantalla 3-Ronda Perdida
 		gotoxy(xi+11,r[5]);
 		printf("perdiste %i monedas",apuesta);
 		fflush(stdin);
 		gotoxy(xi+6,r[7]);
		printf("PRECIONA ENTER PARA CONTINUAR");
		getchar( );
	}
	//Fin if
	 
//fin for
}
 
//Si el juego termino, Entonces.... 
 if(Coins<1){
 	
 	//Pantalla 4-Perdedor
	marco();
 	gotoxy(xi+6,yi+3);
 	printf("Instituto Tecnologico Superior");
 	gotoxy(xi+16,yi+4);
 	printf("de Xalapa");
 	gotoxy(xi+16,yi+5);
 	printf("GAME OVER");
	gotoxy(xi+12,yi+6);
	printf("Numero de Rondas %i",Nronda);
	fflush(stdin);
 	gotoxy(xi+6,yi+7);
	printf("PRECIONA ENTER PARA CONTINUAR");
	getchar( );	
}
 else {
 	
 	//Pantalla 4-Ganador
 	marco();
 	gotoxy(xi+6,yi+3);
 	printf("Instituto Tecnologico Superior");
 	gotoxy(xi+16,yi+4);
 	printf("de Xalapa");
 	gotoxy(xi+11,yi+5);
 	printf("GANASTE EN THE GAME");
	gotoxy(xi+12,yi+6);
	printf("Numero de Rondas %i",Nronda);	 	
 	fflush(stdin);
 	gotoxy(xi+6,yi+7);
	printf("PRECIONA ENTER PARA CONTINUAR");
	getchar( );	
 }
//Fin if
 	
system("cls");
gotoxy(0,0);

//Fin del programa
 return 1;  

}

/*
Para limpiar pantalla usa:
	system("cls");
	*/

