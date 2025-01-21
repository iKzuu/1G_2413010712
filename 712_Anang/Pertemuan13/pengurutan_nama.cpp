#include <iostream>
#include <cstring>

using namespace std;

void bubbleSort(char arr[][20], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;

    cout << "Masukkan jumlah nama: ";
    cin >> n;

    char nama[n][20];

    cout << "Masukkan " << n << " nama:\n";
    for (int i = 0; i < n; i++) {
        cin >> nama[i];
    }

    bubbleSort(nama, n);

    cout << "\nNama-nama yang diurutkan:\n";
    for (int i = 0; i < n; i++) {
        cout << nama[i] << endl;
    }

    return 0;
}

