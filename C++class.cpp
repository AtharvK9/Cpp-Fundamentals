#include<iostream>
using namespace std;
class rectangle{//creating class
private:
    int length;
    int breath;
public:
rectangle (){
    length=0;
    breath=0;
}

rectangle(int l, int b){
    length = l;
    breath = b;
}

int area(){
    return length*breath;
}

int perimeter(){
    return 2*(length*breath);
}

void setlength(int l){
    length = l;
}

void setbreath(int b){
    breath = b;
}

int getlength(){
    return length;
}

int getbreath(){
    return breath;
}

~rectangle(){
    cout << "Destructer\n";
}

};

int main(){ 
    rectangle r(10,5); 
    cout << "Area:" << r.area() << "\n";
    cout << "Perimeter:" << r.perimeter() << "\n";

    return 0;
}
