#include <iostream>
using namespace std;

int main(){
	int detik;
	
	cout<<"Masukkan angka >1 (dalam satuan detik) =";
	cin>>detik;
	
	long long jam = detik / 3600;
	long long sisa_detik = detik % 3600;
	long long menit = sisa_detik / 60;
	long long detik_akhir = sisa_detik % 60;
	
	cout<<endl;
	cout<<"Hasil Konversi :"<<endl;
	cout<<detik<<" "<<"detik ="<<" "<<jam<<"jam, "<<" "<<menit<<"menit, "<<" "<<detik_akhir<<"detik";
	
	return 0;
}
