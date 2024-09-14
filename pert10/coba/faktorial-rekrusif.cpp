#include <iostream>

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0) { // Kondisi dasar
        return 1;
    } else {
        return n * faktorial(n - 1); // Pemanggilan rekursif
    }
}

int main() {
    int n;
    std::cout << "Masukkan angka: ";
    std::cin >> n;

    std::cout << "Faktorial dari " << n << " adalah " << faktorial(n) << std::endl;
    return 0;
}
