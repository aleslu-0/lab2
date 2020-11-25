#include <iostream>
#include <vector>
#include <string>
using namespace std;

void initi(vector<string>&name) {
    string rm;
    cout << "Are you sure? (y/n)" << endl;
    cin >> rm;
    if (rm == "y") {
        name.clear();
        cout << "Cleared." << endl;
    }
    else if (rm == "n") {
        cout << "Returning to menu." << endl;
    }
    else {
        cout << "Invalid output" << endl;
    }
}

void insert(vector<string>&name) {
    while (true) {
        string s;
        cout << "Name to insert:" << endl;
        cin >> s;
        if (s == "q" || s == "Q") {
            break;
        }
        name.insert(name.begin(), s);
    }
}

void search(vector<string>&name) {
    string str;
    cout << "Name to search: ";
    cin >> str;
    int len = str.length();
    string sstr;
    int size = name.size();
    //Using substring, check if substring is in each element
    for (int k = 0; k < size; k++) {
        sstr = name[k].substr(0, len);
        if (sstr == str) {
            cout << name[k] << endl;
        }
    }
}
void delete_nam(vector<string>&name) {
    string str;
    cout << "Name to delete:" << endl;
    cin >> str;
    for (int k = 0; k < name.size(); k++) {
        if (name[k] == str) {
            cout << name[k] << " was deleted" << endl;
            name.erase(name.begin());           
        }
    }
}
void print(vector<string>&name) {
    for (int k = 0; k < name.size(); k++) {
        cout << name[k] << endl;
    }
}
int main()
{
    vector<string>name;
    while (true) {
        
        int inp = 0;
        cout << "1. Initialise database" << endl;
        cout << "2. Insert" << endl;
        cout << "3. Search" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Print" << endl;
        cout << "6. Quit" << endl;       
        cin >> inp;
        
        if (inp == 1) {
            initi(name);           
        }
        else if (inp == 2) {
            insert(name);
        }
        else if (inp == 3) {
            search(name);
        }
        else if (inp == 4) {
            delete_nam(name);
        }
        else if (inp == 5) {
            print(name);
        }
        else if (inp == 6) {
            return 0;
        }
        else {
            cout << "Invalid input.";
        }

    }
    return 0;
}
