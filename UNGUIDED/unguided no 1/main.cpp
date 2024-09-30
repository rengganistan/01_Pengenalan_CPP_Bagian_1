#include <iostream>

using namespace std;

int main(){
    float bil1 , bil2;
    cout << "Masukan bil1: ";
    cin >> bil1;
    cout << "Masukan bil2: ";
    cin >> bil2;

   float penjumlahan = bil1 + bil2;
    cout << "penjumlahan: " << penjumlahan << endl;
   float pengurangan = bil1 - bil2;
    cout << "Pengurangan: " << pengurangan << endl;
   float perkalian = bil1 * bil2;
    cout << "perkalian: " << perkalian << endl;
   float  pembagian = bil1 / bil2;
    cout << "pembagian: " << pembagian << endl;

    return 0;
}
