/*Practicar el uso de funciones*/

//Libreria
 #include <stdio.h> 
 #define PI 3.1416
 
 //Variables globales
 int l=3;
 
 //funcion cuadrado
 int cuadro(int n){
 	
 	//Regresa valor
 	return(n*n);
 }

float tri(float h, float b){
	
	//regresa valor
	return (b*h/2);
}

float cir(int r){
	
	//regresa valor
	return (PI*cuadro(r));
}

//Inicio del programa 
 int main(){
 	
 	//Declarar variables locales
 	int h=2;
 	int b=2;
 	int r=2;
 	
 	//Escribe
 	printf("El cuadrado de un %i es %i\n",l,cuadro(l));
 	printf("El area de un triangulo de base %i y de altura %i es: %.1f\n",b,h,tri(h,b));
 	printf("El area del circulo con radio %i es: %.2f",r,cir(r));
 	
 	//Fin del programa
 	return 1;
 }
