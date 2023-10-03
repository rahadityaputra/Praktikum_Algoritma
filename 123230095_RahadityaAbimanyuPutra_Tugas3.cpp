#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    // untuk menampung nama barang yang mau dibeli
    string namaBarang;
    // untuk menampung jumlah barang yang dibeli
    int jumlahBarang;
    // untuk menampung diskon barang
    int diskonBarang;
    // untuk menampung harga per barang
    int hargaPerBarang;
    // untuk menampung total harga barang
    int totalHargaBarang;

    // variabel untuk inputan user
    string isiUsername;
    string isiPassword;

    // variabel untuk harga dan diskon
    int hargaKue = 5000;
    int hargaBeras = 10000;
    int hargaKopi = 5000;
    int hargaTeh = 5000;
    int hargaGula = 12000;

    // username
    string username = "rahaditya_abimanyu";

    // password
    string password = "rahaditya123";

    // ucapan selamat datang
    cout << setw(60) << setfill('=') << "" << endl;
    cout << "Selamat datang, silahkan login" << endl;
    cout << setw(60) << setfill('=') << "" << endl;

    // user diminta mengisi inputan
    cout << "\nusername \t: ";
    getline(cin, isiUsername);
    cout << "password \t: ";
    cin >> isiPassword;
    system("pause");

    // user bisa masuk jika username dan password diinputkan benar
    if (username == isiUsername && password == isiPassword)
    {
        // mendeklarasikan variabel untuk menampung pilihan user
        int pilihMenu;

        // menghapus tulisan pada terminal
        system("cls");

        // ucapan selamat datang ke user
        cout << setw(60) << setfill('=') << "" << endl;
        cout << "Selamat datang " << username << endl;
        cout << setw(60) << setfill('=') << "" << endl;

        // menampilkan menu kepada user
        cout << "\nSilahkan Pilih Menu :" << endl;
        cout << "1. Belanja " << endl;
        cout << "2. Daftar Barang " << endl;
        cout << "0. Exit " << endl;

        // user diminta untuk memilih pilihan
        printf("Pilih : ");
        scanf("%i", &pilihMenu);

        switch (pilihMenu)
        {
        case 1:
            system("cls"); // menghapus tulisan di terminal

            // daftar barang
            cout << setw(60) << setfill('=') << "" << endl;
            cout << "Daftar Barang : " << endl;
            cout << "1. Kue \t\tharga = Rp. 5000 / potong " << endl;
            cout << "2. Gula \tharga = Rp. 12000 / kg " << endl;
            cout << "3. Beras \tharga = Rp. 10000 / kg " << endl;
            cout << "4. Kopi \tharga = Rp. 5000 / kemasan " << endl;
            cout << "5. Teh \t\tharga = Rp. 5000 / Kemasan " << endl;
            cout << setw(60) << setfill('=') << "" << endl;

            // input barang yang mau dibeli
            cout << "Nama Barang (huruf kecil) \t: ";
            cin >> namaBarang;

            // jika nama barang yang dimasukkan banar
            if (namaBarang == "kue" || namaBarang == "kopi" || namaBarang == "gula" || namaBarang == "beras" || namaBarang == "teh")
            {

                // input jumlah barang yang mau dibeli
                cout << "Jumlah Barang \t\t\t: ";
                cin >> jumlahBarang;

                // cek apakah jumlah barang lebih dari 0
                if (jumlahBarang > 0)
                {
                    // cout << "Harga Barang :" << endl;
                    // cout << "Total Harga Barang :" << endl;
                    cout << "Data Sudah Direkam. " << endl;

                    // menghitung diskon
                    if (jumlahBarang >= 20 && jumlahBarang < 50)
                    {
                        diskonBarang = 5000;
                    }
                    else if (jumlahBarang >= 50)
                    {
                        diskonBarang = 15000;
                    }
                    else
                    {
                        diskonBarang = 2000;
                    }

                    // untuk menghitung harga
                    if (namaBarang == "kue")
                    {
                        hargaPerBarang = 5000;
                        totalHargaBarang = hargaKue * jumlahBarang - diskonBarang;
                    }
                    else if (namaBarang == "kopi")
                    {
                        hargaPerBarang = 5000;
                        totalHargaBarang = hargaKopi * jumlahBarang - diskonBarang;
                    }
                    else if (namaBarang == "gula")
                    {
                        hargaPerBarang = 12000;
                        totalHargaBarang = hargaGula * jumlahBarang - diskonBarang;
                    }
                    else if (namaBarang == "beras")
                    {
                        hargaPerBarang = 10000;
                        totalHargaBarang = hargaBeras * jumlahBarang - diskonBarang;
                    }
                    else
                    {
                        hargaPerBarang = 5000;
                        totalHargaBarang = hargaTeh * jumlahBarang - diskonBarang;
                    }

                    system("pause");
                    system("cls");

                    // menampilkan struk Belanja
                    cout << setw(60) << setfill('=') << "" << endl;
                    cout << "Struk Belanja" << endl;
                    cout << setw(60) << setfill('=') << "" << endl;
                    cout << "\nNama Pembeli \t\t: " << username << endl;
                    cout << "Nama Barang \t\t: " << namaBarang << endl;
                    cout << "Jumlah Barang \t\t: " << jumlahBarang << endl;
                    cout << "Harga Per Barang \t: Rp. " << hargaPerBarang << endl;
                    cout << "Diskon \t\t\t: Rp. " << diskonBarang << endl;
                    cout << "Total Harga \t\t: Rp. " << totalHargaBarang << endl
                         << endl;
                    cout << "Terima Kasih" << endl;
                    cout << setw(60) << setfill('=') << "" << endl;
                }
                else
                {
                    printf("Jumlah barang minimal 1");
                }
                        }

            // jika salah input nama barang
            else
            {
                cout << "Barang Tidak Tersedia !!" << endl;
            }
            break;

        case 2:
            system("cls");
            // menampilkan menu ke 2 yaitu daftar barang
            cout << setw(60) << setfill('=') << "" << endl;
            cout << "Daftar Barang : " << endl;
            cout << setw(60) << setfill('=') << "" << endl;

            cout << "1. Kue \t\tharga = Rp. 5000 / potong " << endl;
            cout << "2. Gula \tharga = Rp. 12000 / kg " << endl;
            cout << "3. Beras \tharga = Rp. 10000 / kg " << endl;
            cout << "4. Kopi \tharga = Rp. 5000 / kemasan " << endl;
            cout << "5. Teh \t\tharga = Rp. 5000 / Kemasan " << endl;
            cout << setw(60) << setfill('=') << "" << endl;

            break;
        case 0:
            cout << "Sampai Jumpa " << username << endl;
            break;
        default: // jika salah pilih menu
            cout << "Kamu Salah Pilih Menu" << endl;
            break;
        }
    }
    // jika username benar , password salah
    else if (username == isiUsername && password != isiPassword) //
    {
        cout << "password salah !" << endl;
    }
    // jika username benar , password salah
    else if (password == isiPassword && username != isiUsername)
    {
        cout << "username salah !" << endl;
    }
    // jika keduanya salah
    else
    {
        cout << "username dan password salah !" << endl;
    }

    return 0;
}