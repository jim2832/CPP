#include <iostream>
using namespace std;

// int main(){
//     float f = 13.3, *p1, *p2;
//     p1 = p2 = &f;
//     p1--;
//     cout << p1;
//     p2 += 5;
//     cout << p2;
//     if (p1 == p2){
//         cout << "They have the same address" << endl;
//     }
// }

int main(){
    float a = 0.3, *b, **c;
    b = &a;
    c = &b;
    cout << &a << endl; // address of a
    cout << b << endl;  // value of b
    cout << *c << endl; // dereference of c
    cout << "They are the same(value of b)" << endl;
}