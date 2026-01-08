#include <iostream>
#include <vector>

using namespace std;

vector<int> koin = {5, 4, 3, 1}; // nilai koin yang tersedia
int n = koin.size(); // jumlah koin yang tersedia

void tukar_koin(int nilai_uang) {
    int jumlah_koin = 0;
    for (int i = 0; i < n; i++) {
        while (nilai_uang >= koin[i]) {
            nilai_uang -= koin[i];
            jumlah_koin++;
        }
    }
    cout << "Jumlah koin minimum yang dibutuhkan: " << jumlah_koin << endl;
}

int main() {
    int nilai_uang;
    cout << "Masukkan nilai uang yang akan ditukar: ";
    cin >> nilai_uang;
    tukar_koin(nilai_uang);
    return 0;
}
