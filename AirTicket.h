// AirTicket.h
#include <string>
class AirTicket{
    private: // two data members
        std:: string name;
        int miles;
    public:
        AirTicket();
        ~AirTicket();
        std::string getName();
        void setName(std::string inName);
        void setMiles(int inMiles);
        int calculatePrice();
};