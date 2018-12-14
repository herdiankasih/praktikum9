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
