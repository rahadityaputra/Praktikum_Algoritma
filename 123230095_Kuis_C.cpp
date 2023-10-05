#include <iostream>
#include <stdio.h>
using namespace std;

void daftarBarang(int barang, string namaBarang, int stokBarang, string tanggalMasuk){
	cout << "Tanggal barang "<< barang <<" masuk (hh/bb) \t= " << tanggalMasuk << endl;
	cout << "Nama barang "<< barang <<" \t\t\t= " << namaBarang << endl;
	cout << "Stok barang "<< barang <<" masuk (angka saja)= " << stokBarang << endl;
}

void menuPilihan(){
	cout << "Silahkan pilih menu !" << endl;
	cout << "1. Input barang dan stok" << endl;
	cout << "2. Cek barang" << endl;
	cout << "3. Cari barang yang masuk" << endl << endl;
}


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
		cout << "Selamat Datang "<< isiUsername << endl;
		menuPilihan();
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
			cin >> tanggalMasuk2;
			cout << "Nama barang 2 \t\t\t= ";
			cin >> namaBarang2;
			cout << "Stok barang 2 masuk (angka saja)= ";
			cin >> stokBarang2;
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

		// apakah user akan kembali ke menu ?
		cout << "3 kesempatan untuk kembali ke menu" << endl;
		cout << "Kembali ke menu ? (y/n) : " << endl;
		cin >> kembaliMenu;

		if (kembaliMenu == "y")
		{
			system("cls");
			menuPilihan();
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
				cin >> tanggalMasuk2;
				cout << "Nama barang 2 \t\t\t= ";
				cin >> namaBarang2;
				cout << "Stok barang 2 masuk (angka saja)= ";
				cin >> stokBarang2;
				break;
			case 2:
				system("cls");
				daftarBarang(1, namaBarang1, stokBarang1, tanggalMasuk1);
				daftarBarang(2, namaBarang2, stokBarang2, tanggalMasuk2);
				break;
			case 3:
				cout << "cari barang : " << endl;
				cin >> cariBarang;
				if (cariBarang == namaBarang1) daftarBarang(1, namaBarang1, stokBarang1, tanggalMasuk1);
				else if (cariBarang == namaBarang2) daftarBarang(2, namaBarang2, stokBarang2, tanggalMasuk2);
				else cout << "barang yang anda cari tidak ada" << endl;

				break;
			default:
				cout << "Kamu salah pilih menu";
			}
			// apakah user akan kembali ke menu ?
			cout << "2 kesempatan untuk kembali ke menu" << endl;
			cout << "Kembali ke menu ? (y/n) : " << endl;
			cin >> kembaliMenu;

			if (kembaliMenu == "y")
			{
				system("cls");
				menuPilihan();
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
					system("cls");
					daftarBarang(1, namaBarang1, stokBarang1, tanggalMasuk1);
					daftarBarang(2, namaBarang2, stokBarang2, tanggalMasuk2);
					break;
				case 3:
					cout << "cari barang : " << endl;
					cin >> cariBarang;

					if (cariBarang == namaBarang1) daftarBarang(1, namaBarang1, stokBarang1, tanggalMasuk1);
					else if (cariBarang == namaBarang2) daftarBarang(2, namaBarang2, stokBarang2, tanggalMasuk2);
					else cout << "barang yang anda cari tidak ada" << endl;

					break;
				default:
					cout << "haha" << endl;
				}

				// apakah user akan kembali ke menu ?
				cout << " 1 kesempatan untuk kembali ke menu" << endl;
				cout << "Kembali ke menu ? (y/n) : " << endl;
				cin >> kembaliMenu;

				if (kembaliMenu == "y")
				{
					system("cls");
					menuPilihan();
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
						system("cls");
						daftarBarang(1, namaBarang1, stokBarang1, tanggalMasuk1);
						daftarBarang(2, namaBarang2, stokBarang2, tanggalMasuk2);
						break;
					case 3:
						cout << "cari barang : " << endl;
						cin >> cariBarang;

						if (cariBarang == namaBarang1) daftarBarang(1, namaBarang1, stokBarang1, tanggalMasuk1);
						else if (cariBarang == namaBarang2) daftarBarang(2, namaBarang2, stokBarang2, tanggalMasuk2);
						else cout << "barang yang anda cari tidak ada" << endl;
						break;
					default:
						cout << "haha" << endl;
					}
				}
				else cout << "yasudah" << endl;
			}
		}
	}else cout << "Kamu salah masukkan username atau password";
		return 0;
	}
