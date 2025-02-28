#include <iostream>
using namespace std;

void outputGaji(int gajilembur, int gajireguler, int totalGaji){
	cout << "======== Rincian Gaji ========" << endl;
	cout << "Gaji Reguler : Rp. " << gajireguler << endl;
	cout << "Gaji Lembur  : Rp. " << gajilembur << endl;
	cout << "Total Gaji   : Rp. " << totalGaji << endl;
	cout << "==============================" << endl;
}

int main(){
	
	// variabel
	int reguler, lembur, gajireguler, gajilembur, totalGaji, jabatan;
	int manajer = 100000;
	int supervisor = 75000;
	int staff = 50000;
	
	// input user
	cout << "======================================================" << endl;
	cout << " PROGRAM PENGHITUNG GAJI KARYAWAN PT. Cerdas Sejahtera" << endl;
	cout << "======================================================" << endl;
	
	cout << "==============" << endl;
	cout << "1. MANAJER" << endl;
	cout << "2. SUPERVISOR" << endl;
	cout << "3. STAFF" << endl;
	cout << "==============" << endl;
	cout << "Jabatan [1-3] : ";
	cin >> jabatan;
	cout << "Jam Kerja Reguler : ";
	cin >> reguler;
	cout << "Jam Kerja Lembur  : ";
	cin >> lembur;
	
	cout << "\n" << endl;
	
	
	if(jabatan == 1){
		gajireguler = manajer * reguler;
		gajilembur = lembur * (manajer * 1.5);
		totalGaji = gajireguler + gajilembur;
	}else if (jabatan == 2){
		gajireguler = supervisor * reguler;
		gajilembur = lembur * (supervisor * 1.5);
		totalGaji = gajireguler + gajilembur;
	}else if (jabatan == 3){
		gajireguler = staff * reguler;
		gajilembur = lembur * (staff * 1.5);
		totalGaji = gajireguler + gajilembur;
	}else{
		cout << "Pilihan yang anda masukkan sedang tidak tersedia, Terimakasih" << endl;
	}
	
	// Output Gaji
	outputGaji(gajilembur, gajireguler, totalGaji);
	
	return 0;
}
