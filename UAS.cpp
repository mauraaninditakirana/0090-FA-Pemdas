/**
 * @mainpage Cek Kelulusan Dengan 4 perhitungan Nilai 
 * 
 * @section author_sec Tentang Saya
 * Ini adalah hasil Code untuk UAS Maura Anindita kirana NIM 20230140090 
 * 
 * @section note_sec Struktur Program
 * code ini memiliki 3 class utama
 * -Sebuah Class Dasar MataKuliah
 * -class turunan Pemrograman
 * -dan class turunan jaringan
 * 
 * @file UAS.cpp
 * @brief 
 * @date 2024-06-24
 */
#include <iostream>
#include <string>
using namespace std;
/**
 * @brief initial class Matakuliah
 * 
 */
class MataKuliah{
private: // isi dengan access modifier yang dibutuhkan
/**
 * @brief konstruktor class matakuliah 
 * @param presensi, activity, exercise, tugasAkhir;
 */
 float presensi, activity, exercise, tugasAkhir;
 // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
/**
 * @brief Construct a new Mata Kuliah object
 * @param namaMataKuliah nama matakuliah yang dibuat 
 */
MataKuliah()
{
 presensi = 0.0;
 activity = 0.0;
 exercise = 0.0;
 tugasAkhir = 0.0;
 // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
}
virtual string namaMataKuliah() { return; }
virtual void inputNilai() {return;}
virtual float hitungNilaiakhir() {return;}
virtual void cekKelulusan() {return;}
// tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
void setPresensi(float nilaiPresensi)
{
 this->presensi = nilaiPresensi;
}
float getPresensi()
{
    return presensi;
}
void setactivity(float nilaiAct)
{
    this->activity = nilaiAct;
}
float getactivity()
{
    return activity;
}
void setexercise(float nilaiExc)
{
    this->exercise = nilaiExc;
}
float getexercise()
{
    return exercise;
}
void settugasAkhir(float nilaiTgs)
{
    this-> tugasAkhir = nilaiTgs;
}
float gettugasAkhir()
{
    return tugasAkhir;
}};
// tambahkan setter dan getter lain yang dibutuhkan dibawah ini

/**
 * @brief initial class pemrograman dari turunan class matakuliah
 * 
 */
class Pemrograman : public MataKuliah{
public:
    /**
     * @brief konstruktor matakuliah pemrograman
     * @param matakuliah pemrograman
     * @return string 
     */
    string namaMataKuliah() {
        return "Pemrograman";
    }
     void inputnilai(){
        cout << "Nilai presensi: ";
        float nilaipresensi;
        cin >> nilaipresensi;
        setPresensi(nilaipresensi);

        cout << "Nilai Activity: ";
        float nilaiAct;
        cin >> nilaiAct;
        setactivity(nilaiAct);

        cout << "Nilai Exercise: ";
        float nilaiExc;
        cin >> nilaiExc;
        setexercise(nilaiExc);

        cout << "Nilai Tugas Akhir: ";
        float nilaiTgs;
        cin >> nilaiTgs;
        settugasAkhir(nilaiTgs); 
}
    float hitungNilaiakhir(){
        return (getPresensi() * 0.2) + (getactivity() * 0.2) + (getexercise() * 0.2) + (gettugasAkhir() * 0.2);
    }
    void cekKelulusan(){
        float nilaiAkhir = hitungNilaiakhir();
        cout << "Nilai Akhir: " << nilaiAkhir << endl;
        
        if (nilaiAkhir >= 75) {
            cout << "LULUS" << nilaiAkhir << endl;
        }else {
            cout << "TIDAK LULUS" << endl;
        }
    }
    };
// isi disini untuk mengisi kelas pemrograman

/**
 * @brief initial class Jaringan dari turunan class matakuliah
 * 
 */
class Jaringan : public MataKuliah
{
    /**
     * @brief konstruktor matakuliah jaringan 
     * @param matakuliahJaringan
     */
public: 
    string namaMataKuliah() {
        return "Jaringan";
    }
    void inputnilai(){
        cout << "Nilai presensi: ";
        float nilaipresensi;
        cin >> nilaipresensi;
        setPresensi(nilaipresensi);

        cout << "Nilai Activity: ";
        float nilaiAct;
        cin >> nilaiAct;
        setactivity(nilaiAct);

        cout << "Nilai Exercise: ";
        float nilaiExc;
        cin >> nilaiExc;
        setexercise(nilaiExc);

        cout << "Nilai Tugas Akhir: ";
        float nilaiTgs;
        cin >> nilaiTgs;
        settugasAkhir(nilaiTgs);
    }
    float hitungNilaiakhir(){
        return (getPresensi() * 0.2) + (getactivity() * 0.2) + (getexercise() * 0.2) + (gettugasAkhir() * 0.2);
    }
    void cekKelulusan(){
        float nilaiAkhir = hitungNilaiakhir();
        cout << "Nilai Akhir: " << nilaiAkhir << endl;
        
        if (nilaiAkhir >= 75) {
            cout << "LULUS" << nilaiAkhir << endl;
        }else {
            cout << "TIDAK LULUS" << endl;
        }
    }
    };
 // isi disini untuk mengisi kelas jaringan
int main()
{char pilih;
 MataKuliah *mataKuliah;
 Pemrograman pemrograman;
 Jaringan jaringan;
 //menu
 cout << "Pilihan MataKuliah" << endl;
 cout << "1. Pemrograman" << endl;
 cout << "2. Jaringan" << endl;
 cout << "3. Keluar" << endl;
 cout << "Pilih: " << endl;
 cin >> pilih;

switch (pilih){
  case '1':  
  mataKuliah = &pemrograman;
  cout << "Mata kuliah " << mataKuliah->namaMataKuliah() << endl;
  mataKuliah->inputNilai();
  mataKuliah-> cekKelulusan();
  break;

  case '2':
  mataKuliah = &jaringan;
  cout << "Mata Kuliah" << mataKuliah->namaMataKuliah() << endl;
  mataKuliah->inputNilai();
  mataKuliah->cekKelulusan();
  break;

  case '3':
  cout << "Keluar" << endl; 
  return 0;
  }
 // isi disini untuk menentukan mata kuliah yang dipilih
}