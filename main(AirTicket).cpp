#include <iostream>
#include "AirTicket.h"
using namespace std;

int main(int argc, char ** argv){
    // declare a stack variable
    AirTicket tkt1;

    // initialize and compute the price
    tkt1.setName("Jim Lee");
    tkt1.setMiles(15000);
    cout << tkt1.getName() << "totally pays" << tkt1.calculatePrice() << endl;

    // declare a heap variable
    AirTicket * tkt2 = new AirTicket;

    // initialize and compute the price
    tkt2 -> setName("Sandy Guo");
    tkt2 -> setMiles(3000);
    cout << tkt2->getName() << "totally pays" << tkt2->calculatePrice() << endl;

    // delete the variable when done
    delete tkt2;

    return 0;
}