#include <iostream>

typedef int angka;
typedef float pecahan;
typedef char huruf;

int main() {
    angka umur;
    pecahan pecah;
    huruf h;
    huruf nama[10];

    std::cout << "Masukkan umur anda : ";
    std::cin >> umur;
    std::cout << "Umur anda adalah " << umur;

    std::cout << "\nMasukkan bilangan pecahan : ";
    std::cin >> pecah;
    std::cout << "Bilangan pecahan " << pecah;

    std::cout << "\nMasukkan huruf : ";
    std::cin >> h;
    std::cout << "\nHuruf anda " << h;

    std::cout << "\nMasukkan nama : ";
    std::cin >> nama;
    std::cout << "Nama anda " << nama;

    return 0;
}
