#include <iostream>
#include <string>
#include <math.h>
using namespace std;
    //Menghitung persamaan Y = bx^2 + 0.5x - c
int main (){
    float b = 12, x = 23, c = 22;
    float Y;

    cout << "Nilai b = " << b << endl;
    cout << "Nilai x = " << x << endl;
    cout << "Nilai c = " << c << endl;

    cout << "Selesaikanlah persamaan berikut : Y = bx^2 + 0.5x - c " << endl;
    cout << "Y = 12(23)^2 + 0.5(23) - 22" << endl;
    Y = (b * x * x) + 0.5 * x - c;

    cout << "Hasil dari Nilai Y = " << Y << endl;

    return 0;
}
