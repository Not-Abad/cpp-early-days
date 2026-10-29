#include <stdio.h>  
#include <windows.h>  
char r='M';
void gotoxy(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
int main ()
{
  while (r=='s' || r=='M')
   {
   	printf("X");
   	Sleep(1000);
   }
return 1;
}
