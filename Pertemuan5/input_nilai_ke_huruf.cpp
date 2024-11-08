#include <iostream>
#include <conio.h>

using namespace std;

main () {
	int nilai;
	char loop;
	
	do {
		
		system("cls");
		cout << "Masukkan Nilai : ";
		cin >> nilai;
		
		if (nilai > 100 || nilai < 0) {
			cout << "nilai yang bisa diinputkan mulai dari 0-100!" << endl;
		} else {
			if(nilai >= 85 ) {
				cout << "A" << endl;
			}
			else if (nilai >= 70) {
				cout << "B" << endl;
			}
			else if (nilai >= 60) {
				cout << "C" << endl;
			}
			else {
				cout << "E" << endl;
			}
		}
		
		cout << "Masukkan ulang nilai (y/n) ? ";
		cin >> loop;
		
	} while (loop != 'n');
	
	cout << "Program stop!";
}
