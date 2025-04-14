#include <iostream>
#include <string>
using namespace std;

struct Skill
{
    string skill1;
    string skill2;
    string skill3;
};

struct Hero{
    string nama;
    string role;
    string tipe;
    Skill Skill;
};

int main(){
    Hero CharHero[3];

    for(int i = 0; i < 3; i++){
    cout << "Hero ke- " << i+1 << endl;
    cout << "Masukkan nama hero = ";
    getline(cin, CharHero[i].nama);
    cout << "Masukkan jenis role = ";
    getline(cin, CharHero[i].role);
    cout << "Masukkan tipe hero = ";
    cin >> CharHero[i].tipe;
    cin.ignore();

    cout << "Masukkan Skill 1";
    getline(cin, CharHero[i].Skill.skill1);
    cout << "Masukkan Skill 2";
    getline(cin, CharHero[i].Skill.skill2);
    cout << "Masukkan Skill 3";
    getline(cin, CharHero[i].Skill.skill3);
    cin.ignore();
    }

    cout << endl;
    cout << "Tampilkan Hero" << endl;
    cout << endl;

    for(int i = 0; i < 3; i++){
    cout << "Hero ke- " << i+1 << endl;
    cout << "Nama hero = " << CharHero[i].nama << endl;
    cout << "Jenis role = " << CharHero[i].role << endl;
    cout << "Tipe hero = " << CharHero[i].tipe << endl;

    cout << "Skill 1 = " << CharHero[i].Skill.skill1 << endl;
    cout << "Skill 2 = " << CharHero[i].Skill.skill2 << endl;
    cout << "Skill 3 = " << CharHero[i].Skill.skill3 << endl;
    }
}