#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSorted(int* arr) {
    for (int k = 0; k < 2; k++) {
        if (arr[k] > arr[k + 1]) {
            return false;
        }
    }
    return true;
}
bool isPalindrome(char* arr, int len) {
    for (int k = 0; k < (len / 2) + 1; k++) {
        if (arr[k] != arr[len - k]) {
            return false;
        }
    }
    return true;
}
void func(int arr[20][20], int x, int y) {
    int sumlist[20];
    //adding
    for (int m = 0; m < x; m++) {
        for (int k = 0; k < y; k++) {
            int randn = rand() % 10;
            arr[m][k] = randn;
        }
    }

    //printing row sums
    int sum5 = 0;
    for (int m = 0; m < x; m++) {
        int sum = 0;
        for (int k = 0; k < y; k++) {
            cout << arr[m][k] << '\t';
            sum += arr[m][k];
        }
        sumlist[m] = sum;
        cout << sum << endl;
        sum5 += sum;
    }
    //add sum of sums
    int sum3 = 0;
    for (int u = 0; u < x; u++) {
        sum3 += sumlist[u];
    }

    //print column sums
    for (int z = 0; z < y; z++) {
        int sum2 = 0;
        for (int c = 0; c < x; c++) {
            sum2 += arr[c][z];
        }
        cout << sum2 << '\t';
    }
    cout << sum3 + sum5;
}
void swap_sort(int a, int b, int c, bool sort) {
    if (sort) {
        //cout << "true";
        if (a >= b && a >= c) {
            if (b >= c) {
                cout << c << " " << b << " " << a;
            }
            else if (c >= b) {
                cout << b << " " << c << " " << a;
            }
        }
        else if (b >= a && b > c) {
            if (a > c) {
                cout << c << " " << a << " " << b;
            }
            else if (c >= a) {
                cout << a << " " << c << " " << b;
            }
        }
        else if (c >= a && c >= b) {
            if (b >= a) {
                cout << a << " " << b << " " << c;
            }
            else if (a >= b) {
                cout << b << " " << a << " " << c;
            }
        }
    }
    else {
        //cout << "false";
        if (a >= b && a >= c) {
            if (b >= c) {
                cout << a << " " << b << " " << c;
            }
            else if (c >= b) {
                cout << a << " " << c << " " << b;
            }
        }
        else if (b >= a && b >= c) {
            if (a >= c) {
                cout << b << " " << a << " " << c;
            }
            else if (c >= a) {
                cout << b << " " << c << " " << a;
            }
        }
        else if (c >= a && c >= b) {
            if (b >= a) {
                cout << c << " " << b << " " << a;
            }
            else if (a >= b) {
                cout << c << " " << a << " " << b;
            }
        }
    }
    cout << endl;
}
void shrink_array(int* arr, int size) {
    int w = 0;
    int shrink = 0;
    for (int k = 0; k < size; k = k + 2) {
        if (size % 2 != 0 && k == size - 1) {
            shrink = arr[k];
        }
        else {
            shrink = arr[k] + arr[k + 1];
        }

        arr[w] = shrink;
        w += 1;
    }
    for (int z = w; z < size; z++) {
        arr[w] = 0;
        w += 1;
    }
}
void initi(vector<string>& name) {
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

void insert(vector<string>& name) {
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

void search(vector<string>& name) {
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
void delete_nam(vector<string>& name) {
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
void print(vector<string>& name) {
    for (int k = 0; k < name.size(); k++) {
        cout << name[k] << endl;
    }
}

//int main()
//{
//
//}
