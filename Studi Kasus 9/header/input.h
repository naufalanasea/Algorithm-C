using namespace std;

class Input {
  public:
    void inputArr(int arr[], int size){
      cout<<"\nJumlah Buku : "<<size<<endl<<endl;
      for(int i=0; i<size; i++){
        cout<<"Buku ke-"<<i+1<<" = ";
        cin>>arr[i];
      }
      cout << "\nBuku sebelum disusun :\n\n ";
      for(int i=0; i<size; i++){ 
        cout<<arr[i]<<" ";
      }
    }
};
