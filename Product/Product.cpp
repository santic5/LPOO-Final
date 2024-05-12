#include "Product.h"

// GENERAL TODO: 1. A log for each product who exit and join
/*
    Superclass of Food Product (apply herency if its necesary). Of Electrodomestic, Electronic, Cleaning, Clothes and deport. 
*/
// for more
// guessing to do date of expire btw (NO, it only can be used to food)
// TODO: toString class for every product type Override btw
Product::Product(string name, string brand, int stock, int id, float unitPrice){
    this->admissionDate = Utilities::today();
    this->exitDate = "En bodega";
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
    return this->exitDate;
}
string Product::getName(){
    return this->name;
}
int Product::getStock(){
    return this->stock;
}
int Product::reduceStock(int toReduce){
    this->stock = toReduce - stock;
    return stock;
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
    return "Producto: " + string("\n") + 
    "   Nombre: " + this->name + ". Marca: " + this->brand + ". ID: " + to_string(this->id) + string("\n") +
    "   Fecha Entrada/Salida: " + this->admissionDate + "/" + this->exitDate + string("\n") + 
    "   Stock: " + to_string(this->stock) + ". Precio por unidad: " + to_string(this->unitPrice) + string("\n");
}
bool Product::operator==(Product &product){
    return this->id == product.id && this->name == product.name;
}