#include <iostream>
using namespace std;
#include "Product.cpp"

//TODO: EXPIRED ITEM SYSTEM
class FoodProduct : public Product{
    private:
    string dueDate;
    bool defeated;

    public:
    FoodProduct(string name, string dueDate, string brand, int stock, int id, float unitPrice):Product(name, brand, stock, id, unitPrice){
        this->admissionDate = Utilities::getDate();
        this->exitDate = "";
        this->name = name;
        this->stock = stock;
        this->id = id;
        this->unitPrice = unitPrice;
        this->dueDate = dueDate;
        this->brand = brand;
        this->defeated = false;
    }

    void setDefeated(){
        this->defeated = true;
    }

    bool isDefeated(){
        return this->defeated;
    }

    string getDueDate(){
        return this->dueDate;
    }

};