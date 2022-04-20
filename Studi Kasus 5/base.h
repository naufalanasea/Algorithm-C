#include <iostream>
using namespace std;

class BaseProject{
      public :
        void input();
        void masuk(int n);
        void proses();
        void hitung(int n);
        void output();
        void keluar(int n);

      private:
         string nama, matkul[30];
         int jumlah, total = 0, bayar, nim, sks[30];
};

void BaseProject::input(){
  cout << "============= SKS MAHASISWA ============" << endl;
  cout << "Masukkan Nama : "; cin >> nama;
  cout << "Masukkan NIM : "; cin >> nim;
  cout << "Masukkan jumlah matkul yang diambil : "; cin >> jumlah;
  masuk(jumlah);
  cout << "========================================" << endl;
}

void BaseProject::masuk(int n){
  if (n == 0){
		}
	else{
		cout << "Masukkan nama matkul	: "; cin >> matkul[n];
		cout << "Masukkan sks matkul	: "; cin >> sks[n];
		masuk(n - 1);
  }
}

void BaseProject::proses(){
  hitung(jumlah);
  bayar = total * 112500;
};

void BaseProject::hitung(int n){
  if (n == 0){
	}
		else{
		total += sks[n];
		hitung (n - 1);
  }
}

void BaseProject::output(){
  cout << "Nama : " << nama << endl;
  cout << "NIM : " << nim << endl;
  cout << "========================================" << endl;
  keluar(jumlah);
  cout << "========================================" << endl;
  cout << "Total sks = " << total << " sks" << endl;
  cout << "Total biaya = Rp." << bayar << endl; 
  cout << "========================================" << endl;
}

void BaseProject::keluar(int n){
  if (n == 0){
  }
  else{
     cout << matkul[n] << " (" << sks[n] << " sks)" << endl;
    keluar(n - 1);
  }
}