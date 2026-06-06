#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

struct student {
    int nr{};
    string name;
    string last_name;
};

vector<student> students;

void add_student() {
    student s;
    cout << "Enter student number: ";
    cin >> s.nr;
    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter student last name: ";
    cin >> s.last_name;
    students.push_back(s);
    cout<<"students added\n";
}

void view_students() {
    if (students.empty()) {
        cout<<"students not added\n";
        return;
    }
    for (int i = 0; i < students.size(); i++) {
        cout<<students[i].nr<<". "<<students[i].name<<" "<<students[i].last_name<<"\n";
    }
}
int main() {
    int choice=0;
    do
     {
        cout<<"choice what you wanna do?"<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
                add_student();
            case 2:
                view_students();
            //case 3:
        }
    }
    while (choice != 0);
    return 0;
}