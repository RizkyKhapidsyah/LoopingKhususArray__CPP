#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	//Program: Looping Untuk Array di C++ versi 11 keatas.

	int nilaiArray[10] = { 6,3,5,7,2,1,4,9,0,8 };
	int i;

	//Menggunakan Looping Biasa
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "Menggunakan Looping Biasa (Perulangan Sesuai Jumlah Data Dalam Array)" << endl;
	cout << "-----------------------------------------------------------------------" << endl;

	for (i = 0; i <= 9; i++)
	{
		cout << "Perulangan ke " << i << " Menampilkan Nilai : " << nilaiArray[i] << endl;
	}

	cout << "\n\n-----------------------------------------------------------------------" << endl;
	cout << "Menggunakan Looping Biasa (Perulangan Melebihi Jumlah Data Dalam Array)" << endl;
	cout << "-----------------------------------------------------------------------" << endl;

	for (i = 0; i <= 10; i++) //Perulangan Sengaja Dilebihkan 1 (menjadi 10x) Dan lihat hasilnya saat program dijalankan
	{
		cout << "Perulangan ke " << i << " Menampilkan Nilai : " << nilaiArray[i] << endl;
	}

	cout << "\n\n-----------------------------------------------------------------------" << endl;
	cout << "Menggunakan Looping Khusus Untuk Array" << endl;
	cout << "-----------------------------------------------------------------------" << endl;

	for (int i : nilaiArray)
	{		
		cout << "Perulangan Untuk Menampilkan Nilai : " << i << endl;
	}

	cout << "\n\n-----------------------------------------------------------------------" << endl;
	cout << "Memanipulasi Array Menggunakan Reference (Contoh 1)" << endl;
	cout << "-----------------------------------------------------------------------" << endl;

	for (int i : nilaiArray)
	{
		cout << "Address: " << &i << ". Dengan Nilai: " << i << endl;
		i = 1;	//Tidak Merubah Array
	}

	cout << "\n\n-----------------------------------------------------------------------" << endl;
	cout << "Memanipulasi Array Menggunakan Reference (Contoh 2)" << endl;
	cout << "-----------------------------------------------------------------------" << endl;

	for (int &i : nilaiArray)
	{
		i *= 2;
		cout << "Address: " << &i << ". Dengan Nilai: " << i << endl;
	}

	_getch();
	return 0;
}