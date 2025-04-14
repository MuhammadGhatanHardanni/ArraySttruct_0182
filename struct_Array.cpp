#include <iostream>
using namespace std;

struct Hero{
    string Nama;
    string role;
    string tipe;

};

int main()
{
    Hero archero[3];

    for (int i = 0; i < 3; i++){
    cout << "Hero ke-" << i+1 << endl;
    cout << "Masukkan nama hero = ";
    cin >> archero[i].Nama;
    cout << "Masukkan jenis role = ";
    cin >> archero[i].role;
    cout << "Masukkan tipe hero = ";
    cin >> archero[i].tipe;
}

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++){
    cout << "Hero ke-" << i+1 << endl;
    cout << "Nama Hero = " << archero[i].Nama << endl;
    cout << "jenis Role Hero = " << archero[i].role << endl;
    cout << "jenis Tipe Hero = " << archero[i].tipe << endl;
}

}
