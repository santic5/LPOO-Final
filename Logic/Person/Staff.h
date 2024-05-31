#ifndef STAFF_H
#define STAFF_H
// TODO: i can make who the staff remove the defeated products. I can create a lis of products defeated.
// TODO: Staff class can transport  the objects into the winery. I mean, theres can be a time to transport the object out the winery.
// Queue homeworks maybe?
// TODO: MAYBE I CAN CREATE A OBJECT CALLED: ORDER // SOLVED
#include "Person.h"
class Staff : public Person{
    private:
        string jobTitle;
        float salary;
        float timeWorking;
    public: 
        Staff(string name, int identification, string adress, int age, string jobTitle, float salary);
        string getJobTitle();
        float getSalary();
        float getTimeWorking();
        bool operator==(Staff staff);
        void serialize(ostream& out) override;
        void deserialize(istream& in) override;
};
#endif