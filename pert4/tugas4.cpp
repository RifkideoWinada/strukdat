#include <stdio.h>

int main() {
    // membuat array dengan kapasitas 10
    int data[10];

    // menerima inputan dari user dan menyimpannya ke array
    for(int i = 0; i < 10; i++) {
        printf("Masukkan data ke-%d: ", i);
        scanf("%d", &data[i]);
    }

    // menampilkan isi array
    printf("\nIsi array: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", data[i]);
    }

    return 0;
}