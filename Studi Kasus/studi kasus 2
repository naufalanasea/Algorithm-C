#include <iostream>
#include <conio.h>
#include <iomanip>
//metode bubble sort
using namespace std;

int main()
{
  int Nilai[20];
  int i, j, k, N;
  int temp;
  bool tukar;
  cout<<"Masukkan Banyak Bilangan : ";
  cin>>N;
  for(i=0; i<N; i++)
  {
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai[i];
  }
}

//Proses Cetak Sebelum diurutkan
cout<<"\nData sebelum diurut : ";
for(i=0; i<N; i++)
  cout<<setw(3)<<Nilai[i];
  
//Proses Pengurutan
i=0;
tukar = true;
while ((i<=N-2) && (tukar))
{
  tukar = false;
  for(j=N-1; j>=i+1; j--)
  {
    if(Nilai[j] < Nilai[j-1])
    {
      {
        temp = Nilai[j];
        Nilai[j] = Nilai[j-1];
        Nilai[j-1] = temp;
        tukar = true;
        cout<<"\nUntuk j = " <<j<<" : ";
        for(k=0; k<N; k++)
          cout<<set(3)<<Nilai[k];
      }
    }
    i++;
  }
  
  //Proses Cetak Setelah diurutkan
  cout<<"\nData Setelah di urut : ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai[i];
  getch();
}
