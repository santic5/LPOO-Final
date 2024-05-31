#ifndef FILE_H
#define FILE_H

#include <string>
#include <fstream>
#include <map>
using namespace std;

class File {
public:
    File(const string& filename) : filename(filename) {}
    virtual ~File() = default;

    virtual void write(const string& key, const string& value) = 0;
    virtual void read() const = 0;

protected:
    string filename;
    mutable map<string, string> data;

    void loadData() const {
        data.clear();
        ifstream file(filename);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                auto delimiterPos = line.find(":\n");
                if (delimiterPos != string::npos) {
                    string key = line.substr(0, delimiterPos);
                    string value = line.substr(delimiterPos + 1);
                    data[key] = value;
                }
            }
            file.close();
        }
    }

    void saveData() const {
        ofstream file(filename);
        for (const auto& entry : data) {
            file << entry.first << ":\n" << entry.second << "\n";
        }
    }
};

#endif 
