#include <iostream>
#include <lab2lib.h>
#include <vector>
#include <string>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main()
{
    while (true) {
        int inp = 0;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "3. Task 3" << endl;
        cout << "4. Task 4" << endl;
        cout << "5. Task 5" << endl;
        cout << "6. Task 6" << endl;
        cout << "7. Exit" << endl;
        cout << "Which task would you like to run?: ";
        cin >> inp;
        switch (inp) {
            case 1:
            {
                int iarr[3] = {};
                for (int k = 0; k < 3; k++) {
                    int x;
                    cout << "Input value: " << endl;
                    cin >> x;
                    iarr[k] = x;
                }
                cout << "Sorted: " << boolalpha << isSorted(iarr); 
                cout << endl;
            }
            break;
               
            case 2:
            {
                //Works with words not sentences
                char str[256];
                cout << "Enter word to test: ";
                cin.ignore(1, '\n');
                cin.getline(str, 256);
                int inp_len = strlen(str) - 1;
                cout << boolalpha << isPalindrome(str, inp_len);
                cout << endl;
            }                
            break;

            case 3:
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
                cout << endl;
            }               
            break;

            case 4:
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
            break;

            case 5:
            {
                int arra[7] = { 1, 2, 3, 4, 5, 6, 7 };

                int s_arr = sizeof(arra) / sizeof(arra[0]);
                for (int x = 0; x < s_arr; x++) {
                    cout << arra[x] << " ";
                }
                cout << endl;
                shrink_array(arra, s_arr);

                for (int x = 0; x < s_arr; x++) {
                    cout << arra[x] << " ";
                }
                cout << endl;
            }
                
            break;

            case 6:
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
            }               
            break;

            case 7: 
            {
                return 0;
            }
            break;

            default:
            {
                cout << "Sorry, there is no such task!" << "\n\n";
            }            
        }
    }
}
