#include <iostream>
using namespace std;

void swap_sort(int a, int b, int c, bool sort) {
    if (sort) {
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
int main()
{
    while (true) {
        int a;
        int b;
        int c;
        int order;
        cout << "Give a: ";
        cin >> a;
        cout << "Give b: ";
        cin >> b;
        cout << "Give c: ";
        cin >> c;
        cout << "Sort ascending/descending (1/0), 2 to exit: ";
        cin >> order;
        if (order == 0) {
            swap_sort(a, b, c, false);
        }
        else if (order == 1) {
            swap_sort(a, b, c, true);
        }
        else if (order == 2) {
            return 0;
        }
        else {
            cout << "Wrong input." << endl;
        }
    }     
}
