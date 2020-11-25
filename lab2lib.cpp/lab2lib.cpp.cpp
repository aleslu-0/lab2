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
            int test = rand() % 10;
            arr[m][k] = test;
        }
    }

    //printing row sums
    int sum5 = 0;
    for (int m = 0; m < x; m++) {
        int sum = 0;
        for (int k = 0; k < y; k++) {
            cout << arr[m][k] << " ";
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
        cout << sum2 << " ";
    }
    cout << sum3 + sum5;
}
void swap_sort(int a, int b, int c, bool sort) {
    if (sort) {
        //cout << "true";
        if (a >= b && a >= c) {
            if (b >= c) {
                cout << c << b << a;
            }
            else if (c >= b) {
                cout << b << c << a;
            }
        }
        else if (b >= a && b > c) {
            if (a > c) {
                cout << c << a << b;
            }
            else if (c >= a) {
                cout << a << c << b;
            }
        }
        else if (c >= a && c >= b) {
            if (b >= a) {
                cout << a << b << c;
            }
            else if (a >= b) {
                cout << b << a << c;
            }
        }
    }
    else {
        //cout << "false";
        if (a >= b && a >= c) {
            if (b >= c) {
                cout << a << b << c;
            }
            else if (c >= b) {
                cout << a << c << b;
            }
        }
        else if (b >= a && b >= c) {
            if (a >= c) {
                cout << b << a << c;
            }
            else if (c >= a) {
                cout << b << c << a;
            }
        }
        else if (c >= a && c >= b) {
            if (b >= a) {
                cout << c << b << a;
            }
            else if (a >= b) {
                cout << c << a << b;
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
int main()
{
    std::cout << "Hello World!\n";
}
