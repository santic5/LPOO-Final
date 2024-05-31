#ifndef HOMEAPPLIANCEPRODUCT_H
#define HOMEAPPLIANCEPRODUCT_H

using namespace std;
#include "Product.h"
#include "../Utilities/Utilities.h"

// TODO maybe i can make another class called SMART DEVICE and using inhiretance i can make products intelligent.
class HomeApplianceProduct : public Product{
    private:
    float weight;
    float length;
    float width;
    float height;

    public:
    HomeApplianceProduct(string name, string brand, int stock, int id, float unitPrice, float weight,
    float length, float width, float height);
    float getWeight();
    float getLength();
    float getWidth();
    float getHeight();
    string toString() override;
};

#endif