#include <iostream>
using namespace std;

int main(){

    string status;
    int nbilA, nbilB;
    srand(time(0));

    nbilA = rand () % 10 ;
    nbilB = rand ()  %20 ;

  cout << " tampilkan Bilangan A = " << nbilA << endl; 
  cout << " tampilkan Bilangan B = " << nbilA << endl; 

  if (nbilA == nbilB){
    status = "nilai A sama dengan nilai B";
  }
  else if(nbilA > nbilB){
    status = " nilai A lebih besar dari B";
  }

  else if (nbilA < nbilB){
    status = " nilai B lebih besar dari A";
  }

  return 0;
}