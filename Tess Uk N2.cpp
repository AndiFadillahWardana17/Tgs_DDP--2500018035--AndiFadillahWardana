#include <iostream>
using namespace std;

int main() {
    long long detik, sisa;
    int hari, jam, menit, detik_sisa;

    cout << "Masukkan angka >1 (dalam satuan detik) = ";
    cin >> detik;

    hari = detik / 86400;
    sisa = detik % 86400;

    jam = sisa / 3600; 
    sisa = sisa % 3600;

    menit = sisa / 60; 
    detik_sisa = sisa % 60;

    cout << detik << " detik = " 
         << hari << " hari, " 
         << jam << " jam, " 
         << menit << " menit, " 
         << detik_sisa << " detik." << endl;

    return 0;
}

