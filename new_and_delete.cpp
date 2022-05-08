#include <iostream>
#define MAX 10
using namespace std;

int main(){
    // declare a pointer and allocate space
    double *dpt = new double(0.0);

    if(dpt == NULL){
        // not enough memory to be allocated
        cout << "Insufficient memory.\n";
        exit(1);
    }

    *dpt = 3.4; // use pointer to access value
    cout << *dpt << endl;

    //return the spcae to heap
    delete dpt;
}