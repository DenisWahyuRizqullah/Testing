#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A; // Masukkan nilai uang yang akan ditukar

    int minCoins = 99999; // Inisialisasi nilai minimum dengan angka yang sangat besar

    for (int coin1 = 0; coin1 <= A/1; coin1++) {
        for (int coin5 = 0; coin5 <= A/3; coin5++) {
            for (int coin10 = 0; coin10 <= A/4; coin10++) {
                for (int coin20 = 0; coin20 <= A/5; coin20++) {
                    int numCoins = coin1 + coin5 + coin10 + coin20; // Hitung jumlah total koin
                    int totalValue = coin1*1 + coin5*3 + coin10*4 + coin20*5; // Hitung total nilai koin

                    if (totalValue == A && numCoins < minCoins) {
                        minCoins = numCoins; // Perbarui nilai minimum jika ditemukan jumlah koin yang lebih kecil
                    }
                }
            }
        }
    }

    cout << "Jumlah koin minimum yang dibutuhkan: " << minCoins << endl;

    return 0;
}
