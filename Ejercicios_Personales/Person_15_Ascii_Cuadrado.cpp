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
 int x,y;
 int z=205;
 gotoxy(29,0);
 printf("%c",201);
 for (x=30;x<=78;x++)  {
	gotoxy(x,0);
	printf("%c",z);
	gotoxy(x,24);
	printf("%c",z);
}	
 gotoxy(x,0);
 printf("%c",187);
 gotoxy(x-50,24);
 printf("%c",200);
 gotoxy(x,24);
 printf("%c",188);
 for (y=1;y<=23;y++)  {
	gotoxy(x-50,y);
	printf("%c",186);
	gotoxy(x,y);
	printf("%c",186);
}	
	gotoxy(0,24);
return 1;
}
