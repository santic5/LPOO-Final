#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
protected:
    string name;
    string adress;
    int identification;
    int age; 
public:
    Person(string name, int identification, string adress, int age);
    ~Person();
    string getName();
    string getAdress();
    int getIdentification();
    int getAge();
    virtual void serialize(ostream& out) = 0;
    virtual void deserialize(istream& in) = 0;
};

#endif