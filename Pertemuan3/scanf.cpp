#include <iostream>
#include <stdio.h>
#include <conio.h>

main () {
	int a, b, c = 0;
	system("cls");
	
	printf("Masukkan Nilai A = ");
	scanf("%d", &a); // scanf("penentuformat", alamat variable memori yang dituju)
	printf("Masukkan Nilai B = ");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("Hasil Penjumlahan = %d", c);
	getch();
	
}
