#include <iostream>
using namespace std;

void shrink_array(int* arr, int size) {
    int w = 0;
    int shrink = 0;
    //Add element plus the next element to the array
    for (int k = 0; k < size; k = k+2) { 
        //If odd number
        if (size % 2 != 0 && k == size-1) {
            shrink = arr[k];
        }
        else {
            shrink = arr[k] + arr[k + 1];
        }
        
        arr[w] = shrink;
        w += 1;
    }
    //Add zeros
    for (int z = w; z < size; z++) {
        arr[w] = 0;
        w += 1;
    }
}
int main()
{
    int arra[7] = { 1, 2, 3, 4, 5, 6, 7};
    
    int s_arr = sizeof(arra) / sizeof(arra[0]);

    //Print array
    for (int x = 0; x < s_arr; x++) {
        cout << arra[x] << " ";
    }
    cout << endl;
    shrink_array(arra, s_arr);

    //Print modified array
    for (int x = 0; x < s_arr; x++) {
        cout << arra[x] << " ";
    }
}
