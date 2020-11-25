#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

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
    //sum of rows and columns at the end
    cout << sum3 + sum5;
}

int main()
{
    srand(time(NULL));
    int x;
    int y;
    cout << "Rows: ";
    cin >> x;
    cout << "Columns: ";
    cin >> y;    
    int arr[20][20];
    func(arr, x, y);

    return 0;
}
