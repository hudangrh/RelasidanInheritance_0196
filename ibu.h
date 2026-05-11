#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu 
{
public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama "\"tidak ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" todak ada\n";
    }
    void tambahAnak(anak* pAnak);
    void cetakAnak();
};
void ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}