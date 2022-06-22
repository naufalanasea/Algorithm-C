#include <iostream>
using namespace std;

class pointer {
public:
    void data_mhs(){
      string nama[30];
      int nim[30], *y;
      cout << "Program Menghitung jumlah mahassiswa lomba Parmatika 2022\n";
      cout << "\n";
      int x, p;
      cout << "Masukan Jumlah Data Mahasiswa :";
      cin >> p;
      for (int i=1; i<=p; i++){
        y = &nim[i];
        cout << endl;
        cout << "Nomor :";
        cin >> i;
        cout << "Nama  :";
        cin >> nama[i];
        cout << "Nim :";
        cin >> nim[i];
        cout << endl;
      }
    cout << endl;
    cout << "-----------------------------------------------\n";
    cout << "No"
         << "\t"
         << "Nama"
         << "\t\t"
         << "NIM"
         << "\t\t\t"
         << "Alamat nim" << endl;
    cout << "--------------------------------------\n";
    for (int i=1; i<=p; i++){
      y = &nim[i];
      cout << i << "\t" << nama[i] << "\t\t" << nim[i] << "\t\t" << y << "\t";
      cout << endl;
    }
    cout << endl;
    }
};
