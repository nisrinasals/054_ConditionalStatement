#include <iostream>
using namespace std;

int main(){
    int nBilA, nBilB;
    string status;

    srand(time(0));

    nBilA = rand() %10;
    nBilB = rand() %10;

    cout << "Bilangan A = "<< nBilA << endl;
    cout << "Bilangan B = "<< nBilB << endl;

    if(nBilA == nBilB){
        status = "Nilai A sama dengan nilai B.";
    }

    else if(nBilA > nBilB){
        status = "Nilai A lebih besar dari nilai B.";
    }

    else{
        status = "Nilai B lebih besar dari nilai A.";
    }

    cout << "Hubungan nilai A dan nilai B adalah " << status << endl;

    return 0;
}