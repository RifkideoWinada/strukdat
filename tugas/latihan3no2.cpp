#include <iostream>
using namespace std;

void search_in_2d_array(int arr[][3], int rows, int cols, int target) {
    bool found = false;
    int row_index, col_index;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] == target) {
                found = true;
                row_index = i;
                col_index = j;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "Data " << target << " berada pada posisi [" << row_index << "][" << col_index << "]" << endl;
    } else {
        cout << "Data " << target << " tidak ditemukan dalam array" << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Masukkan jumlah baris array: ";
    cin >> rows;
    cout << "Masukkan jumlah kolom array: ";
    cin >> cols;

    int arr[rows][cols];
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Elemen pada baris " << i << " kolom " << j << ": ";
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> target;

    search_in_2d_array(arr, rows, cols, target);

    return 0;
}
