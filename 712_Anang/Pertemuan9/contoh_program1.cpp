#include <iostream>
#include <conio.h>

using namespace std;

int a = 2;

void satu() {
	int b;
	b = 5;
	a = a * b;
	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
}

main() {
	int b = 3, c = 4;
	
	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
	cout << "Nilai c : " << c << endl;
	
	satu();
	
	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
	cout << "Nilai c : " << c << endl;
	
	getch();
}
