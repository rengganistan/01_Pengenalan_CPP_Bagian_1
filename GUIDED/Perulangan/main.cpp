#include <iostream>

using namespace std;

int main()
{
 int n;
 cout << "Masukan jumlah baris= ";
 cin >> n;

    for (int i = n; i >= 1; i--) {
            for (int j = i; j >= 1; j--) {
    cout << j;
    }

    cout << " * ";

    for(int j =1; j <= i; j++){
    cout << j;
    }
    cout << endl;
    }
    for(int i = 1; i <= n; i++){
    cout << "*";
    }
    cout << endl;
    return 0;
}
