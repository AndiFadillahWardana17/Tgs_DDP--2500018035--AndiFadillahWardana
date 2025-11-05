#include <iostream>
using namespace std;

int main() {
    long long detik, sisa;
    int jam, menit, detik_sisa;

    cout << "Masukkan angka >1 (dalam satuan detik): ";
    cin >> detik;

    jam = detik / 3600;
    sisa = detik % 3600;

    menit = sisa / 60;
    detik_sisa = sisa % 60;

    cout << detik << " detik = "
         << jam << " jam, "
         << menit << " menit, "
         << detik_sisa << " detik." << endl;

    return 0;
}


