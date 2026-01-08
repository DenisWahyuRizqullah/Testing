#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

vector<vector<int>> perkalianMatriksOptimized(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int m = A.size();    // Jumlah baris pada matriks A
    int n = B[0].size(); // Jumlah kolom pada matriks B
    int p = B.size();    // Jumlah baris pada matriks B (sama dengan jumlah kolom pada matriks A)

    vector<vector<int>> hasil(m, vector<int>(n, 0));

    // Perkalian matriks dengan kompleksitas di bawah O(n^3)
    for (int i = 0; i < m; i++) {
        for (int k = 0; k < p; k++) {
            if (A[i][k] != 0) {
                for (int j = 0; j < n; j++) {
                    hasil[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }

    return hasil;
}

int main() {
    vector<vector<int>> A = {
        {1, 2},
        {3, 4}
    };

    vector<vector<int>> B = {
        {5, 6},
        {7, 8}
    };

    // Algoritma perkalian matriks dengan kompleksitas di bawah O(n^3)
    auto start = high_resolution_clock::now();
    vector<vector<int>> hasilOptimized = perkalianMatriksOptimized(A, B);
    auto stop = high_resolution_clock::now();
    auto durationOptimized = duration_cast<microseconds>(stop - start);

    // Menampilkan hasil perkalian matriks dan waktu eksekusi
    cout << "Hasil perkalian matriks dengan kompleksitas di bawah O(n^3):" << endl;
    for (const auto& row : hasilOptimized) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}       