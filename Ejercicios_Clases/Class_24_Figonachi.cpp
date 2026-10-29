//Funciones recursivas

//Libretia
#include <stdio.h> 
	
int fig(int n){
	if(n<=2)
		return 1;
	else
		return fig(n-2) + fig(n-1) ;	
	
}	

int main(){
	
	int n;
	
	printf("Sucesion fibonacci\n");
	printf("Escribe que una posicion de la sucesion: ");
	scanf("%i",&n);
	for(int i=n;i>=1;i--)
		printf(" %i.- \t%i\n",i,fig(i));
	printf(" 0.-\t0");
	return 1;
}	
