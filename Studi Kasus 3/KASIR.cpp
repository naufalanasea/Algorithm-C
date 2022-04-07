#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	{
	}
	ofstream myfile2("Struk.txt");
	float  pil,ageprek,agoreng,ug,cg,ab;
	float  bayar_1,bayar_2,bayar_3,bayar_4,bayar_5;
	float  total, total_s, jarak,ongkir, biaya_o,semua;
	string ulangi;
	
	cout<<"1. Ayam Geprek  \t: 21000"<<endl;
	cout<<"2. Ayam Goreng  \t: 17000"<<endl;
	cout<<"3. Udang Goreng \t: 19000"<<endl;
	cout<<"4. Cumi Goreng  \t: 20000"<<endl;
	cout<<"5. Ayam Bakar   \t: 25000"<<endl<<endl;
	 
	//BELI MAKANAN 
	do{
		
	cout<<"Pilih Makanan Sesuai Nomor : "; cin>>pil; 
	if(pil==1){
		cout<<"Pengguna Memilih Ayam Geprek\n" ;
		cout<<"Jumlah Pesanan : "; cin>>ageprek;
		bayar_1 = ageprek * 21000; 
		cout<<"Harga : "<<bayar_1<<endl;
	}else if(pil==2){
		cout<<"Pengguna Memilih Ayam Goreng\n" ;
		cout<<"Jumlah Pesanan : "; cin>>agoreng;
		bayar_2 = agoreng * 17000;
		cout<<"Harga : "<<bayar_2<<endl;
	}else if(pil==3){
		cout<<"Pengguna Memilih Udang Goreng\n" ;
		cout<<"Jumlah Pesanan : "; cin>>ug;
		bayar_3 = ug * 19000;
		cout<<"Harga : "<<bayar_3<<endl;
	}else if (pil==4){
		cout<<"Pengguna Memilih Cumi Goreng\n" ;
		cout<<"Jumlah Pesanan : "; cin>>cg;
		bayar_4 = cg * 20000;
		cout<<"Harga : "<<bayar_4<<endl;
	}else if(pil==5){
		cout<<"Pengguna Memilih Ayam Bakar\n" ;
		cout<<"Jumlah Pesanan : "; cin>>ab;
		bayar_5 = ab * 25000;
		cout<<"Harga : "<<bayar_5<<endl;
	}
	cout<<endl;
	cout<<"Apakah ingin memesan lagi (y/n) : "; cin>>ulangi;
	
	}
	while(ulangi=="y");
	
	//TOTAL MAKANAN
	total = bayar_1 + bayar_2 + bayar_3 + bayar_4 + bayar_5 ;
	cout<<"Total Pesanan : "<<total<<endl;
	
	
	//ONGKIR
	cout<<"Jarak Rumah (dalam KM) : "; cin>>jarak;
	if(jarak<3){
		cout<<"Ongkir : 15000"<<endl;
		ongkir = 15000;
		
	}else if (jarak>=3){
		cout<<"Ongkir : 25000"<<endl;
		ongkir = 25000;
	}
	cout<<endl;
	
	//DISKON dan ONGKIR
	
	if(total>=0 && total < 25000){
		total_s = total ;
		biaya_o = ongkir ;
		cout<<"Total : "<<total_s<<endl;
		cout<<"Ongkir : "<<biaya_o<<endl;
		
	}
	else if (total>=25000 && total <50000)
	{
		biaya_o = ongkir - 3000;
		cout<<"Ongkir : "<<biaya_o<<endl;
		
	}
	else if (total >=50000 && total < 150000)
	{
		cout<<"=======================================\n";
		cout<<"Anda Mendapat Diskon 15%"<<endl;
		total_s = total - (total * 0.15);
		cout<<"Total Setelah Dapat Diskon : "<<total_s<<endl;
		biaya_o = ongkir - 5000;
		cout<<"Ongkir : "<<biaya_o<<endl;
	}
	else if (total>=150000){
		cout<<"- - - - - - - - - -  - - - - - - - - - - - - - - -\n";
		cout<<"Anda Mendapat Diskon Sebesar 35% "<<endl;
		total_s = total - (total * 0.35);
		cout<<"Harga Setelah Diskon : "<<total_s<<endl;
		biaya_o = ongkir - 8000;
		cout<<"Ongkos Kirim : "<<biaya_o;
	}
	
	semua = biaya_o + total_s;
	cout<<"Total Invoice : "<<semua<<endl;
	myfile2<<"======================================================================="<<endl;
	myfile2<<"AYAM GEPREK  | AYAM GORENG  |  UDANG GORENG  | CUMI GORENG  | AYAM BAKAR"<<endl;
	myfile2<<"======================================================================="<<endl;
	myfile2<<"      "<<ageprek<<"             "<<agoreng<<"               "<<ug<<"             "<<cg<<"            "<<ab<<endl;
	myfile2<<"======================================================================="<<endl;
	myfile2<<"      TOTAL : "<<total+ongkir<<endl;
	myfile2<<"======================================================================="<<endl;
	myfile2<<"Harga Sebelum Diskon : "<<total+ongkir<<endl;
	myfile2<<"Total Setelah Diskon : "<<semua<<endl;
	
}
