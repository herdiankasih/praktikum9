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
