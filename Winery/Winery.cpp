#include "Winery.h"

// Problems: The winery is literally infinite xd
Winery::Winery(string name, string adress, int capacity){
    this->name = name;
    this->adress = adress;
    this->capacity = capacity;
    this->filling = 0;
    this->products = new list<Product>;
}
Winery::~Winery(){
    delete products;
}
string Winery::getName(){
    return this->name;
}
string Winery::getAdress(){
    return this->adress;
}
int Winery::getCapacity(){
    return this->capacity;
}
int Winery::getFilling(){
    return this->filling;
}
string Winery::toString(){
    return "Bodega: " + this->name + "(" + this->adress + ")" + string("\n") +
    "Capacity status: " + to_string(this->filling) + "/" + to_string(this->capacity) + string("\n") +
    "Products: " + to_string(this->products->size());
}
list<Product>* Winery::getProducts(){
    return this->products;
}
// Function probably returns null in some cases
Product Winery::getProduct(int id){
    if(!(existProduct(id))){
        return products->front();
    }
    for(Product prod : *products){
        if(id == prod.getId()){
            return prod;
        }
    }
}
void Winery::addProduct(Product &product){
    Product *pr = &product;
    this->products->push_back(*pr);
    this->filling += product.getStock();
}
void Winery::removeProduct(Product &product){
    Product *pr = &product;
    this->products->remove(*pr);
    this->filling -= product.getStock();
}
bool Winery::existProduct(Product &product){
    for(const auto& element : *products){
        if(&element == &product){
            return true;
        }
    }
    return false;
}
bool Winery::existProduct(int id){
    for(Product prod : *products){
        if(prod.getId() == id){
            return true;
        }
    }
    return false;
}
string Winery::showProducts(){
    string statement = "Products in Winery" + string("\n");
    int i = 1; 
    for(Product prod : *products){
        statement += to_string(i) + ". " + string("\n")
        + string("\t") + prod.toString() + string("\n");
    }
}