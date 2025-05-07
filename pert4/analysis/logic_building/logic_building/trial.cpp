#include <iostream>
using namespace std;

void tambah(int a, int b){
    cout << "Hasil tambah: " << a + b << endl;
}

void kurang(int a, int b){
    cout << "Hasil kurang: " << a - b << endl;
}

void kali(int a, int b){
    cout << "Hasil kali: " << a * b << endl;
}

void bagi(int a, int b){
    if(b != 0){
        cout << "Hasil bagi: " << a / b << endl;
    } else {
        cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
    }
}

int main(){
    int x, y;
    cout << "Masukkan dua angka (pisahkan dengan spasi): ";
    cin >> x >> y;

    tambah(x, y);
    kurang(x, y);
    kali(x, y);
    bagi(x, y);

    return 0;
}