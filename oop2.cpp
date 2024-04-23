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

        float hitungLuas() {
            return panjang * lebar;
        }

        void display() {
            cout << "panjangnya = " << panjang << endl;
            cout << "lebarnya = " << lebar << endl;
            cout << "Luasnya = " << hitungLuas() << endl;
        }
};

int main() {
    bangunDatar pp; // deklarasi objek pp dari class bangunDatar
    pp.input();
    pp.display();

    return 0;
}