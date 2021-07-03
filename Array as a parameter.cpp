#include<iostream>
using namespace std;
//Array can't be passed by value.
void fun(int A[], int n){//Pointer to an Array.
    cout << sizeof(A)/sizeof(int) << "\n";//It's taking size of a pointer.
    A[0]=12;
    for(int i = 0;i<6;i++){ 
        cout << A[i] << " ";
    }
}

int main(){
    int A[]={1,2,3,4,5,6};//Array is Declared & initialised.
    int n = 6;

    fun(A,n);
    cout << sizeof(A)/sizeof(int) << "\n";//It's taking size of actual Array.

    for(int x:A){
        cout << x << " ";//For each loop works lonly in main function.
    }

    return 0;
}