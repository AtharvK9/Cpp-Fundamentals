#include<iostream>
using namespace std;
class rectangle{
public:
    int length;
    int breath;
    char x;
}*p;
int main(){
    p = new rectangle;
    
    p->breath=12; // Refrence in only in c++
    p->length=13;

    cout << p->length << "\n";
    cout << p->breath << "\n";

    delete p;

    return 0;
}