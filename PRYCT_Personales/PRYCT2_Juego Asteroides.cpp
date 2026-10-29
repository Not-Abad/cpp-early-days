#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <list>
using namespace std;
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

void fflush_in() {
 int ch;
 while ((ch = fgetc(stdin)) != EOF && ch != '\n') {}
}

void gotoxy(int x, int y) {
 //HANDLE es el nombre que recibe la consola, i l'he ponemos el nombre de que queramos
 //en este caso hCon que es el que se pone por defecto.
 HANDLE hCon;
 //Coje el identificador de la ventana (GetStdHandle)
 hCon = GetStdHandle(STD_OUTPUT_HANDLE);
 //Creamos las cordenadas.
 COORD dwPos;
 dwPos.X = x;
 dwPos.Y = y;
 SetConsoleCursorPosition(hCon, dwPos);
}
void ocultarCursor() {
 HANDLE hCon;
 hCon = GetStdHandle(STD_OUTPUT_HANDLE);
 CONSOLE_CURSOR_INFO cci;
 cci.dwSize = 2;
 cci.bVisible = FALSE;
 SetConsoleCursorInfo(hCon, &cci);
}
void pintarLimites() {
 for (int i = 2; i < 78; i++) {
  gotoxy(i, 3); printf("%c", 205);
  gotoxy(i, 33); printf("%c", 205);
 }
 for (int i = 4; i < 33; i++) {
  gotoxy(2, i); printf("%c", 186);
  gotoxy(77, i); printf("%c", 186);
 }
 gotoxy(2, 3); printf("%c", 201);
 gotoxy(2, 33); printf("%c", 200);
 gotoxy(77, 3); printf("%c", 187);
 gotoxy(77, 33); printf("%c", 188);
}

class NAVE {
 int x, y;
 int corazones;
 int vidas;
public:
 NAVE(int  _x, int _y, int _corazones, int _vidas) : x(_x), y(_y), corazones(_corazones), vidas(_vidas) {}
 int X() { return x; }
 int Y() { return y; }
 int VID() { return vidas; }
 void pCorazon() { corazones--; }
 void gCorazon() { if (corazones < 3)corazones++; }
 void pintar();
 void borrar();
 void mover();
 void pintarCorazones();
 void morir();
};
class AST {
 int x, y;
public:
 AST(int _x, int _y) : x(_x), y(_y) {}
 void pintar();
 void mover();
 void choque(class NAVE &N);
 void borrar();
 int X() { return x; }
 int Y() { return y; }
};
class VIDA {
 int x, y;
public:
 VIDA(int _x, int _y) : x(_x), y(_y) {}
 void pintar();
 void mover();
 void choque(class NAVE &N);
 void borrar();
};
class BALA {
 int x, y;
public:
 BALA(int _x, int _y) : x(_x), y(_y) {};
 int X() { return x; }
 int Y() { return y; }
 void mover();
 bool fuera();
};
/*
ALTERNATIVA a : x(_x), y(_y) {}
NAVE::NAVE(int _x, int _y) {
 x = _x;
 y = _y;
}*/
void NAVE::pintar() {
 gotoxy(x, y); printf("  %c", 30);
 gotoxy(x, y + 1); printf(" %c%c%c", 40, 207, 41);
 gotoxy(x, y + 2); printf("%c%c %c%c", 30, 190, 190, 30);
 system("color 7");
}

void NAVE::borrar() {
 gotoxy(x, y); printf("     ");
 gotoxy(x, y+1); printf("     ");
 gotoxy(x, y+2); printf("     ");
}

void NAVE::mover() {
 
 if (kbhit()) {
  char tecla = getch();
  borrar();
  if (tecla == IZQUIERDA && x > 3) x--;
  if (tecla == DERECHA && x+6 < 77) x++;
  if (tecla == ARRIBA && y > 4) y--;
  if (tecla == ABAJO && y + 3 < 33) y++;
  pintar();
  pintarCorazones();
 }
}
void NAVE::pintarCorazones() {

 gotoxy(50, 2); printf("VIDAS %d", vidas);
 gotoxy(64, 2); printf("Salud");
 gotoxy(70, 2); printf("      ");
 for (int i = 0; i < corazones; i++) {
  gotoxy(70 + i, 2); printf("%c\r",03);
 }
}
void NAVE::morir() {
 if (corazones == 0) {
  borrar();
  gotoxy(x, y);   printf("  *  ");
  gotoxy(x, y + 1); printf("** **");
  gotoxy(x, y + 2); printf("  *  ");
  Sleep(200);
  borrar();
  gotoxy(x, y);   printf("* * *");
  gotoxy(x, y + 1); printf(" * ");
  gotoxy(x, y + 2); printf("* * *");
  Sleep(200);
  borrar();
  vidas--;
  corazones = 3;
  pintarCorazones();
  pintar();
 }




}
void AST::pintar() {
 gotoxy(x, y); printf("%c", 'o');
}
void AST::mover() {
 gotoxy(x, y); printf(" ");
 y++;
 if (y > 32) {
  x = rand() % 71 + 4;
  y = 4;
 }
 pintar();
}
void AST::choque(class NAVE &N) {
 if (x >= N.X() && x < N.X() + 6 && y >= N.Y() && y <= N.Y() + 2) {
  N.pCorazon();
  borrar();
  N.pintar();
  N.pintarCorazones();
  x = rand() % 71 + 4;
  y = 4;
 }
}

void AST::borrar() {
 gotoxy(x, y); printf(" ");
}

void VIDA::pintar() {
 gotoxy(x, y); printf("%c", 3);
}
void VIDA::mover() {
 gotoxy(x, y);printf(" ");
 y++;
 if (y > 32) {
  x = rand() % 71 + 4;
  y = 4;
 }
 pintar();
}
void VIDA::choque(class NAVE &N) {
 if (x >= N.X() && x < N.X() + 6 && y >= N.Y() && y <= N.Y() + 2) {
  N.gCorazon();
  N.pintarCorazones();
  borrar();
  N.pintar();
  x = rand() % 71 + 4;
  y = 4;
 }
}
void VIDA::borrar() {
 gotoxy(x, y); printf(" ");
}
void BALA::mover() {
 gotoxy(x, y); printf(" ");
 y--;
 gotoxy(x, y); printf("*");
}
bool BALA::fuera() {
 if (y == 4) {
  return true;
 }
 else {
  return false;
 }
}
int main() {
 char tecla;
 do
 {
  ocultarCursor();
  pintarLimites();
  list<AST*> A;
  list<AST*>::iterator itA;
  for (int i = 0; i < 5; i++) {
   A.push_back(new AST(rand() % 75 + 3, rand() % 5 + 4));
  }
  NAVE N(15, 25, 3, 3);
  VIDA vit(15, 8);
  list<BALA*> B;
  list<BALA*>::iterator it;
  N.pintar();
  int puntos = 0;
  bool game_over = false;
  while (!game_over) {
   gotoxy(4, 2); printf("PUNTOS %d", puntos);
   if (kbhit()) {
    char tecla = getch();
    if (tecla == 'a') {
     B.push_back(new BALA(N.X() + 2, N.Y() - 1));
    }
   }
   for (it = B.begin(); it != B.end();) {
    (*it)->mover();
    if ((*it)->fuera()) {
     gotoxy((*it)>X(), (*it)>Y()); printf(" ");
     delete(*it);
     it = B.erase(it);
    }
    else { it++; }
   }
   N.mover();
   vit.mover(); vit.choque(N);
   for (itA = A.begin(); itA != A.end(); itA++) {
    (*itA)->mover();
    (*itA)->choque(N);
   }
   for (itA = A.begin(); itA != A.end(); itA++) {
    for (it = B.begin(); it != B.end();) {
     if ((*itA)>X() == (*it)>X() && ((*itA)>Y() + 1 == (*it)>Y() || (*itA)>Y() == (*it)>Y())) {
      gotoxy((*it)>X(), (*it)>Y());printf(" ");
      delete (*it);
      it = B.erase(it);
      A.push_back(new AST(rand() % 74 + 3, 4));
      gotoxy((*itA)>X(), (*itA)>Y());printf(" ");
      delete (*itA);
      itA = A.erase(itA);
      puntos = puntos + 5;
     }
     else { it++; }

    }
   }
   if (N.VID() < 0)
   {
    game_over = true;
   }
   N.morir();
   Sleep(60);
  }
  gotoxy(4, 35); printf("\nGAME OVER\n");
  printf("JUGAR DE 9? [S/N]\n");
  do {
   scanf("%c", &tecla);
   fflush_in();
   tecla = towlower(tecla);
   if (tecla != 's' && tecla != 'n') {
    printf("Solo [S/N]");
   }
  } while (tecla != 's' && tecla != 'n');
  system("cls");
 } while (tecla != 'n');
 return 0;
}
