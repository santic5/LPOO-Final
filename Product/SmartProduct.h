#ifndef SMARTPRODUCT_H
#define SMARTPRODUCT_H

#include "HomeApplianceProduct.h"
using namespace std;

class SmartProduct : virtual public HomeApplianceProduct{
    private:
    string os;
    string connectivity;
    bool updatePending;

    public:
    SmartProduct(string name, string brand, int stock, int id, float unitPrice, float weight, float length,
    float width, float height, string os, string connectivity);
    string getOS();
    string getConnectivity();
    bool isUpdatePending();
};

#endif