#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include "../Logic/Product/Product.h"
#include "../Logic/Product/FoodProduct.h"
#include "../Logic/Product/HomeApplianceProduct.h"
#include "../Logic/Product/SmartProduct.h"
#include "../Logic/Winery/Winery.h"
#include "../Logic/Person/Staff.h"
using namespace std;

class Input {
public:
    const static string readString(const char *message);
    const static int readInt(const char *message);
    const static int readInt();
    const static float readFloat(const char *message);
    static FoodProduct readFoodProduct();
    static HomeApplianceProduct readHomeApplianceProduct();
    static SmartProduct readSmartProduct();
    static Product readProduct();
    static Winery readWinery();
    static Staff readStaff();
};

#endif