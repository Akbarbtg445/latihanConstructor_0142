#include <iostream>
using namespace std;

class Barang{
public:
//constructor dengan parameter 

Barang( string namabarang,int kodebarang);
};
// Definisi constructor dengan parameter
Barang::Barang(string namabarang, int kodebarang) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Namabarang: " << namabarang << endl;
    cout << "Kodebarang  : " << kodebarang << endl;
}

int main() {
    // Memanggil constructor dengan parameter
    Barang mhs ("Infinix",8776378);
    return 0;
}
