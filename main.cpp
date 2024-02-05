#include <iostream>//menginclude library iostream
#include <limits>//menginclude library limits

using namespace std;//menggunakan namespace std atau standar penulisan untuk menghindari penulisan std secara berulang ulang

// Deklarasi fungsi untuk melakukan operasi matematika
int operasiMatematika(int bilangan1, int bilangan2, int operasi) {
    switch (operasi) {//melakukan proses pengecekan dari variable operasi
        case 1:
            return bilangan1 + bilangan2;//mengembalikan nilai 2 bilangan yang sudah dilakukan proses penjumlahan
        case 2:
            return bilangan1 - bilangan2;//mengembalikan nilai 2 bilangan yang sudah dilakukan proses pengurangan
        case 3:
            return bilangan1 * bilangan2;//mengembalikan nilai 2 bilangan yang sudah dilakukan proses perkalian
        default:
            return 0; //mengembalikan nilai 0 jika operasi tidak valid/sesuai ( selain 1,2 dan 3 )
    }
}

int main()//fungsi utama
{
    //Deklarasi Variable
    int bilangan1, bilangan2, pilihan, hasil;//deklarasi variable bilangan1, bilangan2, pilihan dan hasil dengan tipe data nya integer
    bool pilihanValid = false;//deklarasi variable pilihanValid yang di beri nilai false dengan tipe data nya yaitu boolean
    string pilihanText, pilihanOperator;//delkarasi variable pilihanText dan pilihanOperator dengan tipe data string
    string messageErrorInputBilangan = "Input harus berupa bilangan. Silahkan coba kembali";//deklarasi variable messageErrorInputBilangan dengan tipe data string

    while(true) {//melakukan proses loop
        cout << "Masukkan Bilangan 1 : ";//menampilkan text Masukkan Bilangan 1
        cin >> bilangan1;//mengassign / set / menyimpan data yang diinputkan ke variable bilangan1

        if(cin.fail()) {//mengecek apakah nilai yang diinput sesuai dengan variable yang telah didefinisikan sebelumnya
            cin.clear();// Menghapus status kesalahan input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');// Membersihkan buffer / input yang telah dimasukkan sebelumnya
            cout << messageErrorInputBilangan;//menampilkan text Input harus berupa bilangan. Silahkan coba kembali yang diambil dari variable messageErrorInputBilangan
            cout << endl;//menampilkan/mencetak/menambahkan baris baru
        } else {
            break;//mengeluarkan/menghentikan dari proses loop
        }
    }

    while(true) {//melakukan proses loop
        cout << "Masukkan Bilangan 2 : ";//menampilkan text Masukkan Bilangan 2
        cin >> bilangan2;//mengassign / set / menyimpan data yang diinputkan ke variable bilangan2
        if(cin.fail()) {//mengecek apakah nilai yang diinput sesuai dengan variable yang telah didefinisikan sebelumnya
            cin.clear();// Menghapus status kesalahan input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');// Membersihkan buffer / input yang telah dimasukkan sebelumnya
            cout << messageErrorInputBilangan;//menampilkan text Input harus berupa bilangan. Silahkan coba kembali yang diambil dari variable messageErrorInputBilangan
            cout << endl;//menampilkan/mencetak/menambahkan baris baru
        } else {
            cout << endl;//menampilkan/mencetak/menambahkan baris baru
            break;//mengeluarkan/menghentikan dari proses loop
        }
    }

    cout << "Bilangan 1 : " << bilangan1 << endl;//menampilkan text Bilangan 1 : dan juga menampilkan bilangan yang sudah diinputkan dalam variable bilangan1
    cout << "Bilangan 2 : " << bilangan2 << endl;//menampilkan text Bilangan 2 : dan juga menampilkan bilangan yang sudah diinputkan dalam variable bilangan2
    cout << endl;//menampilkan/mencetak/menambahkan baris baru

    // Menggunakan while untuk memastikan input pilihan berada dalam rentang yang diharapkan
    while (!pilihanValid) {//melakukan proses loop selama variable pilihanValid bernilai true

        while(true) {//melakukan proses loop
            cout << "(Pilihan: 1 = Tambah, 2 = Kurang, 3 = Kali)" << endl;//menampilkan text (Pilihan: 1 = Tambah, 2 = Kurang, 3 = Kali) dan juga menambahkan baris baru
            cout << "Masukkan Pilihan: ";//menampilkan text Masukkan Pilihan :
            cin >> pilihan;//mengassign / set / menyimpan data yang diinputkan ke variable pilihan
            cout << endl;//menampilkan/mencetak/menambahkan baris baru

            if(cin.fail()) {//mengecek apakah nilai yang diinput sesuai dengan variable yang telah didefinisikan sebelumnya
                cin.clear();// Menghapus status kesalahan input
                cin.ignore(numeric_limits<streamsize>::max(), '\n');// Membersihkan buffer / input yang telah dimasukkan sebelumnya
                cout << messageErrorInputBilangan;//menampilkan text Input harus berupa bilangan. Silahkan coba kembali yang diambil dari variable messageErrorInputBilangan
                cout << endl << endl;//menampilkan/mencetak/menambahkan baris baru
            } else {
                cout << endl;//menampilkan/mencetak/menambahkan baris baru
                break;//mengeluarkan/menghentikan dari proses loop
            }
        }

        //pengecekan variable pilihan dan pemberian nilai pada variable pilihanText dan pilihanOperator sesuai dengan nilai pada variable pilihan yang telah diinputkan sebelumnya
        if(pilihan == 1) {
            pilihanText = " ( Tambah / Penjumlahan ) ";//mengassign/set variable pilihanText dengan value ( Tambah )
            pilihanOperator = " + ";//mengassign/set variable pilihanOperator dengan value +
        } else if(pilihan == 2) {
            pilihanText = " ( Kurang / Pengurangan ) ";//mengassign/set variable pilihanText dengan value ( Kurang )
            pilihanOperator = " - ";//mengassign/set variable pilihanOperator dengan value -
        } else if(pilihan == 3) {
            pilihanText = " ( Kali / Perkalian ) ";//mengassign/set variable pilihanText dengan value ( Kali )
            pilihanOperator = " * ";//mengassign/set variable pilihanOperator dengan value *
        }

        //menampilkan text Pilihan Anda adalah dan juga nilai dari variable pilihan yang sebelumnya diinput dan juga text operator yang sudah diberikan ke variable pilihanText
        cout << "Pilihan Anda adalah " << pilihan << pilihanText << endl;
        cout << endl;//menampilkan/mencetak/menambahkan baris baru

        //melakukan proses pengecekan nilai dari variable pilihan yang sudah diinputkan sebelumnya
        //jika pilihan itu lebih dari sama dengan 1 dan juga kurang dari sama dengan 3
        if (pilihan >= 1 && pilihan <= 3) {
            cout << "Proses perhitungan dari " << bilangan1 << pilihanOperator << bilangan2;//menampilkan text Proses perhitungan dari bilangan1 operator nya dan bilangan2
            cout << endl;//menampilkan/mencetak/menambahkan baris baru
            //menampilkan text Hasilnya adalah :
            //dan juga menampilkan nilai yang sudah di lakukan proses menggunakan fungsi operasiMatematika sesuai dengan pilihan operator yang dipilih sebelumnya
            cout << "Hasilnya adalah: " << operasiMatematika(bilangan1, bilangan2, pilihan) << endl;
            pilihanValid = true;//mengassign/set/memberikan nilai variable pilihanValid menjadi true
        } else {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl << endl;//menampilkan text Pilihan tidak valid. Silahkan coba lagi. dan juga menambahkan baris baru
        }
    }

    return 0;//mengakhiri program
}
