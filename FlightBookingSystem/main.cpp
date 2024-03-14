#include <iostream>
#include "FlightBookingSystem.h"
using namespace std;

int main()
{
    FlightBookingSystem fbs;
    FlightBookingSystem fbs2;
    string name,seatChoice;
    int timeChoice;
    cout<<"Welcome to flight booking system"<<endl;
    cout<<endl;
    cout<<"Enter your fullname: "<<endl;
    getline(cin,name,'\n');

    fbs.displayTravelTimes(TIMES);

    cout<<"Choose the time by entering an option from the displayed list:"<<endl;
    do
    {
        cin>>timeChoice;
        if(!fbs.validateTimeOption(timeChoice))
            cout<<"Incorrect option! - Choose an option from 1-5"<<endl;

    }
    while(!fbs.validateTimeOption(timeChoice));


    fbs.displaySeats();
    cout<<"Please key in a seat number e.g (A2)"<<endl;
    cin>>seatChoice;
    fbs.bookSeat(seatChoice);
    fbs.displayTicket(name,timeChoice,seatChoice,TIMES);



    return 0;
}
