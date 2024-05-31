#include "Input.h"
#include <limits> // para usar std::streamsize
#include <iostream>

using namespace std;

const string Input::readString(const char *message) { 
    string data;
    cout << message;
    getline(cin, data);
    return data;
}

const int Input::readInt(const char *message) { 
    int data;
    cout << message;
    cin >> data;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el búfer de entrada
    return data;
}

const int Input::readInt() { 
    int data;
    cin >> data;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el búfer de entrada
    return data;
}

const float Input::readFloat(const char *message) { 
    float data;
    cout << message;
    cin >> data;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el búfer de entrada
    return data;
}

FoodProduct Input::readFoodProduct(){
    string name = readString("Ingrese el nombre del producto alimenticio: ");
    string dueDate = readString("Ingrese la fecha de vencimiento del producto alimenticio: ");
    string brand = readString("Ingrese la marca del producto alimenticio: ");
    int stock = readInt("Ingrese el stock del producto alimenticio: ");
    int id = readInt("Ingrese el ID del producto alimenticio: ");
    float unitPrice = readFloat("Ingrese el precio unitario del producto alimenticio: ");
    
    return FoodProduct(name, dueDate, brand, stock, id, unitPrice);
}

HomeApplianceProduct Input::readHomeApplianceProduct() {
    string name = readString("Ingrese el nombre del electrodomestico: ");
    string brand = readString("Ingrese la marca del electrodomestico: ");
    int stock = readInt("Ingrese el stock del electrodomestico: ");
    int id = readInt("Ingrese el ID del electrodomestico: ");
    float unitPrice = readFloat("Ingrese el precio unitario del electrodomestico: ");
    float weight = readFloat("Ingrese el peso del electrodomestico: ");
    float length = readFloat("Ingrese la longitud del electrodomestico: ");
    float width = readFloat("Ingrese el ancho del electrodomestico: ");
    float height = readFloat("Ingrese la altura del electrodomestico: ");

    return HomeApplianceProduct(name, brand, stock, id, unitPrice, weight, length, width, height);


}
SmartProduct Input::readSmartProduct(){
    string name = readString("Ingrese el nombre del producto inteligente: ");
    string brand = readString("Ingrese la marca del producto inteligente: ");
    int stock = readInt("Ingrese el stock del producto inteligente: ");
    int id = readInt("Ingrese el ID del producto inteligente: ");
    float unitPrice = readFloat("Ingrese el precio unitario del producto inteligente: ");
    float weight = readFloat("Ingrese el peso del producto inteligente: ");
    float length = readFloat("Ingrese la longitud del producto inteligente: ");
    float width = readFloat("Ingrese el ancho del producto inteligente: ");
    float height = readFloat("Ingrese la altura del producto inteligente: ");
    string os = readString("Ingrese el sistema operativo del producto inteligente: ");
    string connectivity = readString("Ingrese la conectividad del producto inteligente: ");
    return SmartProduct(name, brand, stock, id, unitPrice, weight, length, width, height, os, connectivity);
}

Product Input::readProduct() {
    string name = readString("Ingrese el nombre del producto alimenticio: ");
    string brand = readString("Ingrese la marca del producto alimenticio: ");
    int stock = readInt("Ingrese el stock del producto alimenticio: ");
    int id = readInt("Ingrese el ID del producto alimenticio: ");
    float unitPrice = readFloat("Ingrese el precio unitario del producto alimenticio: ");
    
    return Product(name, brand, stock, id, unitPrice);
}
// need to create default product