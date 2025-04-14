#include <iostream>
using namespace std;

struct Hero{
    string Nama;
    string role;
    string tipe;

};

int main()
{
    Hero archero;

    cout << "Masukkan nama hero = ";
    cin >> archero.Nama;
    cout << "Masukkan jenis role = ";
    cin >> archero.role;
    cout << "Masukkan tipe hero = ";
    cin >> archero.tipe;

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    cout << "Nama Hero = " << archero.Nama << endl;
    cout << "jenis Role Hero = " << archero.role << endl;
    cout << "jenis Tipe Hero = " << archero.tipe << endl;

}
