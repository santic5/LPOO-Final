/* 
    FINAL PROYECT
    MADE BY:
        -
        -
        -
*/

#include <iostream>
using namespace std;
#include "Utilities.cpp"
// #include "Product/Product.cpp"
// #include "Product/FoodProduct.cpp"
// #include "Product/HomeApplianceProduct.cpp"
// #include "Product/SmartProduct.cpp"

int main(){
    string date;
    int legibleDate;
    cout << "DATE DEBUG:" << endl;
    date = Utilities::getDate();
    cout << date << endl;
    legibleDate = Utilities::dateToLegible(date);
    cout << legibleDate << endl;
    cout << "END OF DATE DEBUG" << endl;

    
    return 0;
}