#include <iostream>
#include <sstream>
#include "string_utils.hpp"

using namespace std;

int main() {
    string word;
    int n=0;
    cin>>word;
    cout<<word<<endl;
    reverse_string(word);
    cout<<word<<endl;
    reverse_string(word);
    int length = string_length(word);
    cout<<length<<endl;
    char c;
    cin>>c;
    int count=count_char(c, word);
    cout<<count<<endl;
    bool contain=contains_char(c, word);
    cout<<contain<<endl;
    int position=find_char(c, word);
    cout<<position<<endl;
    bool pal=palindrome(word);
    cout<<pal<<endl;
    bool digit=digit_only(word);
    cout<<digit<<endl;
    cin>>c;
    cin>>n;
    insert(n, word, c);
    cout<<word<<endl;
    return 0;
}