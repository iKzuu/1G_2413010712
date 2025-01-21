#include <iostream>
#include <cstring>

using namespace std;

struct Pelanggan {
    int nopelanggan;
    char golongan[5];
    int meterlalu;
    int metersk;
};

void bubbleSort(Pelanggan arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].nopelanggan > arr[j + 1].nopelanggan) {
                Pelanggan temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah data pelanggan: ";
    cin >> n;

    Pelanggan pelanggan[n];

    cout << "Masukkan data pelanggan:\n";
    for (int i = 0; i < n; i++) {
        cout << "No Pelanggan: ";
        cin >> pelanggan[i].nopelanggan;
        cout << "Golongan: ";
        cin >> pelanggan[i].golongan;
        cout << "Meter Lalu: ";
        cin >> pelanggan[i].meterlalu;
        cout << "Meter Sekarang: ";
        cin >> pelanggan[i].metersk;
    }

    bubbleSort(pelanggan, n);

    cout << "\nData pelanggan setelah diurutkan berdasarkan No Pelanggan:\n";
    cout << "No Pelanggan\tGolongan\tMeter Lalu\tMeter Sekarang\n";
    for (int i = 0; i < n; i++) {
        cout << pelanggan[i].nopelanggan << "\t\t"
             << pelanggan[i].golongan << "\t\t"
             << pelanggan[i].meterlalu << "\t\t"
             << pelanggan[i].metersk << endl;
    }

    return 0;
}

