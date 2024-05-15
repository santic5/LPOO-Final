#include "Order.h"

Order::Order(int clientID, int orderID){
    this->clientID = clientID;
    this->orderID = orderID;
    this->status = "Created";
}
Order::~Order(){}
void Order::add(vector<Product> order){
    this->order.insert(this->order.end(), order.begin(), order.end());
}
void Order::add(Product product){
    this->order.push_back(product);
}
void Order::remove(int position){
    this->order.erase(order.begin() + position-1);
}
void Order::makeOrder(Winery Winery){
    this->status = "Paid";
    for(Product prod : order){
        Winery.removeProduct(prod);
    }
}
void Order::completeOrder(){
    delete this;
}
string Order::getStatus(){
    return this->status;
}
void Order::setStatus(string status){
    this->status = status;
}
string Order::showOrder(){
    string aux; 
    aux =  string("\n") + "Order " + to_string(this->clientID) + string("\n") + 
    "Status: " + this->status + string("\n");
    if(this->order.begin() != this->order.end()){
        for(Product pr : this->order){
            aux += pr.toString();
        }
    }
    return aux;
}