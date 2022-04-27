#include "../base.h"

void BaseProject::output(){
  for (int i = 1; i <= jumlahmhs; i++)
    cout << "Nama mahasiswa : " << nama[i] << endl;
    cout << "Matkul / Tugas / UTS/ UAS / NILAI AKHIR /" << endl;
    for(int j = 1; j <= jumlahmtkl; j++){
      cout << matkul[j] << " " << tugas[j] << " " << uts[j] << " " << uas[j] << " " << akhir[j];
      cout << endl;
    }
    cout << "Nilai rata rata : " << rata1 << " " << rata2 << " " << rata3 << " " << rata4;
  cout << endl;
}

int main(){
  BaseProject base;
  base.output();
  return 0; 
  }