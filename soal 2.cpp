#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double apple, jeruk, semangka;
    double harple = 24000, haruk = 32500, harka = 8000;
    double totalberat = 0;
    double totalharga = 0;
    double diskon = 0;
    cout << "Masukan Berat Apple (kg) : "; cin >> apple;
    cout << "Masukan Berat Jeruk (kg) : "; cin >> jeruk;
    cout << "Masukan Berat Semangka (kg) : "; cin >> semangka;
    
   totalberat = apple + jeruk + semangka;
   totalharga = (harple*apple) + (haruk*jeruk) + (harka*semangka);
   if ( totalberat >= 10){
   diskon =  0.05;
   }else if (totalberat >= 8){
    diskon = 0.02;
   }else {
   	diskon = 0;}
   
   double totalbayar = totalharga -(totalharga * diskon);
   
   cout << "Total Berat Belanjaan : " << totalberat <<"kg \n";
   cout << fixed << setprecision(2);
   cout << "Total Yang Harus Dibayar : Rp " << totalbayar << "\n";
    return 0;
}