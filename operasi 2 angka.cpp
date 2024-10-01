#include <iostream>

using namespace std;

int main() {
    double angka1, angka2;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "Hasil:" << endl;
    cout << "Jumlah: " << (angka1 + angka2) << endl;
    cout << "Selisih: " << (angka1 - angka2) << endl;
    cout << "Perkalian: " << (angka1 * angka2) << endl;

    if (angka2 != 0) {
        cout << "Pembagian: " << (angka1 / angka2) << endl;
    } else {
        cout << "Pembagian: Tidak dapat membagi dengan nol." << endl;
    }

    return 0; // Menunjukkan bahwa program selesai dengan sukses
}

