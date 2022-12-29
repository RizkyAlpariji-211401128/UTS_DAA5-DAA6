#include <iostream>
using namespace std;

void input (int data[], int b) {
  int k;
  string nama;
  for (k = 0; k < b; k++)
    {
      cout<<"\nMasukkan Nama Mahasiswa = "; cin>>nama;
      cout << "Masukan Nim Mahasiswa ";
      cout << " : ";
      cin >> data[k];
    }
}


int main () {

  int x = 0;
  int i;
  int trb = 0;


  cout << "Masukkan Jumlah Banyaknya Data Mahasiswa :";
  cin >> x;
  int data[x];
  input (data, x);

  int *ptr;
  ptr = data;


    cout << "\n Urutan nim mahasiswa sesuai inputan: ";
    trb = *ptr;
    for (i = 0; i < x; i++) {
    cout << *(ptr + i) << ','; 
    if (trb < *(ptr + i)) {
    trb = *(ptr + i); }
      
    }

    cout << "\n Urutan Nim: "; 
    for (i = 1; i <= x;i++) {
    cout << *(ptr + i) << ',';
    }
  
  return 0;
}
