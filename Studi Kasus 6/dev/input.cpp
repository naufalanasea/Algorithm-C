#include "../base.h"

void BaseProject::input(){
  cout << "============== Input Nilai ==============" << endl;
  cout << "Masukkan jumlah mahasiswa : "; cin >> jumlahmhs;
  cout << "Masukkan jumlah matkul : "; cin >> jumlahmtkl;
  cout<< "Nama Dosen : "; cin>> namadsn;
  cout << "========================================" << endl;
  for(int i = 1; i <= jumlahmhs; i++){
    cout << "Nama Mahasiswa ke-" << i << " : "; cin >> nama[i];
    for (int j = 1; j <= jumlahmtkl; j++){
      cout << "Nama matkul ke-" << j << " : "; cin >> matkul[j];
      cout << "Nilai tugas : "; cin >> tugas[j];
      cout << "Nilai UTS : "; cin >> uts[j];
      cout << "Nilai UAS : "; cin >> uas[j];
    }
  }
}


int main(){
  BaseProject base;
  base.input();
  return 0;
}
