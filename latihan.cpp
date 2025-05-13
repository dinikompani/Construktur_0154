#include <iostream>
using namespace std;


class bangunDatar 
{
public:
    int hitungLuas(int panjang, int lebar);
    int hitungKeliling(int panjang, int lebar);

};

class persegiPanjang
{
public:
    int panjang, lebar;

    friend int bangunDatar::hitungLuas(int panjang, int lebar);
    friend int bangunDatar::hitungKeliling(int panjang, int lebar);
};

int bangunDatar::hitungLuas(int l, int p)
{
    return l * p;
}

int bangunDatar::hitungKeliling(int l, int p){
    return (2 * p) + (2 * 1);
}

int main(){
    bangunDatar bD;
    persegiPanjang pP;
    persegiPanjang &refpP = pP;
    refpP.panjang = 10;
    refpP.lebar = 100;
    cout << bD.hitungLuas(refpP.lebar, refpP.panjang);
}

