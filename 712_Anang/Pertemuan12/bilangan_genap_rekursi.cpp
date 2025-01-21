#include <iostream>

using namespace std;

void cetakGenap(int n) {
	if(n > 100) {
		return;
	}
	cout << n << "\n";
	cetakGenap(n + 2);
}

int main() {
	cout << "Bilangan genap dari 0 hingga 100:" << endl;
	cetakGenap(0);
	cout << endl;
	
	return 0;
}
