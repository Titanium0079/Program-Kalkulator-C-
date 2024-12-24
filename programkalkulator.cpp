#include<iostream>
using namespace std;
int main(){
    float hasil;
    int opsi;
    float a, b;
    cout << "====== PROGRAM KALKULATOR ======";
    cout << "\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Keluar"<<endl;
    cout << "Silahkan Pilih Salah Satu: ";
    cin >>  opsi;

    if(opsi == 1){
        cout <<" Input nilai a =  " ;
        cin >> a;
        cout <<" Input nilai b = " ;
        cin >> b;
        hasil = a + b;
        cout << "Hasil Perhitungan adalah = " << hasil ;

    }
     else if(opsi == 2){
            cout <<" Input nilai a = " ;
            cin >> a;
            cout <<" Input nilai b = ";
            cin >> b;
            hasil = a - b;
            cout << "Hasil Pengurangan adalah = " << hasil ;
        }
         else if(opsi == 3){
                cout <<" Input nilai a = ";
                cin >> a;
                cout <<" Input nilai b = ";
                cin >> b;
                hasil = a * b;
                cout << " Hasil Perkalian adalah = " << hasil;
         }
            else if(opsi == 4){
                cout <<" Input nilai a = ";
                cin >> a;
                cout <<" Input nilai b = ";
                cin >> b;
                hasil = a / b;
                cout << "Hasil Pembagian adalah = " << hasil;
            }
                    else if(opsi == 5){
                        cout << " Terimakasih telah menggunakan Program Kalkulator!";
                    }
        else {
            cout << " Opsi Tidak Valid!! " << endl;
        }
    

}