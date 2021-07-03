#include<iostream>
using namespace std;
int add(int a, int b){
    int c;
    a++;
    c = a+b;
    cout << a << "\n";
    return c;
}
int main(){
    int x=5,y=4;
    cout << add(x,y) << "\n";
    cout << x << "\n";

    return 0;
}