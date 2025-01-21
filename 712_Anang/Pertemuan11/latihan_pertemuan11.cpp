#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct skaryawan {
    int nik;
    char nama[20];
    int anak;
    int pendidikan;
};

const int JUMLAH_KARYAWAN = 5;
skaryawan karyawan[JUMLAH_KARYAWAN];
int gapok, tanak;
char ket[10];

void fgapok(int pendidikan);
int ftanak(int jmlanak);
int ftotal(int gapok, int tanak);
void inputData(int index);
void cetakData(int jumlahKaryawan);

void fgapok(int pendidikan) {
    if (pendidikan == 1) {
        gapok = 10000;
        strcpy(ket, "SD");
    } else if (pendidikan == 2) {
        gapok = 20000;
        strcpy(ket, "SMP");
    } else {
        gapok = 30000;
        strcpy(ket, "SMA");
    }
}

int ftanak(int jmlanak) {
    if (jmlanak > 2) {
        tanak = 3 * 500;
    } else {
        tanak = jmlanak * 500;
    }
    return tanak;
}

int ftotal(int gapok, int tanak) {
    return gapok + tanak;
}

void inputData(int index) {
    cout << "Data Karyawan ke-" << (index + 1) << endl;
    cout << " NIK         : ";
    cin >> karyawan[index].nik;
    cout << " Nama        : ";
    cin >> karyawan[index].nama;
    cout << " Anak        : ";
    cin >> karyawan[index].anak;
    cout << " Pendidikan (1=SD, 2=SMP, 3=SMA): ";
    cin >> karyawan[index].pendidikan;

    fgapok(karyawan[index].pendidikan);
    tanak = ftanak(karyawan[index].anak);
    int totalGaji = ftotal(gapok, tanak);

    cout << "Gaji Pokok   : " << gapok << endl;
    cout << "Tunj. Anak   : " << tanak << endl;
    cout << "Total Gaji   : " << totalGaji << endl;
    cout << "-------------------------------------------" << endl;
}

void cetakData(int jumlahKaryawan) {
    system("cls");
    cout << "Laporan Gaji Karyawan" << endl;
    cout << "===================================================================" << endl;
    cout << setw(5) << "No"
         << setw(10) << "NIK"
         << setw(15) << "Nama"
         << setw(10) << "Anak"
         << setw(15) << "Pendidikan"
         << setw(10) << "Gapok"
         << setw(10) << "TAnak"
         << setw(10) << "Total" << endl;
    cout << "===================================================================" << endl;

    for (int i = 0; i < jumlahKaryawan; i++) {
        fgapok(karyawan[i].pendidikan);
        tanak = ftanak(karyawan[i].anak);
        int totalGaji = ftotal(gapok, tanak);

        cout << setw(5) << (i + 1)
             << setw(10) << karyawan[i].nik
             << setw(15) << karyawan[i].nama
             << setw(10) << karyawan[i].anak
             << setw(15) << ket
             << setw(10) << gapok
             << setw(10) << tanak
             << setw(10) << totalGaji << endl;
    }

    cout << "===================================================================" << endl;
}

int main() {
    int jumlahKaryawan = 2;

    for (int i = 0; i < jumlahKaryawan; i++) {
        inputData(i);
    }

    cetakData(jumlahKaryawan);

    return 0;
}

