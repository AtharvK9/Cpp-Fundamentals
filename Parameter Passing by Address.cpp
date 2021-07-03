#include<iostream>
using namespace std;

void swap(int *x ,int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
//Actual Parameter are changed.
int main(){
    int a, b;
    a = 10;
    b =20;
    swap(&a,&b);
    cout << a << "&" << b << endl;

    return 0;
}