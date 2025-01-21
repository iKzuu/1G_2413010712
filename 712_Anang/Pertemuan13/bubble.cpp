#include <iostream>
#include <conio.h>

using namespace std;

int data[10], data2[10];
int n;


void tukar(int a, int b) {
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void bubble_sort() {
	system("cls");
	
	for(int i=1; i<n; i++) {
		cout << "\nTahap : " << (i) << "\n";
		cout << "=================================\n";
		
		for(int j=0; j<n-i; j++) {
			if(data[j] > data[j+1]) tukar(j,j+1);
			
			for (int x=0; x<n; x++) {
				cout << data[x] << "\t";
				cout << "\n";
			}
		}
	}
}

int main() {
	cout << "Masukkan Jumlah Data : ";
	cin >> n;
	for(int i=0; i<n; i++) {
		cout<<"Masukkan data ke "<<(i+1)<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
	bubble_sort();
	getch();
}
