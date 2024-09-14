#include <iostream>

// Fungsi rekursif untuk menghitung jumlah elemen array
int jumlahArray(int arr[], int size) {
    if (size == 0) { // Kondisi dasar
        return 0;
    } else {
        return arr[size - 1] + jumlahArray(arr, size - 1); // Pemanggilan rekursif
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Jumlah elemen dalam array: " << jumlahArray(arr, size) << std::endl;
    return 0;
}
