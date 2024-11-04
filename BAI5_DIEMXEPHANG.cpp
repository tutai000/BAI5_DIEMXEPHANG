#include <iostream>
using namespace std;
int main() {
    cout << "diem xep hang\N";
    double diem;
    cout << "nhap diem:"; cin >> diem;
    if (diem < 5) {
        cout << "yeu";
    }
    else if (diem <= 6){
        cout << "TB";
   }
    else if (diem < 8) {
        cout << "kha";
    }else {
        cout << "gioi";
    }
    return 0;
}