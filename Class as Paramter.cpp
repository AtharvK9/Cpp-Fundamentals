
#include<iostream>
using namespace std;
// call by value.
class rectangle{
public:
    int length;
    int breath;
}r;

int area(rectangle r1){
    r1.length++;
    return r1.length * r1.breath;
    
}

int main(){
    r={5,10,};
    cout << area(r) << "\n";
    cout << r.length << "\n";

    return 0;
}