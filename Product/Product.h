#ifndef PRODUCT_H
#define PRODUCT_H

#include "../Utilities/Utilities.h" // Assuming Utilities.h is in the parent directory
using namespace std;

class Product {
protected:
    string admissionDate;
    string exitDate;
    string name;
    string brand;
    int stock;
    int id;
    float unitPrice;
public:
    // Constructor
    Product(string name, string brand, int stock, int id, float unitPrice);

    // Destructor (if necessary)
    ~Product();

    // Getter methods
    string getAdmissionDate();
    string getExitDate();
    string getName();
    string getBrand();
    int getStock();
    int getId();
    float getUnitPrice();
    virtual string toString(); // Set virtual this function

    // Setter method
    void setExitDate(string &date); 
};

#endif // PRODUCT_H
