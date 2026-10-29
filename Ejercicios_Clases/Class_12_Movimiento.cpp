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
	for (int y=1;y<=24;y++)
	{
		  gotoxy(81,y-1);
		  printf(" ");	
		for (int x=1;x<=80;x++)
		{
		  gotoxy(x,y);  
	      printf(" @"); 
		  Sleep(10);
		}
	}

return 1;
}
