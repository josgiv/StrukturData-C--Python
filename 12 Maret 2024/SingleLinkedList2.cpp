#include <iostream>
#include <iomanip>

using namespace std;

struct node {
    int data;
    node* next;
};

node* head;
node* tail;
node* curr;
node* entry;
node* del;

void inisialisasi() {
    head = nullptr;
    tail = nullptr;
}

void input(int dt) {
    entry = new node;
    entry->data = dt;
    entry->next = nullptr;
    if (head == nullptr) {
        head = entry;
        tail = head;
    } else {
        tail->next = entry;
        tail = entry;
    }
}

void hapus() {
    int simpan;
    if (head == nullptr) {
        cout << "\nLinked list kosong, penghapusan tidak bisa dilakukan" << endl;
    } else {
        simpan = head->data;
        cout << "\ndata yang dihapus adalah " << simpan << endl;
        del = head;
        head = head->next;
        delete del;
    }
}

void cetak() {
    curr = head;
    if (head == nullptr)
        cout << "\ntidak ada data dalam linked list" << endl;
    else {
        cout << "\nData yang ada dalam linked list adalah" << endl;
        cout << setw(6);
        while (curr != nullptr) {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << endl;
    }
}

void menu() {
    char pilih, ulang;
    int data;

    do {
        system("cls");
        cout << "SINGLE LINKED LIST NON CIRCULAR" << endl;
        cout << "-------------------------------" << endl;
        cout << "Menu : " << endl;
        cout << "1. Input data" << endl;
        cout << "2. Hapus data" << endl;
        cout << "3. Cetak data" << endl;
        cout << "4. Exit" << endl;
        cout << "Masukkan pilihan anda : ";
        cin >> pilih;

        switch (pilih) {
            case '1':
                cout << "\nMasukkan data : ";
                cin >> data;
                input(data);
                break;
            case '2':
                hapus();
                break;
            case '3':
                cetak();
                break;
            case '4':
                exit(0);
                break;
            default:
                cout << "\nPilih ulang" << endl;
        }
        cout << "\nKembali ke menu?(y/n)";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');
}

int main() {
    inisialisasi();
    menu();
    return 0;
}
