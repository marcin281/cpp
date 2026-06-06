#pragma once
#include <string>

using namespace std;

int string_length(const string& s);
void reverse_string(string& s);
int count_char(char c, const string& s);
bool contains_char(char c, const string& s);
int find_char(char c, const string& s);
bool palindrome(const string& s);
bool digit_only(const string& s);