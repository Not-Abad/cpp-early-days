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
 for(int z=0;z<=212;z++){
 	if(0<=z && z<=80)
	{
		gotoxy(z,0);
		printf("a");
	}
	if(81<=z && z<=105)
	{
		gotoxy(80,z-81);
		printf("A");
	}
	if(106<=z && z<=186)
	{
		gotoxy(186-z,24);
		printf("e");
	}
	if(187<=z && z<=211)
	{
		gotoxy(0,211-z);
		printf("i");
	}
 }
gotoxy(0,24);
return 1;
}
/*
 for(int x=1;x<=80;x++){
	gotoxy(x,1);
	printf("a");
	Sleep(10);
	gotoxy(x,1);
	printf(" ");
 }
 
 for(int y=1;y<=24;y++){
	gotoxy(80,y);
	printf("a");
	Sleep(10);
	gotoxy(80,y);
	printf(" ");
}
 for(int x=1;x<=80;x++){
	gotoxy(81-x,24);
	printf("a");
	Sleep(10);
	gotoxy(81-x,24);
	printf(" ");
 }
 
 for(int y=1;y<=24;y++){
	gotoxy(1,25-y);
	printf("a");
	Sleep(10);
	gotoxy(1,25-y);
	printf(" ");
}
*/
