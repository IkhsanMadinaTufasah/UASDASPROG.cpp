 #include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
char nama[30],jenis_motor[30], grade;
int keaslian_ide, desain, kerapihan, suara_mesin, kelistrikan, nkeaslian, ndesain, nkerapihan, NA,
nsuaramesin, nkelistrikan;
cout<<endl<<endl;
cout<<"PENGHITUNG NILAIKONTES MOTOR"<<endl<<endl;
cout<<"Nama Peserta : "; gets (nama);
cout<<"Jenis Motor : "; gets(jenis_motor);
cout<<"Masukkan Nilai Keaslian IDE : "; cin>>keaslian_ide;
cout<<"Masukkan Nilai Desain : "; cin>>desain;
cout<<"Masukkan Nilai Kerapihan : "; cin>>kerapihan;
cout<<"Masukkan Nilai Suara mesin : "; cin>>suara_mesin;
cout<<"Masukkan Nilai Kelistrikan : "; cin>>kelistrikan;
nkeaslian = keaslian_ide*30/100;
ndesain = desain*30/100;
nkelistrikan = kelistrikan*10/100;
nkerapihan = kerapihan*10/100;
nsuaramesin = suara_mesin*20/100;
NA = nkeaslian+ndesain+nkerapihan+nsuaramesin+nkelistrikan;
if(NA>=80)
{ grade = 'A';}
else if (NA<=70)
{grade = 'B' ;}
else if (NA>=60)
{grade = 'C';}
else if (NA<=50)
{grade = 'D';}
else {grade = 'E';}
system("cls");
cout<<endl<<endl;
cout<<"HASIL DAN NILAI"<<endl<<endl;
cout<<"Nama Peserta "<<jenis_motor<<","<<endl;
cout<<"Jenis Motor "<<nama<<" dengan nilai yang telah dihasilkan : "<<endl;
cout<<"keaslian IDE * 30% = "<<nkeaslian<<endl;
cout<<"Nilai Desain * 30% = "<< ndesain<<endl;
cout<<"Nilai Kerapihan * 10% = "<<nkelistrikan<<endl;
cout<<"Nilai kerapihan * 10% = "<<nkerapihan<<endl;
cout<<"Nilai Suara mesin * 20% = "<<nsuaramesin<<endl;
cout<<endl<<endl;
cout<<"Peserta Kontes yang bernama "<<nama<<" Mendapatkan nilai akhir "<<NA<<endl<<endl;
cout<<"Grade yang didapat adalah "<<grade<<endl;
}
