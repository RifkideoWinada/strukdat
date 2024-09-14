#include <iostream>
using namespace std;

int main() {
    int var = 10; // Inisialisasi variabel integer dengan nilai 10.
    int *ptr = &var; // Deklarasi pointer yang menunjuk ke variabel.

    cout << "Nilai awal variabel: " << *ptr << endl; // Mencetak nilai variabel menggunakan pointer.

    *ptr = 20; // Mengubah nilai variabel menjadi 20 menggunakan pointer.

    cout << "Nilai variabel setelah diubah: " << *ptr << endl; // Mencetak nilai variabel yang telah diubah menggunakan pointer.

    return 0;
}
