# praktikum9

Latihan1 Menentukan nilai maksimum dan minimum menggunakan array

=>> Alur algoritma :

````
1.mulai program 
2.int proses(int n,int max,int min,int jumlah);
3.if(n==0){
   cout<<endl;
   cout<<" NILAI MAKSIMUM       : "<<max<<endl;
   cout<<" NILAI MINIMUM        : "<<min<<endl;
   cout<<" JUMLAH SELURUH DERET : "<<jumlah<<endl<<endl;
   return 0;
  }

4.else{
   cout<<" Masukkan Bilangan : ";cin>>x;
      jumlah+=x;

   if(x<min)
   {
      min=x;
   }

   if(x>max)
   {
      max=x;
   }
5.return proses(n-1,max,min,jumlah);
6.selesai.
````

=>> Kode C++ program :

````
#include <iostream>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

class maxmin
  {
   public:
          maxmin();
          int proses(int n,int max,int min,int jumlah);
   private:
          int n, max, min, jumlah, x;
  };

maxmin::maxmin()
{
  cout<<"\tMenampilkan Maximum, Minimum, dan Jumlah Sejumlah n Bilangan "<<endl;
  cout<<endl;
}

int maxmin::proses(int n, int max, int min, int jumlah)
{
if(n==0){
   cout<<endl;
   cout<<" NILAI MAKSIMUM       : "<<max<<endl;
   cout<<" NILAI MINIMUM        : "<<min<<endl;
   cout<<" JUMLAH SELURUH DERET : "<<jumlah<<endl<<endl;
   return 0;
  }

else{
   cout<<" Masukkan Bilangan : ";cin>>x;
      jumlah+=x;

   if(x<min)
   {
      min=x;
   }

   if(x>max)
   {
      max=x;
   }
    return proses(n-1,max,min,jumlah);
 }
}

int main(int argc, char *argv[]){
    maxmin x;
    x.proses(5,1,1,0);

    system("PAUSE");

    return EXIT_SUCCESS;
}
````

=>> Flowchart latihan1

![flowchartlat1](https://user-images.githubusercontent.com/43899109/50014126-a11e7b80-fff5-11e8-89bf-8d7d4bd356a2.jpg)


=>> Hasil screenshot program

![sslatihan1](https://user-images.githubusercontent.com/43899109/50014151-b2678800-fff5-11e8-925b-cf5378008724.png)


Latihan2 Menentukan modus dari besar data 1 sampai 10

=>> Alur algoritma

````
1.mulai program 
2.mencari modus dari data 1 sampai 10
3.masukan jumlah data = 10
4.masukan nilai-1
5.masukan nilai-2
6.masukan nilai-3
7.masukan nilai-4
8.masukan nilai-5
9.masukan nilai-6
10.masukan nilai-7
11.masukan nilai-8
12.masukan nilai-9
13.masukan nilai-10
14.setiap data di hitung frekuensi kemunculan nya
15.dari frekuensi tersebut dapat di tentukan modus dari data tersebut
16.selesai
````

=>> Kode C++ program :

````
#include <iostream>
#include <math.h>

using namespace std;

class HitungStatistik {
friend ostream& operator<<(ostream&, HitungStatistik&);
friend istream& operator>>(istream&, HitungStatistik&);
public:
HitungStatistik();
void hitung_modus();
private:
void maksimum();
void frekuensi();
int maks, item;
int n;
int A[20];
int f[11];
};

HitungStatistik::HitungStatistik()
{ for (int i=0; i<20; i++) f[i] = 0; }

istream& operator>>(istream& in, HitungStatistik& a) {
cout << "Banyaknya data : ";
cin >> a.n;
for (int i = 0; i < a.n; i++) {
cout << "Data ke- : " << i+1 << " > ";
cin >> a.A[i];
}
return in;
}

void HitungStatistik::maksimum()
{
maks = f[0];
item = 1;
for (int i=0; i<n; i++)
if (f[i] > maks) {
maks = f[i];
item = i;
}
cout << "Modus = " << item;
}

void HitungStatistik::frekuensi()
{
for (int i=1; i<n; i++) ++f[A[i]];
}

void HitungStatistik::hitung_modus() {
cout << "Frekuensi running\n";
frekuensi();
maksimum();
}

ostream& operator<<(ostream& out, HitungStatistik& a) {
cout << "Mulai ...\n";
a.hitung_modus();
cout << "Nilai modus : " << a.item;
return out;
}

main() {
HitungStatistik run;
cin >> run;
cout << run;
return 0;
}
````

=>> Flowchart latihan2


![flowchartlat2](https://user-images.githubusercontent.com/43899109/50014271-125e2e80-fff6-11e8-98b7-dd24f58a4d67.jpg)


=>> Hasil screenshoot program :


![sslatihan2](https://user-images.githubusercontent.com/43899109/50014274-12f6c500-fff6-11e8-8bb7-eb5347a2f40b.png)


Latihan3 Mengalikan 2 buah matriks


=>> Alur algoritma :


````
-Mendefinisikan void baca matriks dengan kode :

void baca_matriks (int mat[10][10], int baris, int kolom)
{
int i,j;
for (i=0; i<baris; i++)
for (j=0; j<kolom; j++)
    { cout << "Data [" << i+1 << "," << j+1 << "] : ";
      cin >> mat[i][j];
    }
}
   
-Mendefinisikan void proses dengan kode :

void proses( int x[10][10],const int matriks1[10][10],const int matriks2[10][10], int baris, int kolom)
{
for(int i=0;i<baris;i++)
for(int j=0;j<kolom;j++)
 {
  x[i][j]=0;
  for(int k=0;k<kolom;k++)
  x[i][j]=x[i][j]+matriks1[i][k]*matriks2[k][j];

 }
}
-Mendefinisikan void cetak matriks dengan kode :

void cetak_matriks (const int A[10][10], int baris, int kolom)
{
int i,j;
for (i=0; i<baris; i++)
 { for (j=0; j<kolom; j++)
 cout << A[i][j]<<" ";
 cout << endl;
 }
}

-Mendefinisikan integer main dan sekaligus proses perhitungan perkalian dua buah matriks dengan kode :

 main()
{
int m, n;
int matriks1[10][10], matriks2[10][10];
int x[10][10];
cout << "Banyak baris : ";
cin >> m;
cout << endl;

cout << "Banyak kolom : ";
cin >> n;
cout << endl;

cout << "===================" << endl;
cout << "|Data matriks ke-1|" << endl;
cout << "===================" << endl;
cout << endl;
baca_matriks(matriks1,m,n);
cetak_matriks(matriks1,m,n);
cout << endl;

cout << "===================" << endl;
cout << "|Data matriks ke-2|" << endl;
cout << "===================" << endl;
cout << endl;
baca_matriks(matriks2,m,n);
cetak_matriks(matriks2,m,n);
proses(x,matriks1,matriks2,m,n);
cout << endl;

cout << "====================" << endl;
cout << "|Hasil Perkalian : |" << endl;
cout << "====================" << endl;
cout << endl;
cetak_matriks(x,m,n);
}

-Tampilkan hasil kelayar 
````

=>> Kode C++ program :

````
#include <iostream>
using namespace std;
void baca_matriks (int mat[10][10], int baris, int kolom)
{ int i,j;
for (i=0; i<baris; i++)
for (j=0; j<kolom; j++)
{ cout << "Data [" << i+1 << "," << j+1 << "] : ";
cin >> mat[i][j];
}
}

void proses( int x[10][10],const int matriks1[10][10],const int matriks2[10][10], int baris, int kolom){
for(int i=0;i<baris;i++)
 for(int j=0;j<kolom;j++)
 {
  x[i][j]=0;
  for(int k=0;k<kolom;k++)
  x[i][j]=x[i][j]+matriks1[i][k]*matriks2[k][j];

}
}
void cetak_matriks (const int A[10][10], int baris, int kolom)
{ int i,j;
for (i=0; i<baris; i++)
{ for (j=0; j<kolom; j++)
cout << A[i][j]<<" ";
cout << endl;
}
}
 main() {
int m, n;
int matriks1[10][10], matriks2[10][10];
int x[10][10];
cout << "Banyak baris : ";
cin >> m;
cout << "Banyak kolom : ";
cin >> n;
cout << "Data matriks ke-1\n";
baca_matriks(matriks1,m,n);
cetak_matriks(matriks1,m,n);
cout << "Data matriks ke-2\n";
baca_matriks(matriks2,m,n);
cetak_matriks(matriks2,m,n);
proses(x,matriks1,matriks2,m,n);
cout << "Hasil Perkalian : \n";
cetak_matriks(x,m,n);
}
````

=>> Flowchart latihan 3 :


![flowchartlat3](https://user-images.githubusercontent.com/43899109/50014427-87c9ff00-fff6-11e8-8501-bb3512f190f5.jpg)


=>> Hasil screenshoot latihan3 :


![sslatihan3](https://user-images.githubusercontent.com/43899109/50014428-88629580-fff6-11e8-8f94-24680c3b6b33.png)


Latihan4 Program untuk menghasilkan suatu transpose suatu matriks


=>> Alur algoritma :


````
-Mendefinisikan int main (int argc, char *argv[]) :
   int a[10][10],m,n,i,j;
   
-Memasukkan jumlah baris dan kolom dengan kode :

cout << "Masukkan Jumlah Baris: ";
cin >> m;
cout << endl;
cout<<"Masukkan Jumlah Kolom: ";
cin >> n;
cout << endl;

-Memasukkan elemen matriks dengan kode :

cout << "=== Elemen Matriks ===" << endl;
cout << endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout << "Masukkan Elemen a: "<<i+1<<j+1<<": ";
cin >> a[i][j];
cout << endl;
}
}

-Memasukkan matriks dengan kode :

cout << "Matriks: " << endl;
cout << endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout << a[i][j] << " ";
}
cout << endl;
}
    
-Memasukkan traspose matriks dengan kode :

cout << "Transpose Matriks: " << endl;
cout << endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout << a[j][i] << " ";
}
cout << endl;
}
-Tampilkan hasil kelayar
````

=>> Kode C++ program :


````
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
int a[10][10],m,n,i,j;
cout<<"Masukkan Jumlah Baris: ";
cin>>m;
cout<<"Masukkan Jumlah kolom: ";
cin>>n;
cout<<endl<<"Elemen matriks: "<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<"masukkan elemen a: "<<i+1<<j+1<<": ";
cin>>a[i][j];
}
}
cout<<endl<<"Matriks: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<" ";
}
cout<<endl<<endl;
}
cout<<endl<<"Transpose Matriks: "<<endl<<endl;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[j][i]<<" ";
}
cout<<endl<<endl;
}
system("PAUSE");
return EXIT_SUCCESS;
}
````

=>> Flowchart latihan4 :


![flowchartlat4](https://user-images.githubusercontent.com/43899109/50014659-1f2f5200-fff7-11e8-84f7-9e04326c2a39.jpg)


=>> Hasil screenshoot program :


![sslatihan4](https://user-images.githubusercontent.com/43899109/50014660-1fc7e880-fff7-11e8-94df-46ebaef66e12.png)

