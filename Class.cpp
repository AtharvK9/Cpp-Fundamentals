#include<iostream>
using namespace std;

class rectangle{
public:
    int length;
    int breath;
    char x;
}r1;

int main(){
    cout << sizeof(r1) << endl;
    r1={19,5};
    cout << r1.length << "\n";
    cout << r1.breath << "\n";
    r1.length = 15;
    r1.breath = 3;
    cout << r1.length << "\n";
    cout << r1.breath << "\n";

    return 0;
}