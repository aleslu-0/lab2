#include <iostream>
using namespace std;

bool isSorted(int* arr) {
    //Compare element 1 and 2 with the next element
    for (int k = 0; k < 2; k++) {
        if (arr[k] > arr[k+1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int iarr[3] = {};
    //Add 3 values to array
    for (int k = 0; k < 3; k++) {
        int x;
        cout << "Input value: " << endl;
        cin >> x;
        iarr[k] = x;
    }
    cout << "Sorted: " << boolalpha << isSorted(iarr);
}
