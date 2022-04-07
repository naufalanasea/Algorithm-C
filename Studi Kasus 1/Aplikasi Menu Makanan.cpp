#include <iostream>
using namespace std;
int main(){
	int banyak, kode, a, menu, diskon;
	string jenis[10];
	int harga[10], porsi[10];
	float totalharga,total,uang,kembalian, totalhargaakhir;
	cout<<"                   Kedai Ayam                                     ";
	cout<<"                Jl. Jalan Doang Tapi Ga Mampir No. 69"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"|| >> MAKANAN :                                                  ||\n";
    cout<<"|| 1. Ayam Goreng      Rp.17.000 || 2. Ayam Bakar      Rp.21.000 ||\n";
    
    cout<<"\nBanyak Pesanan : ";
    cin>>banyak;
    for(a=1; a<=banyak; a++)
    {
        cout<<"\nPesanan Ke "<<a<<endl;
        cout<<"===================\n"<<endl;
        cout<<"Masukkan Nomor Makanan : ";
		cin>>kode;
        if (kode==1)
		{
			cout<<"Jumlah Pesan\t       : ";
			cin>>porsi[a];
            jenis[a]="Ayam goreng";
            harga[a]=17000;
		}
		else if (kode==2)
		{
			cout<<"Jumlah Pesan\t       : ";
			cin>>porsi[a];
            jenis[a]="Ayam Bakar";
            harga[a]=21000;
		}
   }
   system("cls");
    cout<<"                     Bukti Pemesanan Makanan                         "<<endl;
    cout<<"                        Kantin Yudityan                              "<<endl;
    cout<<"                Jl. Jalan Doang Tapi Ga Mampir No. 69                  "<<endl;
    cout<<"************************"<<endl;
    cout<<"======================================================================="<<endl;
    cout<<"No.       Nama          Harga        Jumlah      Subtotal             "<<endl;
    cout<<"          Makanan       Makanan      Pesan                            "<<endl;
    cout<<"======================================================================="<<endl;
    
    for(a=1; a<=banyak; a++)
    {
    	cout<<a<<"\t";
        cout<<jenis[a]<<"\t";
        cout<<harga[a]<<"\t\t";
        cout<<porsi[a]<<"\t  ";
        total = porsi[a] * harga[a];
        cout<<total<<"\t";
        cout<<endl;
   	    totalharga = totalharga + total;  
	}
	
    if (totalharga>=45000)
	{
		diskon = totalharga*0.10;
		totalhargaakhir = totalharga - diskon;
        cout<<"\n=======================================================================\n"<<endl;
        cout<<"Anda Mendapatkan Potongan Harga Sebesar 10%                             \n"<<endl;
        cout<<"                                Total Bayar     :Rp. "<<totalharga<<endl;
        cout<<"                                Total Diskon    :Rp. "<<diskon<<endl;
        cout<<"                                Total Akhir     :Rp. "<<totalhargaakhir<<endl;
        cout<<"                                Uang Bayar      :Rp. ";
	    cin>>uang;
        kembalian = uang - totalhargaakhir;
    	cout<<"___________________"<<endl;
    	cout<<"                                Uang Kembali    :Rp. "<<kembalian<<endl;
   	 	cout<<"======================================================================= "<<endl;
   	 	cout<<"Terimakasih Atas Kunjungan Anda:)               "<<endl;
   }
   else
   {
   		cout<<"\n=======================================================================\n"<<endl;
   		cout<<"Anda Tidak Mendapatkan Potongan Harga Karena S&K Tidak Berlaku!         \n"<<endl;
    	cout<<"                                Total Bayar     :Rp. "<<totalharga<<endl;
    	cout<<"                                Uang Bayar      :Rp. ";
		cin>>uang;
    	kembalian = uang - totalharga;
    	cout<<"_________"<<endl;
    	cout<<"                                Uang Kembali    :Rp. "<<kembalian<<endl;
    	cout<<"======================================================================= "<<endl;
    	cout<<"Terimakasih Atas Kunjungan Anda:)               "<<endl;
    	cout<<"======================================================================= "<<endl<<endl;
   }
}
