#include <iostream>
#include <conio.h>

using namespace std;

void printarray (int arg[], int length) {
	for (int n=0; n<length; n++)
		cout << arg[n] << " ";
	cout << "\n";
}

int main() {
	int firstarray[] = {5, 10, 15};
	int secondarray[] = {2, 4, 6, 8, 10};
	
	printarray (firstarray, 3);
	printarray (secondarray, 5);
	
	getch();
	return 0;
}
