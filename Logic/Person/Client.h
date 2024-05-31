#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <unordered_map>
#include "../Product/Order.h"
#include "Person.h"
using namespace std;

class Client : public Person{
private:
    int completedShipments;
    bool scheduledShipment;
    int completedOrders;
    unordered_map<int, Order> orders;
    // vector<Order> orders; // USED FOR THE MOMENT, WE WILL CHANGE THE MAP TO AN OBJECT // SOLVED
    // Add more
public:
    Client(string name, int identification, string adress, int age);
    ~Client();
    int getCompletedShipments();
    bool isScheduledShipment();
    Order getOrder(int id);
    string toString();
    // string serialize() override;
    // void deserialize(istream& in);
};

#endif