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
for(int y=1;y<=20;y++){
	for (int x=1;x<=y;x++){
		gotoxy(21-x,y);
		printf("@");
		gotoxy(19+x,y);  
	    printf("@"); 
	}
}
return 1;
}
