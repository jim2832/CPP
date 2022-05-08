#include <iostream>
using namespace std;

int main(){
    double num = 7.5;
    double & num2 = num; // num2 是 num 的別名
    cout << num << "\n" << num2 << endl;
}

// 觀念
// *：在宣告時代表是指標，使用時代表解參考
// &：在宣告時代表「別名」，使用時代表位址