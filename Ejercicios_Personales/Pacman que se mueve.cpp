#include <graphics.h>
#include <windows.h>

int main() 
{
    initwindow(400, 400, "Pacman");

    
    for(int a=2;a<200;a++)
	{
		for(int a=2;a<200;a++)
		{
			setcolor(BLACK);
	    	setfillstyle(SOLID_FILL, BLACK); // Color de relleno
	    	pieslice(a, 200, 30, 330, 100);
	    	setcolor(BLACK);
		}
		Sleep(100);
		for(int a=2;a<200;a++)
		{
			setcolor(BLACK);
	    	setfillstyle(SOLID_FILL, YELLOW); // Color de relleno
    		pieslice(a-1, 200, 30, 330, 100);
	    	setcolor(BLACK);
		}
		Sleep(100);

			setcolor(BLACK);
	    	setfillstyle(SOLID_FILL, BLACK); // Color de relleno
    		pieslice(199, 200, 0, 360, 100);
	    	setcolor(BLACK);
		Sleep(100);
	}

    getch();  // Espera una tecla
    closegraph();  // Cierra ventana gráfica
    return 0;
}
