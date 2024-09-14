#include <iostream> // Memasukkan library iostream untuk input/output.
using namespace std; // Menggunakan namespace std untuk memudahkan penulisan kode.

// Fungsi bubbleSort untuk mengurutkan array menggunakan algoritma Bubble Sort.
void bubbleSort(int arr[], int n) {
    // Loop luar untuk mengontrol jumlah iterasi.
    for (int i = 0; i < n-1; i++) {
        // Loop dalam untuk membandingkan elemen yang bersebelahan.
        for (int j = 0; j < n-i-1; j++) {
            // Jika elemen saat ini lebih besar dari elemen berikutnya, tukar posisinya.
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// Fungsi utama di mana eksekusi program dimulai.
int main() {
    int n; // Deklarasi variabel untuk menyimpan jumlah elemen array.
    cout << "Masukkan jumlah elemen array: "; // Meminta pengguna untuk memasukkan jumlah elemen.
    cin >> n; // Menerima jumlah elemen dari pengguna dan menyimpannya di variabel n.
    int arr[n]; // Deklarasi array dengan ukuran yang ditentukan oleh pengguna.
    
    cout << "Masukkan elemen array: "; // Meminta pengguna untuk memasukkan elemen array.
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Menerima elemen array dari pengguna dan menyimpannya di array.
    }
    
    bubbleSort(arr, n); // Memanggil fungsi bubbleSort untuk mengurutkan array.
    
    cout << "Array setelah diurutkan: "; // Menampilkan pesan bahwa array akan ditampilkan setelah diurutkan.
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Menampilkan elemen array yang telah diurutkan.
    }
    
    return 0; // Mengakhiri program dengan status sukses.
}
