#include <iostream>
using namespace std;
#include "Product.cpp"

// TODO maybe i can make another class called SMART DEVICE and using inhiretance i can make products intelligent.
class HomeApplianceProduct : public Product{
    private:
    float weight;
    float length;
    float width;
    float height;
    // bool smartDevie;
    public:
    HomeApplianceProduct(string name, string brand, int stock, int id, float unitPrice, float weight,
        float length, float width, float height) : Product(name, brand, stock, id, unitPrice) {
        this->admissionDate = Utilities::getDate();
        this->exitDate = "";
        this->weight = weight;
        this->length = length;
        this->width = width;
        this->height = height;
        // this->smartDevie = smartDevice;
    }

};