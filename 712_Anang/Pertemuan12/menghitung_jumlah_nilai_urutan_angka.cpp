#include <iostream>

using namespace std;

int hitungJumlah(int n) {
	if(n == 1) {
		return 1;
	}
	return n + hitungJumlah(n - 1);
}

int main() {
	int batas = 999;
	int hasil = hitungJumlah(batas);
	
	cout << "Jumlah nilai dari 1 hingga " << batas << " adalah: " << hasil << endl;
	
	return 0;
}
