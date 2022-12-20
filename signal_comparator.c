#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

COORD coord = {0,0};
int kode;
char Ad;

void gotoxy(int x,int y){
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main (){
    printf("Project UAS RPL");
    printf("Project Ini Merupakan Aplikasi Siqnal Comparator");
}
