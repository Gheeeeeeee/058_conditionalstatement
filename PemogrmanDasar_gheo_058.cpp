#include <iostream>
using namespace std;

int main(){
   
   int nBilangan;
   string status;

   srand(time(0));
   nBilangan = rand() % 10;
cout << "Bilangan awalnya adalah = " << nBilangan << endl;

if(nBilangan % 2 == 0 ){
    status= "genap";
    }
else{
    status = "ganjil";
}
cout << " nilai akhirnya = " <<status<<endl;
}