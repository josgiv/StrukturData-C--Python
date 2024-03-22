#include <iostream>
#include <cstring>
#include <cstdlib>

struct Simpul {
    char dat[10];
    struct Simpul *next;
};

int main() {
    struct Simpul *temp, *head = nullptr, *ptr = nullptr;
    std::string masukan;

    do {
        std::cout << "Input Data: ";
        std::getline(std::cin, masukan);

        if (!masukan.empty()) {
            if (masukan.length() > 0) {
                if (masukan.length() < 10) {
                    masukan.append(10 - masukan.length(), ' ');
                }

                temp = static_cast<struct Simpul *>(malloc(sizeof(struct Simpul)));

                strcpy(temp->dat, masukan.c_str());
                temp->next = nullptr;

                if (head == nullptr) {
                    head = temp;
                    ptr = head;
                } else {
                    ptr->next = temp;
                    ptr = ptr->next;
                }
            }
        }
    } while (!masukan.empty());

    std::cout << std::endl;

    if (head != nullptr) {
        ptr = head;
        std::cout << "cell: {Alamat} [ Data | Cell berikut]" << std::endl;
        do {
            std::cout << "cell: {" << ptr << "} [" << ptr->dat << " | " << ptr->next << "]" << std::endl;
            ptr = ptr->next;
        } while (ptr != nullptr);
    }

    return 0;
}
