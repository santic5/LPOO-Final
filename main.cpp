/* 
    FINAL PROYECT
    MADE BY:
        -
        -
        -
*/

#include <iostream>
// #include <list>
#include "Winery/Winery.h"
#include "Product/Product.h"
#include "Product/FoodProduct.h"
#include "Product/HomeApplianceProduct.h"
#include "Product/SmartProduct.h"
#include "Utilities/Utilities.h"
using namespace std;

int main(){
    // TODO: CREATE TOSTRING FUNCTION TO EVERY PRODUCT.
    
    // Product product1("Iphone", "Apple", 100, 11231, 3000000);
    // FoodProduct product2("Manzana", "15/05/2024", "Productos frescos s.a", 300, 3323, 2500);
    // HomeApplianceProduct product3("Nevera", "Samsung", 10, 1553, 3000000, 2, 3, 4, 5);
    // SmartProduct product4("S23", "Samsung", 25, 923, 3400000, 0.22, 0.33, 0.43, 0.53, "Android 15", "Wifi/Bluetooth/AMFM");

    // list<Product> products;
    // products.push_back(product1);
    // products.push_back(product2);
    // products.push_back(product3);
    // products.push_back(product4);

    // for(Product prod : products){
    //     cout << prod.toString();
    // }
    Winery winery1("Exito", "Cra 9 # 8-33", 3000);
    Product product1("Iphone", "Apple", 100, 11231, 3000000);
    FoodProduct product2("Manzana", "15/05/2024", "Productos frescos s.a", 300, 3323, 2500);
    HomeApplianceProduct product3("Nevera", "Samsung", 10, 111, 2500000, 1.20, 1.20, 1.30, 2.00);
    SmartProduct product4("Iphone 15", "Apple", 100, 333, 3000000, 0.250, 0.500, 0.03, 0.900, "iOS", "wifi 6 / Bluetooth");
    winery1.addProduct(product1);
    winery1.addProduct(product2);
    winery1.addProduct(product3);
    winery1.addProduct(product4);
    cout << winery1.getProduct(333).toString();
    cout << winery1.toString();
    winery1.removeProduct(product4);
    cout << winery1.toString();
    cout << "\n";
    cout << winery1.showProducts();
    return 0;

    /*
    
        MENU:
            ACT AS:
                1. WINERY:
                    1. SHOW AND THAT OTHER FX
                    2. SUPPLY (ABASTECER)
                    3. STAFF
                        1. DELETE DEFEATED PRODUCTS
                        2. GETSTATUS
                        3. SHOW STAFF
                        4. MOVE OUT ORDER (AUTOMATIC)
                        5. PACKAGING PRODUCT
                    4. TRANSPORT
                2. CLIENT
                    1. MAKE A ORDER
                    2. GET THE ORDER IN HIS RESIDENCY
    */
}