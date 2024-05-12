/* 
    FINAL PROYECT
    MADE BY:
        -
        -
        -
*/

#include <iostream>
#include <list>
#include "Product/Product.h"
#include "Product/FoodProduct.h"
#include "Product/HomeApplianceProduct.h"
#include "Product/SmartProduct.h"
#include "Utilities/Utilities.h"
using namespace std;

int main(){

    Product product1("Iphone", "Apple", 100, 11231, 3000000);
    FoodProduct product2("Manzana", "15/05/2024", "Productos frescos s.a", 300, 3323, 2500);
    HomeApplianceProduct product3("Nevera", "Samsung", 10, 1553, 3000000, 2, 3, 4, 5);
    SmartProduct product4("S23", "Samsung", 25, 923, 3400000, 0.22, 0.33, 0.43, 0.53, "Android 15", "Wifi/Bluetooth/AMFM");

    list<Product> products;
    products.push_back(product1);
    products.push_back(product2);
    products.push_back(product3);
    products.push_back(product4);

    for(Product prod : products){
        cout << prod.toString();
    }

    return 0;
}