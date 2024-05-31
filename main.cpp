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
#include "Client/Input.h"
#include "Client/Output.h"
#include "Database/Database.h"
#include "Database/Logs.h"
#include "Database/Utilities.h"
#include "Logic/Winery/Winery.h"
#include "Logic/Product/Product.h" 
#include "Logic/Product/FoodProduct.h"
#include "Logic/Product/HomeApplianceProduct.h"
#include "Logic/Product/SmartProduct.h"
#include "Logic/Person/Client.h"
#include "Logic/Utilities/Utilities.h"
using namespace std;

int main() {
    Winery winery;  
    list<Client> clients;

    Product product;
    Staff staff;
    int aux;
    int choise;
    do {
        Output::actMenu();
        choise = Input::readInt();

        switch (choise) {
            case 1: {
                int wchoise;
                do {
                    Output::wineryMenu();
                    wchoise = Input::readInt();
                    switch (wchoise) {
                        case 1:
                            cout << winery.toString() << endl;
                            break;
                        case 2: {
                            int pchoise;
                            do {
                                Output::productMenu();
                                pchoise = Input::readInt();
                                switch (pchoise) {
                                    case 1:
                                        product = Input::readFoodProduct();
                                        winery.addProduct(product);
                                        break;
                                    case 2:
                                        product = Input::readHomeApplianceProduct();
                                        winery.addProduct(product);
                                        break;
                                    case 3:
                                        product = Input::readSmartProduct();
                                        winery.addProduct(product);
                                        break;
                                    case 4:
                                        product = Input::readProduct();
                                        winery.addProduct(product);
                                        break;
                                    case 5:
                                        cout << "Saliendo del menú de productos..." << endl;
                                        break;
                                    default:
                                        cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                                }
                            } while (pchoise != 5);
                            break;
                        }
                        case 3:
                            aux = Input::readInt("Ingrese el ID a eliminar: ");
                            winery.removeProduct(aux);
                            break;
                        case 4:
                            cout << winery.showProducts() << endl;
                            break;
                        case 5:
                            aux = Input::readInt("Ingrese el ID a verificar: ");
                            if (winery.existProduct(aux)) {
                                cout << "El producto con ID: " << aux << " existe." << endl;
                            } else {
                                cout << "El producto con ID: " << aux << " no existe." << endl;
                            }
                            break;
                        case 6:
                            // Agregar personal (no implementado)
                            break;
                        case 7:
                            aux = Input::readInt("Ingrese el ID a eliminar: ");
                            winery.removeStaff(aux);
                            break;
                        case 8:
                            cout << winery.getStaff() << endl;
                            break;
                        case 9:
                            aux = Input::readInt("Ingrese el ID a verificar: ");
                            if (winery.existStaff(aux)) {
                                cout << "El personal con ID: " << aux << " existe." << endl;
                            } else {
                                cout << "El personal con ID: " << aux << " no existe." << endl;
                            }
                            break;
                        case 10:
                            cout << "Saliendo del menú de bodega..." << endl;
                            break;
                        default:
                            cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                    }
                } while (wchoise != 10);
                break;  // Este `break` es para el `case 1` del `switch` principal.
            }
            case 2: {
                // Aquí iría el manejo de cliente.
                break;
            }
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
        }
    } while (choise != 3);
    return 0;
}