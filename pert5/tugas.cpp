#include <iostream>
#include <vector>

void exchangeSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {           // Looping untuk elemen pertama hingga kedua terakhir
        for (int j = i + 1; j < n; ++j) {       // Looping untuk elemen berikutnya setelah i hingga terakhir
            if (arr[i] > arr[j]) {              // Jika elemen arr[i] lebih besar dari arr[j]
                std::swap(arr[i], arr[j]);      // Tukar elemen arr[i] dan arr[j]
            }
        }
        // Mencetak array setelah setiap langkah untuk visualisasi
        std::cout << "Step " << i + 1 << ": ";  
        for (int k = 0; k < n; ++k) {           
            std::cout << arr[k] << " ";         
        }
        std::cout << std::endl;                 
    }
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    std::cout << "Initial array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    exchangeSort(arr);

    std::cout << "Sorted array: ";
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
