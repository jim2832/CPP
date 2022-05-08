#include <iostream>
#include <cstring>
using namespace std;


class CStr
{
private:
    char * line; // default access is private
public:
    CStr(char* word); //A
    CStr(const CStr & old); //B
    void showCStr();
};

int main(){
    CStr one("This is a test."); // call A
    CStr two(one); // call B; CStr two = one;
    two.showCStr();
    return 0;
}

CStr::CStr(char * word){ //A
    line = new char[strlen(word) + 1];
    strcpy(line, word);
}

CStr::CStr(const CStr & old){ //B
    line = new char[strlen(old.line) + 1];
    strcpy(line, old.line);
}

void CStr::showCStr(){
    cout << line << endl;
}