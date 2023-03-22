#include <iostream>
using namespace std;

float luaspersegi(float p, float l) {
    return p * l;
}

float luaslingkaran(float r) {
    return 3.14 * r * r;
}

float luassegitiga(float a, float t) {
    return 0, 5 * a * t;
}

int main(){

    float panjang,lebar, tinggi, jejari, alas;
    int pilihan;
  
    do {
    cout << "\n\n================" << endl;
    cout << "======MENU======" << endl;
    cout << "================" << endl;
    cout << "1. Luas Persegi" << endl;
    cout << "2. luas Lingkaran" << endl;
    cout << "3. Luas Segitiga" << endl;
    cout << "4. Exit" << endl;
    cout << "\nMasukan Pilihan (1/2/3/4) : ";

    cin >> pilihan;

    
        switch (pilihan) {
        case 1:
            cout << "Masukan Panjang = ";
            cin >> panjang;
            cout << "Masukan Lebar = ";
            cin >> lebar;
            cout << "\nLuas Persegipanjang = " << luaspersegi(panjang, lebar);
            break;
        case 2:
            cout << "Masukan jari-jari  = ";
            cin >> jejari;
            cout << "\nLuas Lingkaran = " << luaslingkaran(jejari);
            break;
        case 3:
            cout << "Masukan alasnya = ";
            cin >> alas;
            cout << "Masukan tingginya = ";
            cin >> tinggi;
            cout << "\nLuas Segitiga = " << luassegitiga(alas, tinggi);
            break;
        case 4:
            break;
        default:
            cout << "Pilihan salah!";
            break;


        }
    } while (pilihan != 4);
}