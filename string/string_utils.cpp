#include "string_utils.hpp"
#include <string>
#include <iostream>

using namespace std;

int string_length(const string& s) {
    int length = 0;
    for (char c : s) {
        length++;
    }
    return length;
}

void reverse_string(string& s) {
    int j = 0;
    string temp = s;

    for (int i = string_length(s)- 1; i >= 0; i--) {
        s[j] = temp[i];
        j++;
    }
}

int count_char(char c, const string& s) {
    int count = 0;
    for (int i = 0; i <= string_length(s)-1; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

bool contains_char(char c, const string& s) {
    for (int i = 0; i <= string_length(s)-1; i++) {
        if (s[i] == c) {
            return true;
        }
    }
    return false;
}

int find_char(char c,const string& s) {
    for (int i = 0; i <= string_length(s)-1; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    cout<<"char not found"<<endl;
    return -1;
}
bool palindrome(const string& s) {
    int n = string_length(s);
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i]) {
            return false;
        }
    }
    return true;
}
bool digit_only(const string& s) {
    int n = string_length(s);
    for (int i = 0; i <= n-1; i++) {
        if (s[i] < '0' || s[i] > '9') {return false;}
    }
    return true;
}
string insert(const int n, string& s, char c) {
    string temp="";
    if(n==0) temp=c+s;
    else{
        for(int i=0;i<=string_length(s)-1;i++){
            temp+=s[i];
            if(i==n-1) {
                temp+=c;
            }
        }
    }
    return temp;
}