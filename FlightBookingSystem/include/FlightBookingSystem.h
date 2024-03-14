#ifndef FLIGHTBOOKINGSYSTEM_H
#define FLIGHTBOOKINGSYSTEM_H
#include<string>
#include <unordered_set>

using namespace std;
class FlightBookingSystem
{
    public:
        FlightBookingSystem();
        bool validateTimeOption(int timeOption);
        void displayTravelTimes(const string arr[][2]);
        void displayClassSeats(const string& className, char startRow, char endRow);
        void displaySeats();
        void displayTicket(string passengerName,int timeChosen,string seatChoice, const string timeArr[][2]);
        bool bookSeat(const string &seatNumber);
        string getClassForSeat(string seatChoice);
        const float FIRST_CLASS=1920.00;
        const float ECON_CLASS=1600.00;



    protected:

    private:
        unordered_set<string> bookedSeats;

};
 static const string TIMES[][2]= {{"7:00","9:30"},
                        {"9:00","11:30"},
                        {"11:00","13:30"},
                        {"13:00","15:30"},
                        {"15:00","17:30"}};
#endif // FLIGHTBOOKINGSYSTEM_H
