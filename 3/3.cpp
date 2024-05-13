#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public :
    int nim;
    string nama;

public:
    Mahasiswa()
    {
        nim = 10;
        nama = "";
    }
    Mahasiswa(int iNim)
    {
        nim = iNim;
    }
    Mahasiswa(string iNama)
    {
        nama = iNama;
        nim = 0;
    }
    Mahasiswa(int iNim, string iNama)
    {
        nim = iNim;
            nama = iNama;
    }
    void cetak()
    {
        cout << endl << "Nim =" << nim << endl;
        cout << "Nama =" << nama << endl;
    }
};





int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(9);
    Mahasiswa mhs3("Agung");
    Mahasiswa mhs4(10,"Ucup");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
    return 0;
}


