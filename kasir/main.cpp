#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float hargab1;
    float hargab2;
    float hargab3;
 	float hargab4;
    float hargab5;
    float totalHarga;
    float uangDibayarkan;
    float kembalian;
    float discount;
    string nama;
    
   	cout << fixed << setprecision(2);

	cout << "masukan nama anda ";
    getline(cin, nama);
	cout << "halo pak/bu "<<nama<<endl;
	
    cout << "Masukkan harga barang 1: ";
    cin >> hargab1;
    cout << "harga barang 1 = " << hargab1 << endl;
    
    cout << "Masukkan harga barang 2: ";
    cin >> hargab2;
	cout << "harga barang 2 = " << hargab2 << endl;
	
    cout << "Masukkan harga barang 3: ";
    cin >> hargab3;
    cout << "harga barang 3 = " << hargab3 << endl;
    
    cout << "Masukkan harga barang 4: ";
    cin >> hargab4;
    cout << "harga barang 4 = " << hargab4 << endl;
        
    cout << "Masukkan harga barang 5: ";
    cin >> hargab5;
    cout << "harga barang 5 = " << hargab5 << endl;

    totalHarga = hargab1 + hargab2 + hargab3 + hargab4 + hargab5;

    
    if (totalHarga> 500000) {
	discount = totalHarga * 0.1
	;}
	cout << "selamat anda mendapat discount sebesar Rp." <<discount<< endl;
    
	totalHarga = totalHarga - discount;
	
	
	cout << "total harga barang anda adalah : Rp. " << totalHarga << endl;
	
    cout << "Masukkan uang yang dibayarkan: ";
    cin >> uangDibayarkan;

    kembalian = uangDibayarkan - totalHarga;

    if (kembalian < 0) {
        cout << "Uang tidak cukup! Anda kekurangan: Rp " << -kembalian << endl;
    } else {
        cout << "Kembalian Anda: Rp " << kembalian << endl;
    }

    return 0;
}
