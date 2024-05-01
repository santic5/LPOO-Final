#include <iostream>
using namespace std;
#include "Utilities.cpp"

// GENERAL TODO: 1. A log for each product who exit and join 
class Product{
    protected:
        string admissionDate;
        string exitDate;
        string name;
        int stock;
        int id;
        // for more
        // guessing to do date of expire btw (NO, it only can be used to food)
    public:
        Product(string name, int stock, int id){
            this->admissionDate = Utilities::getDate();
            this->exitDate = "";
            this->name = name;
            this->stock = stock;
            this->id = id;
        }
        void setexitDate(string date){
            this->exitDate = date;
        }
        string getName(){
            return this->name;
        }
        int getStock(){
            return this->stock;
        }
        int getId(){
            return this->id;
        }
};