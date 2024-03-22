#include <iostream>
#include <limits>

// Fungsi untuk mencetak elemen-elemen array
void printArray(int arr[], int size) {
    std::cout << "Elemen-elemen array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Fungsi untuk menghitung jumlah elemen array
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Fungsi untuk mencari nilai maksimum dalam array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    const int SIZE = 5; // Ukuran array yang bisa disesuaikan
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    // 1. inisialisasi array dan cetak elemennya
    printArray(numbers, SIZE);

    // 2. menghitung jumlah elemen array
    int sum = sumArray(numbers, SIZE);
    std::cout << "Jumlah elemen array: " << sum << "\n";

    // 3. Mencari nilai maksimum dalam array
    int max = findMax(numbers, SIZE);
    std::cout << "Nilai maksimum dalam array: " << max << "\n";

    return 0;
}
