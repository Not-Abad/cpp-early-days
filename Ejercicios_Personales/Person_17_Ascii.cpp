#include <stdio.h>
  
int main(){
	char letra;
	int Nletra;
	printf("escribe una letra: ");
	scanf("%c",&letra);
	Nletra=letra;
	printf("La letra que escribiste fue %c, y su valor ASCII es: ");
	printf("%i",Nletra);
}
