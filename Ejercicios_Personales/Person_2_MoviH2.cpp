#include <stdio.h>  
#include <windows.h>  
 void gotoxy(int x,int y)
{  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  
 int main()
{  
	for (int y=1;y<=6;y++)
	for (int x=1;x<=39;x++)
	{
		gotoxy(x,6);  
	    printf(" H");
		gotoxy(41,y-1);
	    printf(" "); 
	    gotoxy(41,y);
	    printf("o");
	    gotoxy(81-x,6);
	    printf("l ");
	    gotoxy(43,13-y);
	    printf(" ");
	    gotoxy(43,12-y);
	    printf("a");
		Sleep(1);
	}
	gotoxy(1,12);
	printf(" ");

return 1;
}
