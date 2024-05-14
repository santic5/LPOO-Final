#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <list>
#include <unordered_map>
#include "Person.h"
#include "../Product/Product.h"
using namespace std;

class Client : public Person{
private:
    int completedShipments;
    bool scheduledShipment;
    int completedOrders;
    unordered_map<int, list<Product>> orders; // USED FOR THE MOMENT, WE WILL CHANGE THE MAP TO AN OBJECT
    // Add more
public:
    Client(string name, int identification, string adress, int age);
    ~Client();
    int getCompletedShipments();
    bool isScheduledShipment();
    string toString();
    void addToOrder(list<Product> orderProducts);
    void addToOrder(Product product);
    void removeFromOrder(Product product);
    void makeOrder();
    string showOrder();
    string orderStatus(int order);
};

#endif