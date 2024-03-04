#include <iostream>
using namespace std;

int main (){
    int nMTK, nFISIKA, rerata;
    string cstatus;
    //siswa mempunyai 2 nilai yaitu matematika dan fisika
cout << "masukkan nilai matematika = " << endl;
cin >> nMTK ;
cout << "masukkan nilai fisika = " << endl;
cin >> nFISIKA ;
    //kemudian dihitung reratanya, jika rerata lebih dari 60
    rerata = (nMTK+nFISIKA) /2;
if (rerata > 60 || nMTK > 70){
    cstatus = "lulus";
}
else {
    cstatus = " tidak lulus";
}
cout << " anda dinyatakan =" <<cstatus<< endl;

return 0;
    //maka dinyatakan lulus, atau setidaknya nilai matematika
    //lebih dari 70 dan jika tidak keduanya maka
    ///dinyatakan tidak lulus

}