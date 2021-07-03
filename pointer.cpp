#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p=&a;

    cout << a << "\n";
    cout << p << "\n";
    cout << "using ponter " << *p << "\n";

    //pointer to an array
    int A[5] = {2,4,5,6,7};
    int *o=A;

    for(int i = 0;i<5;i++){
        cout << A[i] << endl;
        cout << o[i] << endl;
    }

    //array created in heap
    int *n=new int [5];
    
    n[0]=1;n[1]=2;n[2]=3;n[3]=4;n[4]=12;
    for(int t = 0; t<5;t++){
        cout << n[t] << endl;
    }
    delete [] n;
    //pointer take 8 bytes irrespective of data varaible
    return 0;
}