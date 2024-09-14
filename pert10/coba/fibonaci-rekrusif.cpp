#include <iostream>

// Fungsi rekursif untuk menghitung bilangan Fibonacci
int fibonacci(int n) {
    if (n <= 1) { // Kondisi dasar
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Pemanggilan rekursif
    }
}

int main() {
    int n;
    std::cout << "Masukkan indeks Fibonacci: ";
    std::cin >> n;

    std::cout << "Bilangan Fibonacci ke-" << n << " adalah " << fibonacci(n) << std::endl;
    return 0;
}
