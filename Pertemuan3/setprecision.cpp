#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>

using namespace std;

main () {
	float a, b, c;
	a = 25.77;
	b = 23.45;
	system("cls");
	
	c = a * b;
	
	cout<<setiosflags(ios::fixed);
	cout << setprecision(1) << c << endl;
	cout << setprecision(2) << c << endl;
	cout << setprecision(3) << c << endl;
	cout << setprecision(4) << c << endl;
}
