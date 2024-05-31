#ifndef LOGS_H
#define LOGS_H

#include "File.h"
#include <iostream>
using namespace std;

class LogFile : public File {
public:
    LogFile(const string& filename) : File("Database/Files/"+filename) {}

    void write(const string& key, const string& value) override {
        data[key] = value;
        saveData();
    }

    void read() const override {
        loadData();
        cout << "Logs in " << filename << ":\n";
        for (const auto& entry : data) {
            cout << entry.first << ": " << entry.second << "\n";
        }
    }
    
};

#endif
