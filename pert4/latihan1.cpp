#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Masukkan " << n << " angka:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cari;
    cout << "Masukkan angka yang akan dicari: ";
    cin >> cari;

    vector<int> indices;
    for(int i = 0; i < n; i++) {
        if(arr[i] == cari) {
            indices.push_back(i);
        }
    }

    if(indices.empty()) {
        cout << "Tidak ditemukan!\n";
    } else {
        cout << "Data " << cari << " ditemukan pada indeks ke: ";
        for(int i = 0; i < indices.size(); i++) {
            cout << indices[i];
            if(i != indices.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    cout << "Tekan 'Enter' untuk keluar...";
    cin.ignore(); // Membersihkan input buffer
    cin.get(); // Menunggu input dari pengguna sebelum keluar

    return 0;
}
