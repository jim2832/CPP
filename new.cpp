#include <iostream>
using namespace std;

int main(){
    int *p = new int(5); // allocate an new int memory space
    delete p; // delete the spcae that p points to

    return 0;
}