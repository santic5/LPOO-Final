#include <iostream>
using namespace std;

class Utilities{
    public:
        static string getDate(){
            time_t now = time(nullptr);
            tm* date_now = localtime(&now);
            return to_string(date_now->tm_mday) + "/" + to_string(date_now->tm_mon) + "/" + to_string(date_now->tm_year + 1900) + "\n";
        }

};