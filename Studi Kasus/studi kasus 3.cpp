#include <iostream>

using namespace std;

class mahasiswa{
	friend istream operator>>(istream&, mahasiswa&);
	friend ostream operator<<(ostream&, mahasiswa&);
	
private:
	string nama[50];
	string cari, temp, nim[10];
	string telp[12];
	string prodi[20];
	string kata[10];
	int n;
	
public:
	void input();
	void proses();
	void output();
}m;

void mahasiswa::input()
{
	cout<<" Masukan jumlah mahasiswa : ";
	cin >> n;
	for (int i=0; i<n; i++)
	{
		cout<<"data ke-"<<i<<endl;
		cout<<"NIM\t:";cin>>nim[i];
		cout<<"Nama\t:";cin>>nama[i];
		cout<<"Prodi\t:";cin>>prodi[i];
		cout<<"telp\t:";cin>>telp[i];
	}
}

void mahasiswa::proses()
{
	int i, j;
	for (j=1;j<n;j++)
	{
		temp=nim[j];
		cout<<" Data ke- "<<j + 1<<" yaitu "<<nim[j]<<" diambil dari deret "<<endl;
		cout<<" dilakukan penggeseran elemen : "<<endl;
		for(i=j-1; (i >= 0) && (nim[i]>temp);i--)
		{
			cout<<" Data pada posisi ke- ["<<i+1<<"] digeser ke posisi ["<<i+2<<"j] "<<endl;
			nim[i+1]=nim[i];
		}
		cout<<" Data baru masuk pada posisi ke-["<<i+2<<"j] "<<endl;
		nim[i+1]=temp;
	}	
}

void mahasiswa::output()
{
	int k;
	cout<<" Hasil nim secara berurutan adalah: ";
	cout<<endl;
	for(int k=0;k<=n;k++)
	{
		cout<<nim[k]<<" ";
	}
}

int main()
{
	m.input();
	m.proses();
	m.output();
}
