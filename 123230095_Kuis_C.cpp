#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	// membuat beberapa variabel yang dibutuhkan
	string username = "a";
	string password = "a";
	string tanggalMasuk1, namaBarang1, tanggalMasuk2, namaBarang2, cariBarang, isiUsername, isiPassword, kembaliMenu;
	int stokBarang1, stokBarang2, menu;

	// masukkan username dan password
	printf("username = ");
	cin >> isiUsername;
	cout << "password = ";
	cin >> isiPassword;

	if (username == isiUsername && password == isiPassword)
	{
		system("cls");
		cout << "Silahkan pilih menu !" << endl;
		cout << "1. Input barang dan stok" << endl;
		cout << "2. Cek barang" << endl;
		cout << "3. Cari barang yang masuk" << endl << endl;
		cout << "Pilih menu : ";
		cin >> menu;

		// user memilih menu , kasus ini menggunakan metode Switch
		switch (menu)
		{
		case 1:
			system("cls");
			cout << "Tanggal barang 1 masuk (hh/bb) \t= ";
			cin >> tanggalMasuk1;
			cout << "Nama barang 1 \t\t\t= ";
			cin >> namaBarang1;
			cout << "Stok barang 1 masuk (angka saja)= ";
			cin >> stokBarang1;
			cout << "Tanggal barang 2 masuk (hh/bb) \t= ";
			cin >> tanggalMasuk1;
			cout << "Nama barang 2 \t\t\t= ";
			cin >> namaBarang1;
			cout << "Stok barang 2 masuk (angka saja)= ";
			cin >> stokBarang1;
			break;
		case 2:
			cout << "Kamu belum input barang";
			break;
		case 3:
			cout << "Kamu belum input barang";
			break;
		default:
			cout << "Kamu salah pilih menu";
		}
	}
	else
	{
		cout << "Kamu salah masukkan username atau password";
	}
	return 0;
}
