#include "HomeApplianceProduct.h"

HomeApplianceProduct::HomeApplianceProduct(string name, string brand, int stock, int id, float unitPrice, float weight,
    float length, float width, float height) : Product(name, brand, stock, id, unitPrice) {
    this->admissionDate = Utilities::today();
    this->weight = weight;
    this->length = length;
    this->width = width;
    this->height = height;
}
float HomeApplianceProduct::getWeight(){
    return this->weight;
}
float HomeApplianceProduct::getLength(){
    return this->length;
}
float HomeApplianceProduct::getWidth(){
    return this->width;
}
float HomeApplianceProduct::getHeight(){
    return this->height;
}

