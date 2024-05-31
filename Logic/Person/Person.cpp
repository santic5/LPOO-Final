#include "Person.h"

Person::Person(string name, int identification, string adress, int age){
    this->name = name;
    this->adress = adress;
    this->identification = identification;
    this->age = age;
}
Person::Person(){}
Person::~Person(){}
string Person::getName(){
    return this->name;
}
string Person::getAdress(){
    return this->adress;
}
int Person::getIdentification(){
    return this->identification;
}
int Person::getAge(){
    return this->age;
}
