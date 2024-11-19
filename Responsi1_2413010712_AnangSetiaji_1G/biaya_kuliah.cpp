#include <iostream>

using namespace std;

int main(){
	int by_sks = 150000;
	int by_smt = 500000;
	int total, smt, sks;
	
	cout << "Semester : ";
	cin >> smt;
	
	cout << "Jumlah SKS : ";
	cin >> sks;
	
	total = (by_sks * sks) + by_smt;
	
	cout << "\n==================" << endl;
	
	cout << "Semester\t: " << smt << endl;
	cout << "SKS\t: " << sks << endl;
	cout << "Biaya tetap\t: " << by_smt << endl;
	cout << "Total\t: " << total << endl;
	
	return 0;
}
