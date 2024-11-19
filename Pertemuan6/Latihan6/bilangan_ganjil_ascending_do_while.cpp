#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int a = 0;
	
	do{
		a++;
		
		// pengecekan apakah sisa bagi "a dibagi 2" tidak samadengan 0, jika true maka angka ganjil akan ditampilkan
		// begitu kira-kira
		if(a % 2 != 0) {
			cout << a << " ";
		}
	} while (a < 100);
	
	getch();
	
	return 0;
	
}
