#include <iostream>
#include "AirTicket.h"
using namespace std;

// constructor
AirTicket::AirTicket(){
    name = "unknown";
    miles = 0;
}

// destroctor
AirTicket::~AirTicket(){
    // actually nothing to do
}

// getName
string AirTicket::getName(){
    return name;
}

// setName
void AirTicket::setName(string inName){
    name = inName;
}

// setMiles
void AirTicket::setMiles(int inMiles){
    miles = inMiles;
}

// calculatePrice
int AirTicket::calculatePrice(){
    int rPrice = 0;

    // 5% off if your mileage > 10000
    if (miles > 10000)
        rPrice = (int) (miles * 0.095);
    else
        rPrice = (int) (miles * 0.1);
    return rPrice;
}