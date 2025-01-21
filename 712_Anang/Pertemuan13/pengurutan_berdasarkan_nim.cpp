#include <iostream>
#include <cstring>

using namespace std;

struct Mahasiswa {
    char nim[10];
    float nilai1;
    float nilai2;
};

void bubbleSort(Mahasiswa arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j].nim, arr[j + 1].nim) > 0) {
                Mahasiswa temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> n;

    Mahasiswa mahasiswa[n];

    cout << "Masukkan data mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nilai 1: ";
        cin >> mahasiswa[i].nilai1;
        cout << "Nilai 2: ";
        cin >> mahasiswa[i].nilai2;
    }

    bubbleSort(mahasiswa, n);

    cout << "\nData mahasiswa setelah diurutkan berdasarkan NIM:\n";
    for (int i = 0; i < n; i++) {
        cout << "NIM: " << mahasiswa[i].nim << "\t"
             << "Nilai 1: " << mahasiswa[i].nilai1 << "\t"
             << "Nilai 2: " << mahasiswa[i].nilai2 << endl;
    }

    return 0;
}

