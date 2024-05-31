#include "SmartProduct.h"

SmartProduct::SmartProduct(string name, string brand, int stock, int id, float unitPrice, float weight, float length,
float width, float height, string os, string connectivity):HomeApplianceProduct(name, brand, stock, id, unitPrice, weight, length,
width, height){
    this->os = os;
    this->connectivity = connectivity;
}
string SmartProduct::getOS(){
    return this->os;
}
string SmartProduct::getConnectivity(){
    return this->connectivity;
}
bool SmartProduct::isUpdatePending(){
    return updatePending;
}
string SmartProduct::toString() {
    return HomeApplianceProduct::toString() + "   Sistema Operativo: " + this->os + string("\n") +
           "   Conectividad: " + this->connectivity + string("\n") +
           "   Actualización Pendiente: " + to_string(updatePending);
}