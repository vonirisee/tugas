#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "Masukkan dua bilangan: ";
    
    if (cin >> a >> b) {
        
        if (a > b) {
            cout << "Bilangan pertama lebih besar dari bilangan kedua." << endl;
        } else if (a < b) {
            cout << "Bilangan pertama lebih kecil dari bilangan kedua." << endl;
        } else {
            cout << "Kedua bilangan sama." << endl;
        }
    } else {
        cout << "Input tidak valid." << endl;    
    return 0;
}
    }