#ifndef BODEGA_H
#define BODEGA_H

#include <iostream>
#include <list>
#include "../Product/Product.h"
#include "../Product/FoodProduct.h"
#include "../Product/HomeApplianceProduct.h"
#include "../Product/SmartProduct.h"
#include "../Utilities/Utilities.h"
using namespace std;

class Winery{
    private:
    string name;
    string adress;
    int capacity;
    int filling; 
    list<Product> *products;
    public:
    Winery(string name, string adress, int capacity);
    ~Winery();
    string getName();
    string getAdress();
    int getCapacity();
    
    string toString();
    list<Product>* getProducts();
    Product getProduct(int id); // Maybe i can add other function who search te obj idk
    void addProduct(Product &product);
    void removeProduct(Product &Product);
    bool existProduct(Product &product);
    bool existProduct(int id);
    string showProducts();
    // Something else who i can do with product
};

#endif