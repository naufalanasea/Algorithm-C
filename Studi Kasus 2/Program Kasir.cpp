#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	//Deklarasi variabel
	int jum_beli, bayar,diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_barang[50];
	float tot;
	
	cout<<"KASIR"<<endl;
	cout<<"======================"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Barang Yang Dibeli : ";
	cin>>jum_beli; //User memasukkan jumlah beli
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; //Pengguna input nama barang disimpan pada array nama_barang
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		cout<<"Harga       : ";
		cin>>harga[i]; //Pengguna input harga disimpan pada array harga
		
		sub_tot[i]=jumlah[i]*harga[i]; // Menjumlahkan Harga sub total barang
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total barang
	}
	
	cout<<endl;
	cout<<"------------------------------------------STRUK BELANJA ANDA-------------------------------------------------"<<endl;
	cout<<"---------------------------------------SUPERMARKET UAD KAMPUS 4----------------------------------------------"<<endl;
	cout<<"Jl. Ringroad Selatan, Kragilan, Tamanan, Kec. Banguntapan, Kabupaten Bantul, Daerah Istimewa Yogyakarta 55191"<<endl;
	cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; //Menampilkan semua nilai array
	}
	cout<<"---------------------------------------------------------"<<endl;

	//Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja
	if (tot>=200000){
		diskon=0.1*tot;
	}else {
		diskon=0;
	}
	
	//Menampilkan Keterangan
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Diskon        : Rp."<<diskon<<endl; //Menampilkan diskon
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;//Menampilkan total harga yang harus dibayar
	cout<<"Bayar        : Rp.";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl; // Menampilkan uang kembali
}

