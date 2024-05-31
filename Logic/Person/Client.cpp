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
    return string("\n") + "Client: " + this->name + " (id: " + to_string(this->identification) + string(")\n") + "age: " + to_string(this->age) + 
    " yrs old" + string("\n") + 
    "Home adress: " + this->adress + string("\n") + 
    "Shceduled shipments: " + to_string(this->scheduledShipment) + " - Completed shipments: " + to_string(this->completedShipments) + string("\n"); 
}
Order Client::getOrder(int id){
    auto it = this->orders.find(id);
    try{
        if(it == this->orders.end()){
            throw runtime_error("ERROR: THE ORDER SELECTED HAS NOT FOUNDED");
        }
        return it->second;
    }catch(const runtime_error& e){
        cerr << e.what();
    }
    return Order(0,0);
}