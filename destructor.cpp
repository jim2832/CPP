#include <iostream>
#include <cstring>
using namespace std;

class CStr
{
private:
    char *line; // default access is private
public:
    CStr() {line = NULL;} //A
    CStr(char * cline) {line = cline;}; //B
    ~CStr() {}
};

int main(){
    char *p = "Peter Pan";
    CStr one(p); // call B
    delete [] p;
    one.~CStr(); // call destructor
    return 0;
}