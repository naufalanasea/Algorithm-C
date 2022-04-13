using namespace std;

class Output{
  public:
    void cetak(){
      cout << "---------------------------------------------------" << endl;
      cout << "Laporan Keuangan Pada " << data_file[0] << " bulan" << endl;
      cout << "Uang per bulan kamu adalah = Rp." << data_file[1] << endl; 
      for (i = 0; i < data_file[0]; i++){
        cout << "Pengeluaran bulan ke-" << i + 1 << "adalah Rp." <<  data_file[5 + i] << endl;
      }
      cout << "Uang Saku Kamu Selama  " << data_file[0] << " bulan adalah Rp." << data_file[2] << endl;
      cout << "Jumlah Semua Pengeluaran Kamu Selama " << data_file[0] << " bulan adalah Rp." << data_file[3] << endl;
      cout << "Sisa Saldo/uang Kamu di tabungan adalah Rp." << data_file[4] << endl;
    }
    void getData(){
      ambil_data.open("api_data.txt");
      while(!ambil_data.eof()){
        ambil_data >> data_file[index];
        index += 1;
      }
      ambil_data.close();
    }
  private:
    ifstream ambil_data;
    int data_file[30];
    int i, index = 0; 
};
