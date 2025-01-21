#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
    struct smhs {
        char nim[5];
        char nama[15];
        float nilai;
        char grade;
    };
    
    smhs mahasiswa[5];
    int a = 0;
    
    system("cls");
    
    do {
        cout << "Data pada index ke - " << a << endl;
        cout << "=======================" << endl;
        cout << "masukkan NIM    = ";
        cin >> mahasiswa[a].nim;
        cout << "masukkan Nama   = ";
        cin >> mahasiswa[a].nama;
        cout << "masukkan Nilai  = ";
        cin >> mahasiswa[a].nilai;

        if (mahasiswa[a].nilai >= 85) {
            mahasiswa[a].grade = 'A';
        } else if (mahasiswa[a].nilai >= 70) {
            mahasiswa[a].grade = 'B';
        } else if (mahasiswa[a].nilai >= 55) {
            mahasiswa[a].grade = 'C';
        } else if (mahasiswa[a].nilai >= 40) {
            mahasiswa[a].grade = 'D';
        } else {
            mahasiswa[a].grade = 'E';
        }
        
        cout << endl;
        a++;
    } while ( a < 5 );
    
    system("cls");
    
    cout << "   NIM     Nama          Nilai   Grade" << endl;
    cout << "=======================================" << endl;
    for (int b = 0; b < 5; b++) {
        cout << setw(7) << mahasiswa[b].nim;
        cout << setw(12) << mahasiswa[b].nama;
        cout << setw(10) << mahasiswa[b].nilai;
        cout << setw(7) << mahasiswa[b].grade << endl;
    }
    
    getch();
    return 0;
}

