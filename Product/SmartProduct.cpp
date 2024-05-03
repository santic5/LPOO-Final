#include <iostream>
using namespace std;
#include "HomeApplianceProduct.cpp"

class SmartDevice : virtual public HomeApplianceProduct{
    private:
    string os;
    string connectivity;
    bool updatePending;
    public:
    SmartDevice(string name, string brand, int stock, int id, float unitPrice, float weight, float length,
    float width, float height, string os, string connectivity):HomeApplianceProduct(name, brand, stock, id, unitPrice, weight, length,
    width, height){
        this->os = os;
        this->connectivity = connectivity;
    }

    string getOs(){
        return this->os;
    }

    string getConnectivity(){
        return this->connectivity;
    }

    bool isUpdatePending(){
        return updatePending;
    }
};