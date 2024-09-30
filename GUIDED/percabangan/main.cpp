#include <iostream>

using namespace std;

int main()
{
 int tv;
    cout << "Daftar channel tv" << endl;
    cout << "1. RCTI" << endl;
    cout << "2. Indosiar" << endl;

    cout << "Masukkan channel pilihan: ";
    cin >> tv;

    switch(tv){
    case 1 :
        cout << "Channel yg anda pilih rcti" << endl;
        break;
    case 2 :
        cout << "Channel yg anda pilih indosiar" << endl;
        break;
    default:
        cout << "Channel tidak tersedia" << endl;

    }
}
