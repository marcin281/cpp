#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

bool file_line(ifstream& file,string& line) {
    char c;
    line.clear();
    while(file.get(c)) {
        if(c=='\n') {break;}
        line+=c;
    }
    return !line.empty() || file.good();
}

int main() {
    ifstream file;
    string line;
    file.open("input.txt", ios::in);
    while(file_line(file, line)) {
        cout<<line<<endl;
    }
    file.close();
    return 0;
}