#include<iostream>
using namespace std;
// formal parameters x,y gets modified.
void swap(int x ,int y){
    int temp;
    x = temp;
    x = y;
    y = temp;
    cout << x << "\n";
}
// Actual parameters remains same.
int main(){
    int a=10,b=20;
    swap(a,b);
    cout << a << "&" << b << "\n";
    return 0;
}