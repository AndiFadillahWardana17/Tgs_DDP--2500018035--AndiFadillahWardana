#include <iostream>
using namespace std;

int main(){
	int detik;
	
	cout<<"Masukkan angka >1 (dalam satuan detik) =";
	cin>> detik;
	
	long long hari = detik / 86400;
	long long sisa_detik = detik % 86400;
	long long jam = sisa_detik / 3600;
	sisa_detik = sisa_detik % 3600;
	long long menit = sisa_detik / 60;
	long long detik_akhir = sisa_detik % 60;
	
	cout<<endl;
	cout<<"Hasil konversi :" << endl;
	cout<<detik<<" "<<"detik ="<< hari <<"hari, "<<" "<<jam<<"jam, "<<" "<<menit<<"menit, "<<"  "<<detik_akhir<<"detik, "<< " " << endl;
	
	return 0;
	
}
