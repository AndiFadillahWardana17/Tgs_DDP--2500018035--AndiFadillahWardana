#include <iostream>
using namespace std;

int main() {
    long long detik, sisa;
    int jam, menit, detik_sisa;

    cout << "Masukkan angka >1 (dalam satuan detik): ";
    cin >> detik;

    jam = detik / 3600;          // 1 jam = 3600 detik
    sisa = detik % 3600;

    menit = sisa / 60;           // 1 menit = 60 detik
    detik_sisa = sisa % 60;

    cout << detik << " detik = "
         << jam << " jam, "
         << menit << " menit, "
         << detik_sisa << " detik." << endl;

    return 0;
}

