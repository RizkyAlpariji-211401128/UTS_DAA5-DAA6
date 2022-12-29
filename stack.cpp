#include <iostream>
#include <conio.h>
#define max 10
using namespace std;

struct tumpukan  //struktur tumpukan
{
 int atas;  
 int data[max]; 
}T;

void awal()  //awal untuk menentukan nilai awal 
{
 T.atas =- 1;
}

int kosong()  //kosong untuk melanjutkan pengisian tumpukan
{
 if (T.atas == -1)
 return 1;
 else
  return 0;
}

int penuh()  //penuh untuk memberhentikan tumpukan
{
 if (T.atas == max-1)
 return 1;
 else 
  return 0;
}

void input (int data)  //input untuk memasukan data
{
 if (kosong () == 1)  //pemilihan jika data masih kosong
 {
  T.atas++;
   T.data [T.atas] = data;
   cout << "Data " << T.data[T.atas] <<" masuk ke stack\n";
 }
 else 
  if (penuh () == 0)  //pemilihan jika data masih penuh
  {
   T.atas++;
    T.data [T.atas] = data;
    cout << "Data " << T.data [T.atas] << " masuk ke stack\n";
  }
}

void hapus()  //hapus untuk menghapus data paling atas
{
 if (kosong() == 0)  //mengambil data paling atas
 {
  cout << "Data teratas sudah terambil\n";
  T.atas--;
 }
 else  //menampilkan jika data kosong
  cout << "Data kosong\n";
}

void tampil()  //parameter menampilkan isi data
{
 if (kosong() == 0)  //pemilihan menampilkan isi data
 {
  for (int i = T.atas; i >= 0; i--)
  {
   cout << "\nTumpukan ke "<< i + 1 << "=" << T.data[i]; 
  }
   
 }
  else  //jika salah maka menampilkan tumpukan kosong
   cout << "Tumpukan kosong\n";
}

void bersih()  //parameter memebersihkan semua data
{
 T.atas =- 1;
 cout << "Tumpukan kosong!\n";
}

main(void)
{
 int pil, data;
 awal();
 do  //perulangan do - while
 {
  cout << "\n1. Input\n2. Hapus\n3. Tampil\n4. Bersihkan\n5. Keluar\nMasukan pilihan : ";
  cin >> pil;
  
  switch (pil)  //pemilihan perintah
  {
   case 1: 
    cout << "Masukan data = ";  cin >> data;
    input (data);
   break; 
   
   case 2:
    hapus();
   break;
   
   case 3:
    tampil();
   break;
   
   case 4:
    bersih();
   break;
   
   case 5: 
    cout << "Terimakasih, tekan enter untuk keluar";       
  }
 getch();
 }
 while (pil != 5);
 
}
