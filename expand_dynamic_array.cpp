#include <iostream>
using namespace std;

int main(){
    int n = 0, MAX = 10;
    int * ivec = new int[MAX];
    while(cin >> ivec[n]){
        n++;
        if(n >= MAX){
            MAX *= 2;
            int *temp = new int[MAX];
            for(int i=0; i<n; i++){
                temp[i] = ivec[i];
            }
            delete [] ivec;
            ivec = temp;
        }
    } 
}