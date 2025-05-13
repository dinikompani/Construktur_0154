#include <iostream>
using namespace std;

class buku{
    string judul;

    public:
    buku setjudul(string judul){
        this->judul = judul;
        return *this; //chain fuction

    }
    string getjudul(){
        return this->judul;
    }
};

int main()
{
    buku bukunya;
    cout<<bukunya.setjudul("Matematika").getjudul(); //chain fuction calls
    return 0;
}