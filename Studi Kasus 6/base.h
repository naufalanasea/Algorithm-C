#include <iostream>
using namespace std;

class BaseProject{
  public:
    void input(); 
    void proses();
    void output();
  private:
    string nama[20], matkul[20], namadsn;
    int max, min, jumlahmhs, jumlahmtkl, tugas[20], uts[20], uas[20], totaltugas = 0, totaluts = 0, totaluas = 0, totalakhir = 0;
    float rata1, rata2, rata3, rata4, akhir[20];
};

void BaseProject::input(){
  cout << "============== Input Nilai ==============" << endl;
  cout << "Masukkan jumlah mahasiswa : "; cin >> jumlahmhs;
  cout << "Masukkan jumlah matkul : "; cin >> jumlahmtkl;
  cout << "Nama Dosen : ";cin >> namadsn;
  cout << "========================================" << endl;
  for(int i = 1; i <= jumlahmhs; i++){
    cout << "Nama Mahasiswa ke-" << i << " : "; cin >> nama[i];
    for (int j = 1; j <= jumlahmtkl; j++){
      cout << "Nama matkul ke-" << j << " : "; cin >> matkul[j];
      cout << "Nilai tugas : "; cin >> tugas[j];
      max = tugas[j];
      for(int i=0; i<jumlahmtkl; i++){
      	if(tugas[j] > max){
      		max = tugas[j];
		  }
	  }
	  min = tugas[j];
      cout << "Nilai UTS : "; cin >> uts[j];
      min = uts[j];
      for(int i=0; i<jumlahmtkl; i++){
      	if(uts[j] < min){
      		min = uts[j];
		  }
	  }
      cout << "Nilai UAS : "; cin >> uas[j];
    }
  }
}

void BaseProject::proses(){
  for(int i = 1; i <= jumlahmhs; i++){
    for(int j = 1; j <= jumlahmtkl; j++){
      akhir[j] = (tugas[j] * 0.2) + (uts[j] * 0.35) + (uas[j] * 0.45);
    }
    for(int j = 1; j <= jumlahmtkl; j++){
      totaltugas += tugas[j];
      totaluts += uts[j];
      totaluas += uas[j];
      totalakhir += akhir[j];
    }
    rata1 = totaltugas / jumlahmtkl;
    rata2 = totaluts / jumlahmtkl;
    rata3 = totaluas / jumlahmtkl;
    rata4 = totalakhir / jumlahmtkl;
  }
}

void BaseProject::output(){
  for (int i = 1; i <= jumlahmhs; i++){
    cout << "Nama mahasiswa : " << nama[i] << endl;
    cout << "Matkul / Tugas / UTS/ UAS / NILAI AKHIR /" << endl;
    for(int j = 1; j <= jumlahmtkl; j++){
      cout << matkul[j] << " " << tugas[j] << " " << uts[j] << " " << uas[j] << " " << akhir[j];
      cout << endl;
    }
    cout << "Nilai rata rata : " << rata1 << " " << rata2 << " " << rata3 << " " << rata4;
    cout << endl;
    cout<< "Nilai max : "<<max;
    cout<<"Nilai min : "<<min;
  }
}
