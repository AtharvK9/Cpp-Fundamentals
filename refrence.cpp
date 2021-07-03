#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;

    cout << a << "\n" << r << "\n";
    
    int b = 25;
    r=b;
    r++;
    cout << a << "\n" << r << "\n";

    return 0;
}