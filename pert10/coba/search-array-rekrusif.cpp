#include <iostream>

// Fungsi rekursif untuk menampilkan elemen array
void cetakArray(int arr[], int size) {
    if (size == 0) { // Kondisi dasar
        return;
    } else {
        std::cout << arr[size - 1] << " ";
        cetakArray(arr, size - 1); // Pemanggilan rekursif dengan ukuran array yang dikurangi
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Isi array: ";
    cetakArray(arr, size);
    std::cout << std::endl;

    return 0;
}
