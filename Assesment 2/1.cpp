#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string eventName, clientName;
    int numGuests, eventDuration;
    
    const double costPerHour = 18.50;
    const double costPerPerson = .40;
    const double depositPercentage = 20.70;

 
    cout << "**** Event Management System ****" << endl;
    cout << "Enter the event name: ";
    getline(cin, eventName);

    cout << "Enter client's first and last names: ";
    getline(cin, clientName);

    cout << "Enter the number of guests: ";
    cin >> numGuests;

    cout << "Enter the number of minutes for the event: ";
    cin >> eventDuration;

    
    int numServers = numGuests / 20; 
    double serverCost = numServers * costPerHour * (eventDuration / 60.0); 
    double foodCost = numGuests * costPerPerson;
    double totalCost = serverCost + foodCost;
    double deposit = totalCost * depositPercentage;

   
    cout << "\n==== Event Estimate for " << clientName << " ====" << endl;
    cout << "Event Name: " << eventName << endl;
    cout << "Number of servers: " << numServers << endl;
    cout << "Server cost: $" << serverCost << endl;
    cout << "Food cost: $" << foodCost << endl;
    cout << "Average cost per person: $" << costPerPerson << endl;

    cout << "\nTotal cost: $" << totalCost << endl;
    cout << "Please make a 25% deposit to reserve the event." << endl;
    cout << "Required deposit: $" << deposit << endl;

    return 0;
}
