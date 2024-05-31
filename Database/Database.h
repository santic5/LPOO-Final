#ifndef DATABASE_H
#define DATABASE_H

#include "file.h"
#include <iostream>
using namespace std;

class DatabaseFile : public File {
public:
    DatabaseFile(const string& filename) : File("Database/Files/"+filename) {}

    void write(const string& key, const string& value) override {
        data[key] = value;
        saveData();
    }

    void read() const override {
        loadData();
        cout << "Database in " << filename << ":\n";
        for (const auto& entry : data) {
            cout << entry.first << ": " << entry.second << "\n";
        }
    }
};

#endif
