#include<iostream>
using namespace std;
// call by value.
class rectangle{
public:
    int length;
    int breath;
    char x;
}r;

void changelength(rectangle *p){
    p->length=20;
    cout << p->length << "\n"; 
}

int main(){
    r = {10,6};
    changelength(&r);
    cout << r.length << "\n";

    return 0;
}