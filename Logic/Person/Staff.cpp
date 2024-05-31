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

string Staff::serialize(){
    std::ostringstream oss;
    oss << "Staff(name: " << name
        << ", identification: " << identification
        << ", address: " << adress
        << ", age: " << age
        << ", jobTitle: " << jobTitle
        << ", salary: " << salary << ")";
    return oss.str();
}

Staff Staff::deserialize(const string& data) {
    string name, address, jobTitle;
    int age, identification;
    double salary;

    size_t pos1 = data.find("name: ") + 6;
    size_t pos2 = data.find(", identification: ");
    name = data.substr(pos1, pos2 - pos1);

    pos1 = pos2 + 17;
    pos2 = data.find(", address: ");
    identification = stoi(data.substr(pos1, pos2 - pos1));

    pos1 = pos2 + 11;
    pos2 = data.find(", age: ");
    address = data.substr(pos1, pos2 - pos1);

    pos1 = pos2 + 6;
    pos2 = data.find(", jobTitle: ");
    age = stoi(data.substr(pos1, pos2 - pos1));

    pos1 = pos2 + 11;
    pos2 = data.find(", salary: ");
    jobTitle = data.substr(pos1, pos2 - pos1);

    pos1 = pos2 + 9;
    pos2 = data.find(")", pos1);
    salary = stod(data.substr(pos1, pos2 - pos1));

    return Staff(name, identification, address, age, jobTitle, salary);
}