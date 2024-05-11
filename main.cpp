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
#include "Utilities/Utilities.h"
using namespace std;

int main(){
    // string date;
    // bool oldDate;
    // cout << "DATE DEBUG:" << endl;
    // date = Utilities::today();
    // cout << date << endl;
    // oldDate = Utilities::isOldDate("4/05/2025");
    // cout << "Result: " << oldDate << endl;
    // cout << "END OF DATE DEBUG" << endl;
    // return 0;

    // list<Product> *products;
    
    // Product product1("Iphone", "Apple", 100, 11231, 3000000);
    // products->push_back(product1);
    // for(const auto& product : *products){
    //     cout << product.toString();
    // }

    // delete products;

    Product product1("Iphone", "Apple", 100, 11231, 3000000);
    cout << product1.toString();
    return 0;
}