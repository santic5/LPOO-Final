/* 
    FINAL PROYECT - LABORATORY OF POO
    MADE BY:
        - Donnie Santiago Campo
        - Leandro Gabriel Nandar
        - Lesber Estanga Montezuma
*/

// Libraries
#include <iostream>
#include <list>
#include "Database/Database.h"
#include "Database/Logs.h"
#include "Database/Utilities.h"
#include "Logic/Winery/Winery.h"
#include "Logic/Product/Product.h" 
#include "Logic/Product/FoodProduct.h"
#include "Logic/Product/HomeApplianceProduct.h"
#include "Logic/Product/SmartProduct.h"
#include "Logic/Utilities/Utilities.h"
using namespace std;

// TODO APPLY ARQUITECTURA EN CAPAS /SUCESS
// PRESENTATION, NEGOCIO, DATA ACCESS
// NEED TO ADD COMPOSITION 
int main(){
    LogFile logs("logs.txt");
    Staff staff("hola", 1061, "Calle 2 # 37-36", 18, "Gerente", 1.234);
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