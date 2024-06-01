#include "Winery.h"

// Problems: The winery is literally infinite xd // SOLVED
Winery::Winery(){
    this->name = "";
    this->adress = "";
    this->capacity = 100;
    this->filling = 0;
    this->products = new list<Product>; // I SEE SOMETHING INTERESTING WHO CAN MAKE THIS DIFFERENT, I CAN MAKE A MAP IN THIS PLACE
    this->staff = new list<Staff>;
}
Winery::Winery(string name, string adress, int capacity){
    this->name = name;
    this->adress = adress;
    this->capacity = capacity;
    this->filling = 0;
    this->products = new list<Product>; // I SEE SOMETHING INTERESTING WHO CAN MAKE THIS DIFFERENT, I CAN MAKE A MAP IN THIS PLACE
    this->staff = new list<Staff>;
    // WHO CAN HAVE THE ID AS KEY AND THE PRODUCT AS THE ELEMENT. TO MAKE THIS I NEED TO REMOVE ID ATRIBUTE FROM PRODUCT AND ADD THEM HERE
}
Winery::~Winery(){
    delete products;
}
string Winery::getName(){
    return this->name;
}
string Winery::getAdress(){
    return this->adress;
}
int Winery::getCapacity(){
    return this->capacity;
}
int Winery::getFilling(){
    return this->filling;
}
string Winery::toString(){
    return string("\n") + "Bodega " + string("\n") + "Nombre: " + this->name + " (" + this->adress + ")" + string("\n") +
    "Capacity status: " + to_string(this->filling) + "/" + to_string(this->capacity) + string("\n") +
    "Products: " + to_string(this->products->size()) + string("\n");
}
list<Product>* Winery::getProducts(){
    return this->products;
}
Product Winery::getProduct(int id){
    try{
        if(!(existProduct(id))){
            throw runtime_error("ERROR: THE SELECTED ID DOESNT EXIST IN THE DATABASE. RETURNING FIRST PRODUCT. \n");
        }
        for(Product prod : *products){
            if(id == prod.getId()){   
                return prod;
            }
        }
    }catch(runtime_error e){
        cerr << e.what();
    }
    return this->products->front();
}
void Winery::addProduct(Product &product){
    try{
        if(capacity == filling){
            throw runtime_error("ERROR: THE CAPACITY IS FULL");
        }
        Product *pr = &product;
        this->products->push_back(*pr);
        this->filling += product.getStock();
    }catch(runtime_error e){
        cerr << e.what();
    }
}
void Winery::removeProduct(Product &product){
    try{
        if(!(existProduct(product))){
            throw runtime_error("ERROR: THE SELECTED PRODUCT DOES'NT CORRESPOND TO ANY PRODUCT \n");
        }
        Product *pr = &product;
        this->products->remove(*pr);
        this->filling -= product.getStock();
    }catch(runtime_error e){
        cerr << e.what();
    }
}
// TODO: USE DEFAULT ERRORS TO CHECK IF ELEMENT IS IN THE LIST. 
void Winery::removeProduct(int id){
    try{
        if(!(existProduct(id))){
            throw runtime_error("ERROR: THE SELECTED ID DOES'NT CORRESPOND TO ANY PRODUCT \n");
        }
        Product pr = getProduct(id);
        this->products->remove(pr);
        this->filling -= pr.getStock();
    }catch(runtime_error e){
        cerr << e.what();
    }
}
bool Winery::existProduct(Product &product){
    for(const auto& element : *products){
        if(&element == &product){
            return true;
        }
    }
    return false;
}
bool Winery::existProduct(int id){
    for(Product prod : *products){
        if(prod.getId() == id){
            return true;
        }
    }
    return false;
}
string Winery::showProducts(){
    string statement = "Productos en Bodega:\n";
    int i = 1;
    for (auto& prod : *products) {
        statement += to_string(i) + ". " + prod.toString() + "\n";
        i++;
    }
    return statement;
}
list<Staff>* Winery::getStaff(){
    return this->staff;
}
Staff Winery::getStaff(int id){
    try{
        if(!(existStaff(id))){
            throw runtime_error("ERROR: THE ID DOESNT ASSOCIED WITH ANY STAFF. RETURNING 1ST EMPLOYEE");
        }
        for(Staff employee : *staff){
            if(employee.getIdentification() == id){ 
                return employee;
            }
        }
    }catch(runtime_error e){
        cerr << e.what();
    }
    return staff->front();
}
void Winery::addStaff(Staff &employee){
    try{
        if(existStaff(employee)){
            throw runtime_error("ERROR: THE EMPLOYEE ALREADY EXIST IN THE STAFF");
        }
        staff->push_back(employee);
    }catch(runtime_error e){
        cerr << e.what();
    }
}
void Winery::removeStaff(Staff &employee){
    try{
        if(!(existStaff(employee))){
            throw runtime_error("ERROR: THE EMPLOYEE DOESNT EXIST");
        }
        this->staff->remove(employee); // ?
    }catch(runtime_error e){
        cerr << e.what();
    }
}
void Winery::removeStaff(int id){
    try{
        if(!(existStaff(id))){
            throw runtime_error("ERROR: THE EMPLOYEE DOESNT EXIST");
        }
        Staff employee = getStaff(id);
        this->staff->remove(employee);
    }catch(runtime_error e){
        cerr << e.what();
    }
}
bool Winery::existStaff(int id){
    for(Staff st : *staff){
        if(st.getIdentification() == id){
            return true;
        }
    }
    return false;
}
bool Winery::existStaff(Staff &employee){
    for(Staff st : *staff){
        if(employee == st){
            return true;
        }
    }
    return false;
}
string Winery::showStaff(){
    string statement = "Personal en Bodega" + string("\n");
    int i = 1; 
    for(Staff employee : *staff){
        statement += to_string(i) + ". " + string("\n")
        + employee.toString() + string("\n");
        i++;
    }
    return statement;
}
