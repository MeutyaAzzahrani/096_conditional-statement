#include <iostream>
using namespace std;

int main(){
    int nNilM, nNilF, nRerata;
    string status;

    cout << "Masukkan Nilai Matematikanya = " << endl;
    cin >> nNilM; 
    cout << "Masukan Nilai Fisikanya = " << endl; 
    cin >> nNilF;

    nRerata = (nNilM + nNilF)/2; 

    if(nRerata > 60 || nNilM > 70){
        status = "Lulus";
    }

    else{
        status = "Tidak lulus";
    }
cout << "tampilkan rerata " << nRerata << endl;
cout << "statusnya adalah " << status << endl; 
return 0;
     
}