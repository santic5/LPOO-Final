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

void Staff::serialize(ostream& out){
    out << name << "\n";
    out << identification << "\n";
    out << adress << "\n";
    out << age << "\n";
    out << jobTitle << "\n";
    out << salary << "\n";
    out << timeWorking << "\n";
}

void Staff::deserialize(istream& in){
    getline(in, name);
    in.ignore();
    in >> identification;
    in.ignore();
    getline(in, adress);
    in.ignore();
    in >> age;
    in.ignore();
    getline(in, jobTitle);
    in.ignore();
    in >> salary;
    in.ignore();
    in >> timeWorking;            
}