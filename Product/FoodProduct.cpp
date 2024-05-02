#include <iostream>
using namespace std;
#include "Product/Product.cpp"

//TODO: EXPIRED ITEM SISTEM
class FoodProduct : public Product{
    private:
    string dueDate;
    string trademark;
    bool defeated;

    public:
    FoodProduct(string name, int stock, int id, float unitPrice, string dueDate, string trademark):Product(name, stock, id, unitPrice){
        this->admissionDate = Utilities::getDate();
        this->exitDate = "";
        this->name = name;
        this->stock = stock;
        this->id = id;
        this->unitPrice = unitPrice;
        this->dueDate = dueDate;
        this->trademark = trademark;
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

    string getTrademark(){
        return this->trademark;
    }

};