#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int angka = 0;
	system("cls");
	
	while(angka <= 100){
		cout << angka << " ";
		angka += 2;
	}
	
	getch();
}
