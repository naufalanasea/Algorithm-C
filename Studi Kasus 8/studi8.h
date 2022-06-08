#include<iostream>
using namespace std;

class Studi{
public:
    void input();
    void proses();
private:
  int a[6][2];
  int total[6];
  int hasil;
};

void Studi::input(){
    for(int i=0; i<6; i++){
    	cout << " Masukkan stok : ";
        cin >> a[i][0];
    }
    for (int i=0; i<6; i++){
        cout << " Masukkan harga : ";
        cin >> a[i][1];
    }
}

void Studi::proses(){
    hasil = 0;
    for(int i=0; i<6; i++){
      total[i] = a[i][0] * a[i][1];
    }
    for (int i=0; i<6; i++){
      hasil = hasil + total[i];
    }
    //output
    cout << "==========================================\n";
    cout << "Nama barang\tStok\tHarga\tTotal\n";
    cout << "==========================================\n";
    cout << "Samsung evo\t";
    for(int i=0; i<2; i++){
      cout << a[0][i] << "\t";
    }
    cout << total[0];
    cout << "\nSandisk 16gb\t";
    for(int i=0; i<2; i++){
      cout << a[1][i] << "\t";
    }
    cout << total[1];
    cout << "\nLogitech M170\t";
    for(int i=0; i<2; i++){
      cout << a[2][i] << "\t";
    }
    cout << total[2];
    cout << "\nWD Green 120 GB\t";
    for(int i=0; i<2; i++){
      cout << a[3][i] << "\t";
    }
    cout << total[3];
    cout << "\nGarmin Venu SQ\t";
    for(int i=0; i<2; i++){
      cout << a[4][i] << "\t";
    }
    cout << total[4];
    cout << "\nEPSON L3210 AIO\t";
    for(int i=0; i<2; i++){
      cout << a[5][i] << "\t";
    }
    cout << total[5];
    cout << "\nTotal penjualan keseluruhan " << "\t" << hasil ;
    cout << "\n==========================================\n";
  }
