#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a(4), b(10);
    cout << "a = " << a << "\t" << "b = " << b << endl;
    swap(a,b);
    cout << "After swap:" << endl;
    cout << "a = " << a << "\t" << "b = " << b << endl;
}