#include "FlightBookingSystem.h"
#include<iomanip>
#include<string>
#include<iostream>
#include <unordered_set> //for storing booked seats in constant time
using namespace std;

FlightBookingSystem::FlightBookingSystem()
{
    // Ctor
}
// Function to validate time option for flight booking
bool FlightBookingSystem::validateTimeOption(int timeOption)
{

    if (timeOption >= 1 && timeOption <= 5)
        return true;
    else
        return false;
}
// Function to display available travel times for flights
void FlightBookingSystem::displayTravelTimes(const string arr[][2])
{

    cout << "The available time for flights are:" << endl;
    cout << endl;
    cout << setw(15) << "Depart" << setw(15) << "Arrive" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << "." << setw(12) << arr[i][0] << setw(15) << arr[i][1] << endl;
    }
}
// Function to display seats for a given class
void FlightBookingSystem::displayClassSeats(const string& className, char startRow, char endRow)
{

    cout << className << "(R" << (className == "First Class" ? FIRST_CLASS : ECON_CLASS) << ")" << endl;

    for (char r = startRow; r <= endRow; r++)
    {
        for (int c = 1; c <= 6; c++)
        {
            string sNo = "";
            sNo += r;
            sNo += to_string(c);

            cout << "|";
            if (bookedSeats.find(sNo) != bookedSeats.end())
            {
                cout << "***"; // Display '***' for booked seat
            }
            else
            {
                cout << sNo;
            }
            cout << "|";

            if (c == 3)
            {
                cout << "----";
            }
        }
        cout << endl;
    }
}
// Function to book a seat
bool FlightBookingSystem::bookSeat(const string &seatNumber)
{

    if (bookedSeats.find(seatNumber) != bookedSeats.end())
    {
        cout << "Seat " << seatNumber << " is already booked." << endl;
        return false; // Seat is already booked
    }

    bookedSeats.insert(seatNumber); // Book the seat
    cout << "Seat " << seatNumber << " has been booked successfully." << endl;
    return true;
}
// Function to display seats for both classes
void FlightBookingSystem:: displaySeats()
{

    displayClassSeats("First Class", 'A', 'D');
    displayClassSeats("Economy Class", 'E', 'H');
}
// Function to determine class for a given seat
string FlightBookingSystem::getClassForSeat(string seatChoice)
{

    if (seatChoice[0] >= 'A' && seatChoice[0] <= 'D')
    {
        return "First Class";
    }
    else if (seatChoice[0] >= 'E' && seatChoice[0] <= 'H')
    {
        return "Economy Class";
    }
    else
    {
        return "Invalid Seat";
    }
}
// Function to display ticket details
void FlightBookingSystem:: displayTicket(string passengerName, int timeChosen, string seatChoice, const string timeArr[][2])
{

    cout << "********************" << endl;
    cout << "Ticket for FLIGHT" << endl;
    cout << "********************" << endl;
    cout << endl;
    cout << "Name: " << passengerName << endl;
    cout << "Travel ticket class: " << getClassForSeat(seatChoice) << endl;
    cout << "Seat No: " << seatChoice << endl;
    cout << "Departure: Johannesburg" << endl;
    cout << "Departure time: " << timeArr[timeChosen - 1][0] << endl;
    cout << "Destination: Cape Town" << endl;
    cout << "Arrival time: " << timeArr[timeChosen - 1][1] << endl;
}
