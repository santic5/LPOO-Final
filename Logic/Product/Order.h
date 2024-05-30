#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <iostream>
using namespace std;
#include "Product.h"
#include "../Winery/Winery.h"

class Order{
private:
    int clientID;
    int orderID;
    vector<Product> order;
    string status;
public:
    Order(int clientID, int orderID); // Client ID its the 
    ~Order();
    void add(vector<Product> order);
    void add(Product product);
    void remove(int position);
    void makeOrder(Winery &winery);
    void completeOrder();
    string getStatus();
    void setStatus(string status);
    string showOrder();
};
#endif