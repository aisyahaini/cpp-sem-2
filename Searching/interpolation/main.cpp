#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<iomanip>

using namespace std;

main()
{
  //deklarasi variable
  int Nilai[20];
  int i,j,Bilangan,N;
  int temp,awal,akhir,tengah;
  //proses penginputan data
  cout<<"Banyak Data : ";
  cin>>N;
  for(i=0; i<N; i++)
  {
    cout<<"elemen ke-"<<i<<" : ";
    cin>>Nilai[i];
  }

  cout<<"\nData sebelum diurut : ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai[i];

  //proses pengurutan data
  for(i=0; i<N-1; i++)
  {
    for(j=i+1; j<N; j++)
    {
      if (Nilai[i]>Nilai[j])
      {
        temp=Nilai[i];
        Nilai[i]=Nilai[j];
        Nilai[j]=temp;
      }
    }
  }

  cout<<"\nData setelah diurut : ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai[i];

  //Input data yang akan dicari
  cout<<"\nMasukkan data yang akan anda cari : ";
  cin>>Bilangan;

  //proses pencarian data
  akhir = N-1;
  awal = 0;
  do
  {
    tengah = ((Bilangan - Nilai(awal)) / (Nilai(akhir) - Nilai(awal))) * (akhir-awal) + awal;
    if (Nilai(tengah) > Bilangan)
      akhir = tengah-1;
    else if (Nilai(tengah) < Bilangan)
      awal = tengah + 1;
  }
  while(Bilangan>=Nilai(awal))&&(Nilai(tengah)!=Bilangan);
  if (Nilai(tengah) == Bilangan)
    cout<<"\nData "<<Bilangan<<" ada dalam array pada posisi "<<tengah;
  else
    cout<<"\nData "<<Bilangan<<" tidak ada dalam array";
  getch();
}
