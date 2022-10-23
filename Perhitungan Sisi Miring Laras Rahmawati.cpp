#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
    //Perhitungan sisi miring

    float alas = 15, tinggi = 25;
    float miring;

    cout << "Nilai Alas = " << alas << endl;
    cout << "Nilai tinggi = " << tinggi << endl;

    miring = sqrt ( pow(alas,2) + pow(tinggi,2) );

    cout << "Nilai sisi miring = " << miring << endl;

    return 0;
}
