#include <iostream>
using namespace std;

int main(){
    int **mat1;
    mat1 = new int *[4];
    for(int r=0; r<4; r++){
        mat1[r] = new int[6];
    }
    cout << mat1;

    return 0;
}