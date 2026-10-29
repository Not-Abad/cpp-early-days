#include <stdio.h>  
#include <windows.h>  
 void gotoxy(int x,int y) {  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 int main() {  
	for (int z=1;z<=5;z++) {
		gotoxy((z-1)*10,6);
		printf(" ");
		gotoxy(z*10,6);
		printf("H");
		gotoxy(51,z);
		printf(" ");
		gotoxy(51,z+1);
		printf("o");
		gotoxy(112-(z*10),6);
		printf(" ");
		gotoxy(102-(z*10),6);
		printf("l");
		gotoxy(53,12-z);
		printf(" ");
		gotoxy(53,11-z);
		printf("a");
		Sleep(100);
	}
	
	gotoxy(1,12);
	printf(" ");

return 1;
}

