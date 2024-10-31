#include <iostream>
#include <cmath>
using namespace std;

void hitungEK(int massa,int kecepatan){
  double EK = 0.5*massa*pow(kecepatan,2);
  cout <<"Hasil : " << EK << " Joule ";
}

int main (){
  double massa;
  int kecepatan;
  double berat;
  int total = 0;
  
  cout << "Masukan Berat (g) : ";
  cin >> berat;
  cout << "Masukan Massa ( kg ) : ";
  cin >> massa;
  cout << "Masukan Kecepatan (m/s) : ";
  cin >> kecepatan;
  
  total = massa + berat/1000;
  hitungEK(total,kecepatan);
  return 0;
}