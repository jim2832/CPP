#include <iostream>
using namespace std;

// References pointers with constants
// 1. a reference to a constant
// 2. a pointer to a constant -> 位址可以改變，但位址的值不能改變
// 3. a constant pointer -> 位址不可以改變，但位址的值能改變
// 4. a constant pointer to a constant

int main(){
    int x = 9;
    const int & xref = x;
    x = 33;
    cout << xref;
    // xref = 15; -> this is an error
    x = 50;
}