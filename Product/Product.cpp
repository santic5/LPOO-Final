#include "Product.h"

// GENERAL TODO: 1. A log for each product who exit and join
/*
    Superclass of Food Product (apply herency if its necesary). Of Electrodomestic, Electronic, Cleaning, Clothes and deport. 
*/
// for more
// guessing to do date of expire btw (NO, it only can be used to food)
Product::Product(string name, string brand, int stock, int id, float unitPrice){
    this->admissionDate = Utilities::today();
    this->exitDate = "";
    this->name = name;
    this->brand = brand;
    this->stock = stock;
    this->id = id;
    this->unitPrice = unitPrice;
}
Product::~Product(){}
void Product::setExitDate(string &date){
    this->exitDate = date;
}
string Product::getExitDate(){
    if(exitDate==""){
        return "ISIN";
    }
    return this->exitDate;
}
string Product::getName(){
    return this->name;
}
int Product::getStock(){
    return this->stock;
}
int Product::getId(){
    return this->id;
}
float Product::getUnitPrice(){
    return this->unitPrice;
}
string Product::getBrand(){
    return this->brand;
}
string Product::getAdmissionDate(){
    return this->admissionDate;
}
string Product::toString(){
    return "Product name: " + this->name + " from " + this->brand + "("+this->admissionDate+"/"+this->exitDate+ ") with " + to_string(this->stock) + "units"
    + "\n" + "ID: " + to_string(this->id) + " Price: " + to_string(this->unitPrice);
}