#include<iostream>
#include<iomanip>

using namespace std;
bool validateChoice(int choice)
{
  return (choice<1 || choice >5);


}
//Function to display and select seat option
void travelTimes(int choice)
{

    cout<<"The travel time for flights are:"<<endl;
    cout<<setw(20)<<"Depart"<<setw(20)<<"Arrive"<<endl;
    cout<<"1."<<setw(20)<<"7:00"<<setw(20)<<"9:30"<<endl;
    cout<<"2."<<setw(20)<<"9:00"<<setw(20)<<"11:30"<<endl;
    cout<<"3."<<setw(20)<<"11:00"<<setw(20)<<"13:30"<<endl;
    cout<<"4."<<setw(20)<<"13:00"<<setw(20)<<"15:30"<<endl;
    cout<<"5."<<setw(20)<<"15:00"<<setw(20)<<"17:30"<<endl;
    cout<<endl;

    do{
        cin>>choice;
        if(validateChoice(choice))
        {
            cout<<"Invalide option! - Please select from 1 - 5"<<endl;
        }
    }while(validateChoice(choice));

}

int main()
{
    int timeChoice;
    cout<<"Choose the time from the option number from the displayed list:"<<endl;
    travelTimes(timeChoice);
    d

}
