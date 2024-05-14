#include "Client.h"

Client::Client(string name, int identification, string adress, int age):Person(name, identification, adress, age){
    this->completedShipments = 0;
    this->scheduledShipment = false;
}
Client::~Client(){}
int Client::getCompletedShipments(){
    return this->completedShipments;
}
bool Client::isScheduledShipment(){
    return this->scheduledShipment;
}
string Client::toString(){
    return string("\n") + "Client: " + this->name + " (id: " + to_string(this->identification) + string("\n") + " age: " + to_string(this->age) + 
    " yrs old" + string("\n") + 
    "Home adress: " + this->adress + string("\n") + 
    "Shceduled shipments: " + to_string(this->scheduledShipment) + " - Completed shipments: " + to_string(this->completedShipments) + string("\n"); 
}
void Client::addToOrder(list<Product> orderProducts){ //Before add the products to the client, delete the list created in main please :)
    this->completedOrders++;
    this->orders.insert(make_pair(completedOrders, orderProducts));
}
void Client::addToOrder(Product orderProduct){
    this->orders[completedOrders].push_back(orderProduct);
}
void Client::removeFromOrder(Product orderProduct){
    try{
        for(list<Product>::iterator it = orders[completedOrders].begin(); it != orders[completedOrders].end(); it++){
            Product pr = *it;
            if(pr.getId() != orderProduct.getId() && next(it) == orders[completedOrders].end()){
                throw runtime_error("ERROR: THE SELECTED ITEM NOT EXIST IN THIS ORDER.");
            }else{
                break;
            }
        }
        this->orders[completedOrders].remove(orderProduct);
    }catch(runtime_error e){
        cerr << e.what();
    }
}