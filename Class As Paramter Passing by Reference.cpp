#include<iostream>
using namespace std;
// call by value.
class rectangle{
public:
    int length;
    int breath;
    char x;
}r;

int area(rectangle r1){
    return r1.length * r1.breath;
}

int main(){
    r={5,10};
    cout << area(r) << "\n";

    return 0;
}