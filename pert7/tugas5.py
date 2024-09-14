def exchange_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(i + 1, n):
            if arr[i] > arr[j]:
                # Tukar elemen arr[i] dengan arr[j]
                arr[i], arr[j] = arr[j], arr[i]

# Contoh penggunaan
array = [64, 25, 12, 22, 11]
print("Array sebelum diurutkan:", array)

exchange_sort(array)
print("Array setelah diurutkan:", array)