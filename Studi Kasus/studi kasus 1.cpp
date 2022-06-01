#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//Data nama utama, hanya bisa diubah secara manual oleh user (hanya dibaca saat pengurutan).
string nama_mahasiswa[5];
//deklarasi fungsi
void bubbleSort(string *nama, int jumlah, bool isAscending);
void selectionSort(string *nama, int jumlah, bool isAscending);
void insertionSort(string *nama, int jumlah, bool isAscending);
void dataBaru(string *nama, int jumlah);
void printListNama(string *nama, int jumlah, string pesan);

//memindahkan data string pada dua index array(string arg1, string arg2)
template <typename T>
void balik(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	//char nama[5][30], temp[30];
	char edit, sort='6';
	string nama[5];
	int jumlah = sizeof(nama) / sizeof(nama[5]);

	//Nilai awal / default untuk test
	nama_mahasiswa[0] = "Yudit Aditya Nugraha";
	nama_mahasiswa[1] = "Naufal Anas ES Abiyyu";
	nama_mahasiswa[2] = "Hilal Haidar";
	nama_mahasiswa[3] = "Budi Suyanto";
	nama_mahasiswa[4] = "Suryono Hadi Siswoyo";
edit:
	system("cls");
	//List nama  
	printListNama(nama_mahasiswa, jumlah, " Nama mahasiswa saat ini : ");

	//pilihan edit data, user memasukkan semua nama jika pilihan 'n'
	cout << "\n[!] Ketik 'P' untuk lanjut atau 'B' input data baru : "; cin >> edit;
	switch (tolower(edit))
	{
	case 'p':
	case '0':
		goto next;
		break;
	case 'b':
		dataBaru(nama, jumlah);
		break;
	default:
		goto next;
		break;
	}

next:
	//menyalin data utama yang nilainya belum berubah
	for (int i = 0; i < jumlah; i++)
		nama[i] = nama_mahasiswa[i];

	system("cls");

	//menampilkan list nama sebelum disorting
	printListNama(nama, jumlah, "Nama mahasiswa sebelum disorting : ");

	//pilihan menu
	switch (sort)
	{
	case '0':
		sort = '6';
		goto edit;
		break;
	case '1':
		bubbleSort(nama, jumlah, true);
		break;
	case '2':
		bubbleSort(nama, jumlah, false);
		break;
	case '3':
		selectionSort(nama, jumlah, true);
		break;
	case '4':
		selectionSort(nama, jumlah, false);
		break;
	case '5':
		insertionSort(nama, jumlah, true);
		break;
	case '6':
		insertionSort(nama, jumlah, false);
		break;
	default:
		system("cls");
		cout << "[!] Pilihan tidak tersedia\n"
			<< "Coba masukkan kembali" << endl;
		goto menu;
		break;
	}

	//menampilkan list nama setelah disorting
	printListNama(nama, jumlah, "\nNama mahasiswa setelah disorting : ");
	menu:
	//menampilkan list pilihan menu yang tersedia dan inputannya
	cout << "\n\n================ MENU PENGURUTAN ================\n"
		 << " 1. Bubble sort (Ascending)\n"
		 << " 2. Bubble sort (Descending)\n"
		 << " 3. Selection sort (Ascending)\n"
		 << " 4. Selection sort (Descending)\n"
		 << " 5. Insertion sort (Ascending)\n"
		 << " 6. Insertion sort (Descending){ :default }\n"
		 << "=============== 0 Input Data Baru ===============\n"
		<< "Pilihan : "; cin >> sort;
	goto next;
}

// 11.12.5800

void bubbleSort(string *nama, int jumlah, bool isAscending = true) {
	for (int i = 0; i < jumlah; i++)
		for (int j = 0; j < jumlah - 1 - i; j++)
				//nama[j] harus lebih besar dari nama[j+1] agar nilainya 1
				if (isAscending ? nama[j].compare(nama[j + 1]) > 0 : nama[j].compare(nama[j + 1]) < 0)
					balik(nama[j], nama[j + 1]);//menukar nilai string nama
	string apa = isAscending ? "Ascending" : "Descending";
	cout << "\n[!] Nama diurutkan menggunakan Bubble Sort ( "<<apa<<" ) " << endl;
}

void selectionSort(string *nama, int jumlah, bool isAscending = true) {
	int belumDisorting = jumlah;//jumlah n index yang belum disorting
	for (int i = 0; i <jumlah; i++)
	{
		int maxmin = 0;
		for (int j = 0; j < belumDisorting; j++)
			//nama[j] harus lebih besar dari nama[max] agar nilainya 1
			if (isAscending ? nama[j].compare(nama[maxmin]) > 0 : nama[j].compare(nama[maxmin]) < 0)
				maxmin = j;

		balik(nama[maxmin], nama[belumDisorting - 1]);
		belumDisorting--;
	}
	string apa = isAscending ? "Ascending" : "Descending";
	cout << "\n[!] Nama diurutkan menggunakan Selection Sort ( "<<apa<<" ) " << endl;
}

void insertionSort(string *nama, int jumlah, bool isAscending = true) {
	string temp;
	for (int i = 0; i < jumlah; i++)
	{
		int n = i;
		//index pertama dianggap urut (n>0)
		//nama[n] harus lebih kecil/sama dengan nama[n-1]
		//agar nilainya lbh kecil/sama dgn 0
		while (n>0 && (isAscending ? nama[n].compare(nama[n - 1]) <= 0 : nama[n].compare(nama[n - 1]) >= 0))
		{
			balik(nama[n], nama[n - 1]);
			n--;
		}
	}
	string apa = isAscending ? "Ascending" : "Descending";
	cout << "\n[!] Nama diurutkan menggunakan Insertion Sort ( "<<apa<<" ) " << endl;
}

//Mengubah semua data lama ke data baru yang diinputkan user(string arg ... arg-n, int jumlah)
void dataBaru(string *nama, int jumlah) {
	cout << "\nMasukkan 5 nama teman anda :" << endl;
	for (int i = 0; i < jumlah; i++) {
		cout << "nama_mahasiswa[" << i << "] = "; cin >> nama_mahasiswa[i];
	}
}

//menampilkan daftar nama
void printListNama(string *nama, int jumlah, string pesan) {
	cout <<pesan << endl;
	for (int i = 0; i < jumlah; i++)
		 cout << " " << i + 1 << ". " << nama[i] << endl;
}
