#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama)
    {
        nama = pnama;
            setID();
    }
};
long int mahasiswa::nim = 20230140101;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID =" << id << endl;
}

int main()
{
    
}

