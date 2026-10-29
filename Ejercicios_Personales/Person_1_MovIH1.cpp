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

	for (int x=1;x<=39;x++)
	{
		gotoxy(x,6);  
	    printf(" Ho"); 
	    gotoxy(81-x,6);
	    printf("la ");
		Sleep(10);
	}
	for(int y=7;y<=12;y++)	
		{
			gotoxy(1,y);
			printf(" ");
		}

return 1;
}
