#include <iostream>
#include <string>
using namespace std;
//isi disini

const int MAX_MAHASISWA = 100;
struct Mahasiswa {
	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];
	int jumlahMahasiswa = 0;
	Mahasiswa* next;
};
Mahasiswa* START = NULL;
	//isi disini
	void tambahMahasiswa() {
		int nim;
		string nama;
		Mahasiswa* nodeBaru = new Mahasiswa();

		cout << "Masukkan NIM: ";
		cin >> nim;
		cout << "Masukkan Nama: ";
		cin >> nama;
		nodeBaru->NIM = nim;
		nodeBaru->nama = nama;

		if (START == NULL ||  nim <= START->NIM) {
			if (START != NULL && nim == START->NIM)
			{
				cout << "NIM sudah ada" << endl;
				return;
			}

			nodeBaru->next = START;
			START = nodeBaru;
			return;
		}
		Mahasiswa* previous = START;
		Mahasiswa* current = START;
	}
	//isi disini
	void tampilkanSemuaMahasiswa() {

	}
	//isi disini
	void algorithmacariMahasiswaByNIM() {

	}
	//isi disini
	void algorithmaSortByTahunMasuk() {

	}

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



/*
2. Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan ? (10 Poin)
3. Jelaskan perbedaan mendasar antara algorithma stack dan queue!(15 Poin)
4. Jelaskan pada saat bagaimana harus menggunakan algorithma stack ? (15 poin)
5. Perhatikan gambar berikut : (20 Poin)
	a.Seberapa banyak kedalaman yang dimiliki struktur tersebut?
	b.Bagaimana cara membaca struktur pohon di atas ? (Pilih salah satu metode yaitu
	Inorder, Preorder atau Postorder Traversal)
JAWABAN
2. singlelinkedlist
3. stack tumpukan data yang terkahir masuk akan pertama keluar, 
   sedangkan queue adalah antrian data yang pertama masuk akan keluar pertama.
4. pada saat memanggil fungsi, membuat fungsi UNDO dalam aplikasi
5. a. 5
   b. preorder traversal
*/