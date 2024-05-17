/* 
    FINAL PROYECT
    MADE BY:
        - Donnie Santiago Campo
        - Leandro Gabriel Nandar
        - Lesber 
*/

#include <iostream>
#include <list>
#include "Winery/Winery.h"
#include "Product/Product.h" 
#include "Product/FoodProduct.h"
#include "Product/HomeApplianceProduct.h"
#include "Product/SmartProduct.h"
#include "Utilities/Utilities.h"
using namespace std;

int main(){
    // MYSQL* mysql;
    // mysql = mysql_init(0);

    Winery *bodega; 
    cout << "AUN NO HA CREADO NINGUNA BODEGA. POR FAVOR, CREELA Y CONTINUE EL PROGRAMA.";
    string nombre, direccion;
    int capacity;
    cout << "Por favor, ingrese el nombre de la bodega: ";
    cin >> nombre;
    cout << "\nPor favor, ingrese la direccion de la bodega: ";
    cin >> direccion;
    cout << "Por favor, ingrese la capacidad total de la bodega: ";
    cin >> capacity;
    bodega = new Winery(nombre, direccion, capacity);

    // TODO: CREATE TOSTRING FUNCTION TO EVERY PRODUCT.

    Product product1("Iphone", "Apple", 100, 11231, 3000000);
    FoodProduct product2("Manzana", "15/05/2024", "Productos frescos s.a", 300, 3323, 2500);
    HomeApplianceProduct product3("Nevera", "Samsung", 10, 111, 2500000, 1.20, 1.20, 1.30, 2.00);
    SmartProduct product4("Iphone 15", "Apple", 100, 333, 3000000, 0.250, 0.500, 0.03, 0.900, "iOS", "wifi 6 / Bluetooth");
    bodega->addProduct(product1);
    bodega->addProduct(product2);
    bodega->addProduct(product3);
    bodega->addProduct(product4);
    cout << bodega->getProduct(333).toString();
    cout << bodega->toString();
    bodega->removeProduct(product4);
    cout << bodega->toString();
    cout << bodega->showProducts();

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
    return 0;
}