#include "FoodProduct.h"

FoodProduct::FoodProduct(string name, string dueDate, string brand, int stock, int id, float unitPrice):Product(name, brand, stock, id, unitPrice){
    this->admissionDate = Utilities::today();
    this->name = name;
    this->stock = stock;
    this->id = id;
    this->unitPrice = unitPrice;
    this->dueDate = dueDate;
    this->brand = brand;
    this->defeated = false;
}

void FoodProduct::setDefeated(){
    this->defeated = true;
}

bool FoodProduct::isDefeated(){
    return this->defeated;
}

string FoodProduct::getDueDate(){
    return this->dueDate;
}