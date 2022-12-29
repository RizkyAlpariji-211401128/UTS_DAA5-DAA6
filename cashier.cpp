#include <iostream>
using namespace std;

int main(){
	int x,produk=15000,jumlah,total,bayar,tunai,sisa,diskon;
	string barang;
	
	cout<<"Toko Gula sejahtera"<<endl;
	cout<<"------------------"<<endl;
	cout<<endl;
	
	cout<<"Nama Kasir:";cin>>barang;
	cout<<"Jumlah KG Gula:";
	cin>>x;
	jumlah=x*produk;
	cout<<"Total harga : Rp."<<jumlah<<endl;
	cout<<endl;
	
	bayar=jumlah;
	cout<<endl;
	cout<<"--------------"<<endl;
	cout<<"total harga : Rp."<<bayar<<endl;
	
	if(jumlah>100000)
	{
		diskon=0.10*jumlah;
		cout<<"diskon sebesar : Rp."<<diskon<<endl;
		total=jumlah-diskon;
		cout<<"total : Rp."<<total<<endl;
	}
	else
	if(jumlah<100000)
	{
		diskon=0.10*jumlah;
		cout<<"diskon sebesar : Rp."<<diskon<<endl;
		total=jumlah;
		cout<<"total : Rp."<<total<<endl;
	}
	
	
	cout<<"----------------"<<endl;
	cout<<"uang tunai : Rp.";
	cin>>tunai;
	sisa=tunai-total;
	cout<<"kembalian : Rp."<<sisa<<endl;
	cout<<endl;
}
