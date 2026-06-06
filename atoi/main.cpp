#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int toint(string s) {
    int output = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            output = output * 10 + (s[i] - '0');
        }
        else {
            return output;
        }
    }
    return output;
}

int main() {
    string word;
    cin >> word;
    int const number=toint(word);
    cout<<number<<endl;
    //48-39
    return 0;
}