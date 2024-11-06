#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float hargab1, hargab2, hargab3, hargab4, hargab5, totalHarga, uangDibayarkan, kembalian, discount;

    string nama;
    
    cout << fixed << setprecision(2);

 
    cout << "Masukkan nama anda: ";
    getline(cin, nama);

	system("CLS");
   
    cout << "Halo pak/bu " << nama << endl;
    
    cout << "Masukkan harga barang 1: ";
    cin >> hargab1;
    cout << "Harga barang 1 = " << hargab1 << endl;

    cout << "Masukkan harga barang 2: ";
    cin >> hargab2;
    cout << "Harga barang 2 = " << hargab2 << endl;

    cout << "Masukkan harga barang 3: ";
    cin >> hargab3;
    cout << "Harga barang 3 = " << hargab3 << endl;

    cout << "Masukkan harga barang 4: ";
    cin >> hargab4;
    cout << "Harga barang 4 = " << hargab4 << endl;

    cout << "Masukkan harga barang 5: ";
    cin >> hargab5;
    cout << "Harga barang 5 = " << hargab5 << endl;

    totalHarga = hargab1 + hargab2 + hargab3 + hargab4 + hargab5;

    if (totalHarga >= 100000) {
        discount = totalHarga * 0.1;
    } else {
        discount = 0;
    }

   
    cout << "Selamat, Anda mendapat discount sebesar Rp. " << discount << endl;

    totalHarga = totalHarga - discount;

   
    cout << "Total harga barang anda adalah: Rp. " << totalHarga << endl;

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

