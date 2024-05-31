#ifndef OUTPUT_H
#define OUTPUT_H

#include <iostream>
using namespace std;

class Output{
    public:

    static void actMenu() {
    cout << "===== ACTUAR COMO =====" << endl;
    cout << "1. Bodega" << endl;
    cout << "2. Cliente" << endl;
    cout << "3. Salir" << endl;
    cout << "=======================" << endl;
    }

    static void wineryMenu(){
        cout << "===== MENÚ DE BODEGA =====" << endl;
        cout << "1. Mostrar información" << endl;
        cout << "2. Agregar producto" << endl;
        cout << "3. Remover producto" << endl;
        cout << "4. Listar productos" << endl;
        cout << "5. Verificar producto" << endl;
        cout << "6. Agregar personal" << endl;
        cout << "7. Remover personal" << endl;
        cout << "8. Listar personal" << endl;
        cout << "9. Verificar personal" << endl;        
        cout << "10. Salir" << endl;
        cout << "==========================" << endl;
    }

    static void productMenu() {
    cout << "===== MENÚ DE COMIDA =====" << endl;
    cout << "1. Crear un nuevo producto alimenticio" << endl;
    cout << "2. Crear un nuevo electrodoméstico" << endl;
    cout << "3. Crear un nuevo producto inteligente" << endl;
    cout << "4. Crear un nuevo producto normal" << endl;
    cout << "5. Salir" << endl;
    cout << "==========================" << endl;
    }


};
#endif