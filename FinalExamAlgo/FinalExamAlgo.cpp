#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();

		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

//isi disini
void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa > 0) {
		cout << "========== DATA MAHASISWA ==========" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM      : " << NIM[i] << endl;
			cout << "Nama     : " << nama[i] << endl;
			cout << "tahun    : " << tahunMasuk[i] << endl;
			cout << "-------------------------------------" << endl;
		}
	}
	else {
		cout << "Tidak ada data mahasiswa." << endl;
	}
};
//isi disini

void algorithmacariMahasiswaByNIM() {
	int CariNIM;
	cout << "========== CARI MAHASISWA ==========" << endl;
	cout << "Masukan NIM : ";
	cin >> CariNIM;
	cin.ignore();

	bool ditemukan = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == CariNIM) {
			cout << "========== CARI MAHASISWA MENGGUNAKAN NIM ==========" << endl;
			cout << "NIM      : " << NIM[i] << endl;
			cout << "Nama     : " << nama[i] << endl;
			cout << "tahun    : " << tahunMasuk[i] << endl;
			cout << "------------------------------------" << endl;
			ditemukan = true;
			break;
		}
	}
	if (ditemukan) {
		cout << "Mahasiswa dengan NIM tersebut tidak ditemukan." << endl;
	}
};
//isi disini

void algorithmaSortByTahunMasuk() {

};

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

// 2. binary seacrh
// 3. Stack menggunakan metode LIFO (Last In First Out) sedangkan,
//	  Queue menggunakan metode FIFO (First In First Out).
// 4. pada saat UNDO dalam aplikasi dan mengevesienkan memory
// 5. a. 16
//	  b. In = salah
//		 Preorder = benar
//		 post = benar