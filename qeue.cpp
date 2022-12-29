#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 15

using namespace std;

struct antri_data
{
    int data[MAX];
    int kepala;
    int ekor;
};

antri_data antrian;

void create()
{
    antrian.kepala=antrian.ekor=-1;
}

int isEmpty()
{
    if(antrian.ekor==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(antrian.ekor==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void masuk(int d)
{
     antrian.kepala=0;
     antrian.ekor++;
     antrian.data[antrian.ekor]=d;
     cout<<"data berhasil dimasukan ";
}

void keluar()
{
     int e=antrian.data[antrian.kepala];
     for (int i=antrian.kepala;i<=antrian.ekor-1;i++){
        antrian.data[i]=antrian.data[i+1];
        }
        antrian.ekor--;
        cout<<"data terambil "<<e<<" ";
}

void hapus(){
    antrian.kepala=antrian.ekor=-1;
    cout<<"Data terhapus ";
}
void lihat(){
    for(int i=antrian.kepala;i<=antrian.ekor;i++)
    {
        cout<<antrian.data[i]<<" ";
    }
}

int ascending()
{

}

void printout()
{
    int tampung;
    for(int i=antrian.kepala;i<=antrian.ekor;i++)
    {
        for(int j=antrian.ekor;j>=i;j--)
            if(antrian.data[j]<antrian.data[j-1])
        {
            tampung=antrian.data[j];
            antrian.data[j]=antrian.data[j-1];
            antrian.data[j-1]=tampung;
        }
    }
    for(int i=antrian.ekor;i>=antrian.kepala;i--)
    {
        cout<<antrian.data[i]<<" ";
    }
}

int main()
{
    int a;
    int d;
    create();

    do
    {
        cout<<"\nMenu\n1.enque\n2.deque\n3.clear\n4.print\n5.Ascending \n6.terminate\n\nMasukkan Pilihan Anda = ";
        cin>>a;
        fflush(stdin);
        switch(a)
        {
            case 1:
                cout<<"\n\n1.enque \n";
                if(isFull()==1)
                {
                    cout<<"queue Penuh ! "<<endl;
                }
                else
                {
                    cout<<" Masukkan Data = ";cin>>d;
                }
                    fflush(stdin);
                    masuk(d);
                    break;

            case 2:
                cout<<"\n\n2.dequeue \n";
                if(isEmpty()==1)
                {
                    cout<<"queue Kosong ! ";
                }
                else
                {
                    keluar();
                }
                    break;

            case 3:
                cout<<"\n\n3.Clear \n";
                    hapus();
                    cout<<endl<<"queue Kosong"<<endl;
                    break;

            case 4:
                cout<<"\n\n4.Print data \n";
                if(isEmpty()==1)
                {
                    cout<<"queue Kosong"<<endl;
                }

                else
                {
                    cout<<"Data yang dicetak : ";
                }
                    lihat();
                    break;

            case 5:
                cout<<"Descending data : ";
                printout();
                break;

            case 6:
                cout<<"\ntekan enter untuk mengakhiri";
        }
        getch();
        system("cls");

    }while (a!=6);

    getch();
    return 0;
}
