#ifndef FOODPRODUCT_H
#define FOODPRODUCT_H

using namespace std;
#include "Product.h"
#include "../Utilities/Utilities.h"

//TODO: EXPIRED ITEM SYSTEM
class FoodProduct : public Product{
    private:
    string dueDate;
    bool defeated;
    public:
    FoodProduct(string name, string dueDate, string brand, int stock, int id, float unitPrice);
    void setDefeated();
    bool isDefeated();
    string getDueDate();
};

#endif