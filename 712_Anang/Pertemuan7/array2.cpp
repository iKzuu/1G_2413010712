#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

main() {
	int i;
	char nama[5] [20];
	float nilai1[5];
	float nilai2[5];
	float hasil[5];
	
	system("cls");
	for(i=1; i<=2; i++) {
		cout<<"Data Siswa 	 : ";
		gets(nama[i]);
		
		cout<<"Nilai Teori 	 : "; 
		cin>>nilai1[i];
		cin.ignore();
		
		cout<<"Nilai Praktek : ";
		cin>>nilai2[i];
		cin.ignore();
		
		hasil[i] = (nilai1[i] * 0.40) + (nilai2[i] * 0.60);
		cout<<endl;
	}
	
	cout<<"=================================="<<endl;
	cout<<"No. Nama Nilai Nilai Hasil"<<endl;
	cout<<"Mid Tes Final Ujian"<<endl;
	cout<<"=================================="<<endl;
	cout<<endl;
	
	for(i=1;i<=2;i++) {
		cout<<setiosflags(ios::left)<<setw(4)<<i;
		cout<<setiosflags(ios::left)<<setw(20)<<nama[i];
		cout<<setprecision(2)<<" "<<nilai1[i];
		cout<<setprecision(2)<<" "<<nilai2[i];
		cout<<setprecision(2)<<" "<<hasil[i];
		cout<<endl;	
	}
	cout<<"=================================="<<endl;
	getch();
}
