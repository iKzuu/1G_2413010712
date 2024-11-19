#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}

int main(void) {
	int a=2, b=1, c=2, d=1, e;
	system("cls");
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for(e=1; 17>e; e++) {
		gotoxy(e, e);
		SetConsoleTextAttribute(hConsole, e);
		printf("\nwarna ke-%d", e);
	}
	
	SetConsoleTextAttribute(hConsole, 7);
	printf("\nBorland C++");
	getche();
	
	return 0;
}
