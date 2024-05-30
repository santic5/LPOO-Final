#ifndef BODEGA_H
#define BODEGA_H

#include <iostream>
#include <list>
#include "../Product/Product.h"
#include "../Product/FoodProduct.h"
#include "../Product/HomeApplianceProduct.h"
#include "../Product/SmartProduct.h"
#include "../Person/Staff.h"
#include "../Utilities/Utilities.h"
#include <forward_list>
using namespace std;


// TODO: ABAST FUNCTION MAYBE
class Winery{
    private:
    string name;
    string adress;
    int capacity;
    int filling; 
    list<Product> *products; //This should be a forward list
    list<Staff> *staff; 
    
    public:
    // CONSTRUCTOR:
    Winery(string name, string adress, int capacity);
    // DESTRUCTOR:
    ~Winery();
    // WINERY FX: 
    string getName();
    string getAdress();
    int getCapacity();
    int getFilling();
    string toString();
    // FX FOR PRODUCTS: 
    list<Product>* getProducts();
    Product getProduct(int id); // Maybe i can add other function who search te obj idk
    void addProduct(Product &product);
    void removeProduct(Product &Product);
    void removeProduct(int id);
    bool existProduct(Product &product);
    bool existProduct(int id);
    string showProducts();
    // Something else who i can do with product
    // FX FOR STAFF:
    list<Staff>* getStaff();
    Staff getStaff(int id);
    void addStaff(Staff &staff);
    void removeStaff(Staff &staff);
    void removeStaff(int id);
    bool existStaff(Staff &staff);
    bool existStaff(int id);
    string showStaff();
};

#endif