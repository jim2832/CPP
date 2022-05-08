#include <iostream>
using namespace std;

int main(){
    int *first, *second;
    first = new int[10];
    second = first; // shallow copy

    second = new int[10];
    for(int i=0; i<10; i++){
        second[i] = first[i]; // deep copy 
    }
}