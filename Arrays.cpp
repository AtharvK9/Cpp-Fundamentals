#include <iostream>
using namespace std;

int main(){
  int A[5] = {1,2,3,4,5};
  

  cout << sizeof(A) << "\n";
  cout << A[2] << "\n";

  for(int x:A){
    cout << x << endl;
  }


  return 0;
}