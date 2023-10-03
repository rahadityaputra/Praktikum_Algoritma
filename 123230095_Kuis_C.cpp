#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

	// membuat beberapa variabel yang dibutuhkan
	string username = "rahaditya";
	string password = "123230095";
	string tanggalMasuk1, namaBarang1, tanggalMasuk2, namaBarang2, cariBarang, isiUsername, isiPassword, kembaliMenu;
	int stokBarang1, stokBarang2, menu, kesempatan = 3;

	
	cout << "Selamat datang" << endl;
	printf("username = ");
	cin >> isiUsername;
	cout << "password = ";
	cin >> isiPassword;

	if (username == isiUsername && password == isiPassword)
	{

		cout << "Silahkan pilih menu !" << endl;
		cout << "1. Input barang dan stok" << endl;
		cout << "2. Cek barang" << endl;
		cout << "3. Cari barang yang masuk" << endl;

		printf("Pilih menu : ");
		scanf("%i", &menu);

		switch (menu)
		{
		case 1:
			system("cls");
			cout << "tanggal barang masuk (hh/bb) = ";
			cin >> tanggalMasuk1;
			cout << "nama barang = ";
			cin >> namaBarang1;
			cout << "stok barang masuk (angka saja) = ";
			cin >> stokBarang1;
			cout << endl << endl;
			cout << "tanggal baratng masuk (hh/bb) = ";
			cin >> tanggalMasuk2;
			cout << "nama barang = ";
			cin >> namaBarang2;
			cout << "stok barang masuk (angka saja) = ";
			cin >> stokBarang2;

			cout << "anda memiliki " << kesempatan << " kesempatan untuk kembali ke menu" << endl;

			cout << "kembali ke menu (y/n) = ";
			cin >> kembaliMenu;

			if (kembaliMenu == "y")
			{
				kesempatan = kesempatan - 1;
				system("cls");
				cout << "Silahkan pilih menu !" << endl;
				cout << "1. Input barang dan stok" << endl;
				cout << "2. Cek barang" << endl;
				cout << "3. Cari barang yang masuk" << endl;

				cout << "Pilih menu : ";
				cin >> menu;

				if (menu == 1)
				{
					system("cls");
					cout << "anggal baratng masuk (hh/bb) = ";
					cin >> tanggalMasuk1;
					cout << "nama barang = ";
					cin >> namaBarang1;
					cout << "stok barang masuk (angka saja) = ";
					cin >> stokBarang1;
					cout << endl
						 << endl;
					cout << "tanggal baratng masuk (hh/bb) = ";
					cin >> tanggalMasuk2;
					cout << "nama barang = ";
					cin >> namaBarang2;
					cout << "stok barang masuk (angka saja) = ";
					cin >> stokBarang2;

					cout << "anda memiliki " << kesempatan << " kesempatan untuk kembali ke menu" << endl;

					cout << "kembali ke menu (y/n) = ";
					cin >> kembaliMenu;
					kesempatan = kesempatan - 1;
					if (kembaliMenu == "y")
					{
						system("cls");
						cout << "Silahkan pilih menu !" << endl;
						cout << "1. Input barang dan stok" << endl;
						cout << "2. Cek barang" << endl;
						cout << "3. Cari barang yang masuk" << endl;

						cout << "Pilih menu : ";
						cin >> menu;

						if (menu == 1)
						{
							system("cls");
							cout << "anggal baratng masuk (hh/bb) = ";
							cin >> tanggalMasuk1;
							cout << "nama barang = ";
							cin >> namaBarang1;
							cout << "stok barang masuk (angka saja) = ";
							cin >> stokBarang1;
							cout << endl
								 << endl;
							cout << "tanggal baratng masuk (hh/bb) = ";
							cin >> tanggalMasuk2;
							cout << "nama barang = ";
							cin >> namaBarang2;
							cout << "stok barang masuk (angka saja) = ";
							cin >> stokBarang2;

							cout << "anda memiliki " << kesempatan << " kesempatan untuk kembali ke menu" << endl;

							cout << "kembali ke menu (y/n) = ";
							cin >> kembaliMenu;

							if (kembaliMenu == "y")
							{
								system("cls");
								cout << "Silahkan pilih menu !" << endl;
								cout << "1. Input barang dan stok" << endl;
								cout << "2. Cek barang" << endl;
								cout << "3. Cari barang yang masuk" << endl;

								cout << "Pilih menu : ";
								cin >> menu;

								if (menu == 1)
								{
									system("cls");
									cout << "anggal baratng masuk (hh/bb) = ";
									cin >> tanggalMasuk1;
									cout << "nama barang = ";
									cin >> namaBarang1;
									cout << "stok barang masuk (angka saja) = ";
									cin >> stokBarang1;
									cout << endl
										 << endl;
									cout << "tanggal baratng masuk (hh/bb) = ";
									cin >> tanggalMasuk2;
									cout << "nama barang = ";
									cin >> namaBarang2;
									cout << "stok barang masuk (angka saja) = ";
									cin >> stokBarang2;
								}
								else if (menu == 2)
								{

									cout << "Tangga Barang 1 Masuk : " << tanggalMasuk1 << endl;
									cout << "Nama Barang 1 : " << namaBarang1 << endl;
									cout << "Stok Barang 1 Masuk : " << stokBarang1 << endl;

									cout << "Tangga Barang 2 Masuk : " << tanggalMasuk2 << endl;
									cout << "Nama Barang 2 : " << namaBarang2 << endl;
									cout << "Stok Barang 2 Masuk : " << stokBarang2 << endl;
								}

								else if (menu == 3)
								{

									// mencari barang
									cout << "cari barang = ";
									cin >> cariBarang;

									if (cariBarang == namaBarang1)
									{

										cout << "Tangga Barang 1 Masuk : " << tanggalMasuk1 << endl;
										cout << "Nama Barang 1 : " << namaBarang1 << endl;
										cout << "Stok Barang 1 Masuk : " << stokBarang1 << endl;
									}
									else if (cariBarang == namaBarang2)
									{
										cout << "Tangga Barang 2 Masuk : " << tanggalMasuk2 << endl;
										cout << "Nama Barang 2 : " << namaBarang2 << endl;
										cout << "Stok Barang 2 Masuk : " << stokBarang2 << endl;
									}

									else
									{
										cout << "tidak ada barang dengan nama tersebut";
									}
								}
							}
							else if (kembaliMenu == "n")
							{
								cout << "bye";
							}
							else
							{
								cout << "Tidak Sesuai Perintah";
							}
						}

						else if (menu == 2)
						{

							cout << "Tangga Barang 1 Masuk : " << tanggalMasuk1 << endl;
							cout << "Nama Barang 1 : " << namaBarang1 << endl;
							cout << "Stok Barang 1 Masuk : " << stokBarang1 << endl;

							cout << "Tangga Barang 2 Masuk : " << tanggalMasuk2 << endl;
							cout << "Nama Barang 2 : " << namaBarang2 << endl;
							cout << "Stok Barang 2 Masuk : " << stokBarang2 << endl;
						}

						else if (menu == 3)
						{

							// mencari barang
							cout << "cari barang = ";
							cin >> cariBarang;

							if (cariBarang == namaBarang1)
							{

								cout << "Tangga Barang 1 Masuk : " << tanggalMasuk1 << endl;
								cout << "Nama Barang 1 : " << namaBarang1 << endl;
								cout << "Stok Barang 1 Masuk : " << stokBarang1 << endl;
							}
							else if (cariBarang == namaBarang2)
							{
								cout << "Tangga Barang 2 Masuk : " << tanggalMasuk2 << endl;
								cout << "Nama Barang 2 : " << namaBarang2 << endl;
								cout << "Stok Barang 2 Masuk : " << stokBarang2 << endl;
							}

							else
							{
								cout << "tidak ada barang dengan nama tersebut";
							}
						}
					}
					else if (kembaliMenu == "n")
					{
						cout << "bye";
					}
					else
					{
						cout << "Tidak Sesuai Perintah";
					}
				}
				else if (menu == 2)
				{

					cout << "Tangga Barang 1 Masuk : " << tanggalMasuk1 << endl;
					cout << "Nama Barang 1 : " << namaBarang1 << endl;
					cout << "Stok Barang 1 Masuk : " << stokBarang1 << endl;

					cout << "Tangga Barang 2 Masuk : " << tanggalMasuk2 << endl;
					cout << "Nama Barang 2 : " << namaBarang2 << endl;
					cout << "Stok Barang 2 Masuk : " << stokBarang2 << endl;
				}

				else if (menu == 3)
				{

					// mencari barang
					cout << "cari barang = ";
					cin >> cariBarang;

					if (cariBarang == namaBarang1)
					{

						cout << "Tangga Barang 1 Masuk : " << tanggalMasuk1 << endl;
						cout << "Nama Barang 1 : " << namaBarang1 << endl;
						cout << "Stok Barang 1 Masuk : " << stokBarang1 << endl;
					}
					else if (cariBarang == namaBarang2)
					{
						cout << "Tangga Barang 2 Masuk : " << tanggalMasuk2 << endl;
						cout << "Nama Barang 2 : " << namaBarang2 << endl;
						cout << "Stok Barang 2 Masuk : " << stokBarang2 << endl;
					}

					else
					{
						cout << "tidak ada barang dengan nama tersebut";
					}
				}
			}
			else if (kembaliMenu == "n")
			{
				cout << "bye";
			}
			else
			{
				cout << "Tidak Sesuai Perintah";
			}
			break;
		case 2:
			cout << "anda belum input barang";
			break;
		case 3:
			cout << "anda belum input barang";
			break;
		default:
			cout << "kamu salah pilih menu";
		}
	}

	else
	{

		cout << "kamu salah masukkan username atau password";
	}

	return 0;
}
