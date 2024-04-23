#include <iostream>;
using namespace std;

class bangunDatar{
    //akses modifer
    private:
        float panjang, lebar;
    public:
        float Luas;

        void input() { // membuat methode input persegi panjang
            cout << "Panjangnya = ";
            cin >> panjang;
            cout << "Masukan Lebarnya = ";
            cin >> lebar;
        }
};