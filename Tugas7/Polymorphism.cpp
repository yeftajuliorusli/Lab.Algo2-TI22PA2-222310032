#include <iostream>
using namespace std;

class Mahasiswa {
    public :
    virtual void Data (){
        cout <<"Tidak ada data."<<endl;
    }
};

class Yefta : public Mahasiswa{
    public :
    string status = "Aktif";
    string Nama = "Yefta Julio";
    int Umur = 18;
    string Fakultas = "Pariwisata dan Informatika";
    string Jurusan = "Teknologi Informasi";
    void Data (){
        cout <<"Status = "<<status<<endl;
        cout <<"Nama = "<<Nama<<endl;
        cout <<"Umur = "<<Umur<<endl;
        cout <<"Fakultas = "<<Fakultas<<endl;
        cout <<"Jurusan = "<<Jurusan<<endl;
    }
};

class Sandry : public Mahasiswa{
    public:
    string status = "Aktif";
    string Nama = "Sandry Chandra Putra";
    int Umur = 18;
    string Fakultas ="Pariwisata dan Informatika";
    string Jurusan = "Teknologi Informasi";
     void Data (){
        cout <<"Status = "<<status<<endl;
        cout <<"Nama = "<<Nama<<endl;
        cout <<"Umur = "<<Umur<<endl;
        cout <<"Fakultas = "<<Fakultas<<endl;
        cout <<"Jurusan = "<<Jurusan<<endl;
    }
};

int main (){
    Mahasiswa *s1 = new Yefta();
    Mahasiswa *s2 = new Sandry();

    s1 -> Data();
    cout <<"======================================="<<endl;
    s2 -> Data();

    return 0;
}
