#include <iostream>
#include <conio.h>

using namespace std;

int linearsearch(const int *vArray, const int vJmlData, const int vCari) {
	bool notFound = true;
	int i = 0;
	
	while(i < vJmlData && notFound) {
		if(vCari != vArray[i])
			i++;
		else
			notFound = false;
	}
	
	if(notFound == false)
		return i;
	else
		return -1;
}

int main() {
	int data[] = { 57, 3, 502, 99, 1007, 2, 9, 8 };
	int jmldata = sizeof(data) / sizeof(int);
	int jmlketemu = 0;
	
	cout << "Data yang dicari : ";
	cin >> jmlketemu;
	int i = linearsearch(data, jmldata, jmlketemu);
	
	if(i == -1)
		cout << "Data tidak ditemukan !\n\n";
	else
		cout << "Data ditemukan pada posisi index ke- " << i <<"\n";
		
	getch();
	return 0;
}
