#include <iostream>
#include <string>
#include <vector>

using namespace std;

//structs
struct Table {
    string name;
    vector<string> columns;
    vector<vector<string>> rows;
};

struct Database {
    vector<Table> tables;
};
//functions
//void insert(table, row) {

//}

int main() {
    Database db;
    //input file()
    while (true) {
        string query;
        cout<<"SQL> ";
        getline(cin,query);
        if (query == "exit") {
            //fstream
            return 0;
        }

    }
}