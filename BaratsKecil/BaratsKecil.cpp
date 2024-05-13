#include <iostream> 
#include <string> 
using namespace std;

class mahasiswa 
{
public:
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();
    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};

int mahasiswa::nim = 10;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID =" << id << endl;
    cout << "Nama =" << nama << endl;
    cout << endl;
}
int main()
{
    mahasiswa mhs1("Granger Pranowo");
    mahasiswa mhs2("Alice Baswedan");
    mahasiswa mhs3("Ma'ruf Aamon");
    mahasiswa mhs4("Muhammad Ling");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    return 0;
}


