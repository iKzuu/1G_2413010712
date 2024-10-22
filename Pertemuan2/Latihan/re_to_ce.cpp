#include <iostream>

#include <iomanip>

using namespace std;

int main() {
	
	float re, ce;
	
	cout << "Masukkan suhu Reamure : ";
	cin >> re;
	
	ce = (5.0 / 4.0) * re;
	
	cout << "+--------------------------------+" << endl;
	cout << fixed << setprecision(1);
	cout << re << " °R adalah " << ce << " °C" << endl;
	cout << "+--------------------------------+" << endl;
	
	return 0;
}
