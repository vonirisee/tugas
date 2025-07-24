#include <iostream>
using namespace std;
int main () {
    int a, b;
    cout << "Masukkan dua bilangan: ";
    
    if (cin >> a >> b) {
        
    switch (a > b) {
     case true:
cout << "Bilangan pertama lebih besar dari bilangan kedua." << endl;
         break;
      case false:
     switch (a < b) {
     case true:
cout << "Bilangan pertama lebih kecil dari bilangan kedua." << endl;
         break;
    case false:
cout << "Kedua bilangan sama." << endl;
        break;
    }
     break;
        }
    } else {
        cout << "Input tidak valid." << endl;    
    }
    
    return 0;
}