#include <iostream>
using namespace std;

int main(){
    float angka1;
    float angka2;
    float hasil = 0;
    int pilih;

    cout << "===== KALKULATOR SEDERHANA =====" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    cout << endl;

    cout << "===== MENU KALKULATOR SEDERHANA =====" << endl;
    cout << "HANYA 2 BILANGAN" << endl;
    cout << "1. Program Penjumlahan\n";
    cout << "2. Program Pengurangan\n";
    cout << "3. Program Perkalian\n";
    cout << "4. Program Pembagian\n";
    cout << "5. Keluar dari program\n";

    cout << "Pilihan Menu: ";
    cin >> pilih;
    if (pilih == 1)
    {   hasil = angka1 + angka2;
        cout << angka1 << " + " << angka2 << " = " << hasil;
    } else if (pilih == 2){
        hasil = angka1 - angka2;
        cout << angka1 << " - " << angka2 << " = " << hasil;
    }else if (pilih == 3){
        hasil = angka1 * angka2;
        cout << angka1 << " * " << angka2 << " = " << hasil;
    }else if (pilih == 4){
        hasil = angka1 / angka2;
        cout << angka1 << " / " << angka2 << " = " << hasil;
    }else if (pilih == 5){
        cout << "Terimakasih telah menggunakan program kalkulator!";
    }else{
        cout << "Program error!" << endl;
    }
}
