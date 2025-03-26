#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n;       // Variabel untuk jumlah elemen

void input() {
    // Procedure untuk input data
    while (true) {
        cout << "Masukkan Jumlah Data pada Array (maks 20): ";
        cin >> n;

        if (n <= 20) // Memastikan jumlah elemen tidak lebih dari 20
            break;
        else
            cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
    }

    cout << endl;
    cout << "====================================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "====================================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i]; // Menyimpan nilai ke dalam array
    }
}

void insertionSort() {
    // Proses pengurutan menggunakan Insertion Sort
    int temp, j;
    
    for (int i = 1; i < n; i++) { // Mulai dari indeks ke-1
        temp = arr[i];  // Simpan nilai sementara
        j = i - 1;  

        while (j >= 0 && arr[j] > temp) { // Pindahkan elemen yang lebih besar
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp; // Tempatkan elemen di posisi yang benar
    }
}

void display() {
    cout << endl;
    cout << "====================================" << endl;
    cout << "Total Passes = " << n - 1 << endl; // Menampilkan jumlah langkah
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "====================================" << endl;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << " "; // Menampilkan array setelah diurutkan
    }
    cout << endl;
}

int main() {
    input();
    insertionSort();
    display();
    return  0;
}