/*Programa que muestre muchos marcos pegados*/

//Librerias
 #include <stdio.h> 
 #include <windows.h> 

//Variables globales 
 int xi=35, xf=xi+40;
 int yi=7 , yf=yi+10;
 
//funcion Coordenadas
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
//Procedimiento encabezado
void encabezado(){
	
	gotoxy(xi+5,yi+2);	printf("Instituto Tecnologico Superior");
 	gotoxy(xi+15,yi+3);	printf("de Xalapa");

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
	
}

 float dollar(float d){
 	printf("tienes %.2f Dollar",(d/20));
 }

 float euro(float d){
 	printf("tienes %.2f euro",(d/23));
 }
 
 float libra(float d){
 	printf("tienes %.2f libra",(d/21));
 }
 
 float yen (float d){
 	printf("tienes %.2f Yen",(d/0.21));
 }
 
 int main(void){
 	
 	int seleccion;
 	float dinero;
 	char divisa[10];
 	char divisa_1[]="Pesos";
 	bool hola=true;
 	
 	
 	marco();
 	encabezado();
 	
 	gotoxy(xi+10,yi+4);	printf("1.-Dollar");
 	gotoxy(xi+10,yi+5);	printf("2.-Euro");
 	gotoxy(xi+10,yi+6);	printf("3.-Libra");
 	gotoxy(xi+10,yi+7);	printf("4.-Yen");
 	
 	gotoxy(xi+8,yi+8);	printf("Selecciona una divisa(1-4): ");
 	scanf("%i",&seleccion);
 	system("cls");
 	marco();
 	
 	gotoxy(xi+10,yi+4);	printf("%cCuantos Pesos tienes?",168);
 	scanf("%f",&dinero);
 	

	system("cls");	marco();	gotoxy(xi+10,yi+4);
	if(seleccion==1)	dollar(dinero);
	if(seleccion==2)	euro(dinero);
	if(seleccion==3)	libra(dinero);
	if(seleccion==4)	yen(dinero);
	
	gotoxy(xi+5,yi+6);	printf("Instituto Tecnologico Superior");
 	gotoxy(xi+15,yi+7);	printf("de Xalapa");
 
 	gotoxy(0,24);	return 1;
 }
