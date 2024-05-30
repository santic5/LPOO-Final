#include "Staff.h"

Staff::Staff(string name, int identification, string adress, int age, string jobTitle, float salary):
Person(name, identification,adress, age){
    this->jobTitle = jobTitle;
    this->salary = salary;
    this->timeWorking = 0.1; // decimal means month
}

string Staff::getJobTitle(){
    return this->jobTitle;
}

float Staff::getSalary(){
    return this->salary;
}

float Staff::getTimeWorking(){
    return this->timeWorking;
}

bool Staff::operator==(Staff staff){
    if(identification == staff.getIdentification()){
        return true;
    }
    return false;
}