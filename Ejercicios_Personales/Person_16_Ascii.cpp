#include <stdio.h>
#include <windows.h>  
 void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
   
int main(){
	int a;

	for(int y=3;y<=25;y++)
		for(int x=0;x<=9;x++)  {
			a=(y*10)+x;
			gotoxy(x*9,y);
			printf("%i= %c ",a,a);	
		}
		
	
 return 1;	
}
