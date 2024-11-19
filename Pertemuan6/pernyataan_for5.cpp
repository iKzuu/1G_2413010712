#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(void) {
	int i;
	system("cls");
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	for(i=0; i<20; i++) {
		SetConsoleTextAttribute(hConsole, (i + ((i + 1) << 4)));
		cout << "Borland C++" << endl;
	}
	
	SetConsoleTextAttribute(hConsole, 7);
	
	getch();
	return 0;
}
