#include<iostream>
using namespace std;
class rectangle{
public:
    int length;
    int breath;
}r1,*p;
int main(){
    r1 ={10,5};
    cout << r1.length << "\n";
    cout << r1.breath << "\n";

    rectangle *p=&r1;
    p->breath=12; // Refrence in only in c++
    p->length=13;
    cout << p->length << "\n";
    cout << p->breath << "\n";



    return 0;
}