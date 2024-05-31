#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
#include "../Logic/Person/Client.h"
#include "../Logic/Person/Staff.h"
#include "../Logic/Product/Product.h" 
#include "../Logic/Product/FoodProduct.h"
#include "../Logic/Product/HomeApplianceProduct.h"
#include "../Logic/Product/SmartProduct.h"
#include "../Logic/Winery/Winery.h"

using namespace std;

class Utilities{
    public:

    template <class T>
    static string serialize(const T& t){
        if constexpr (is_same_v<T, Client>) {
            return "Cliente";
        }else if constexpr (is_same_v<T, Staff>) {
            return "Staff";
        }else if constexpr (is_same_v<T, Product>) {
            return "Product";
        }else if constexpr (is_same_v<T, FoodProduct>) {
            return "FoodProduct";
        }else if constexpr (is_same_v<T, HomeApplianceProduct>) {
            return "HomeApplianceProduct";
        }else if constexpr (is_same_v<T, SmartProduct>) {
            return "SmartProduct";
        }else if constexpr (is_same_v<T, Winery>){
            return "Winery";
        }else {
            return "?";
        }
    }

};
#endif