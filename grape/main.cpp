#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void search(int i, string word, string row) {
    if (row.find(word) != string::npos) {
        cout <<"found "<<word<<" in row "<<i<<": "<<row<< endl;
    }
}

int count(string word, string row) {
    return (row.find(word) != string::npos) ? 1 : 0;
}

void count_per_line(int i, string word, string row) {
    int j = 0;

    if (row.find(word) != string::npos) {
        j++;
    }

    cout <<j<<" "<<word<<" in row  "<<i<<": "<<row<< endl;
}

int main() {

    string filename;
    int choice;
    string word;
    string row;
    cout << "enter filename: ";
    cin >> filename;
    cout << "What you wanna do? (1=find word, 2=count in file, 3=count per line, 0=exit): ";
    cin >> choice;

    if (choice == 0) return 0;

    cout << "type word: ";
    cin >> word;

    fstream file(filename, ios::in);

    int i = 0;
    if (choice == 2) {
        int k = 0;

        while (getline(file, row)) {
            k += count(word, row);
        }

        cout << k << " " << word << " in file" << endl;
    }
    else {
        while (getline(file, row)) {
            i++;

            if (choice == 1) {
                search(i, word, row);
            }
            else if (choice == 3) {
                count_per_line(i, word, row);
            }
            else {
                cout << "wrong choice" << endl;
                break;
            }

            cout << '\n';
        }
    }

    file.close();
    return 0;
}