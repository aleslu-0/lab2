#include <iostream>
using namespace std;

bool isPalindrome(char* arr, int len) {
    //Compare first char with last with an increase of 1 per iteration
    for (int k = 0; k < (len/2)+1; k++) {
        if (arr[k] != arr[len - k]) {
            return false;
        }       
    }          
    return true;
}
int main()
{   
    //Works with words not sentences
    char str[256];
    cout << "Enter word to test: ";    
    cin.getline(str, 256);
    int inp_len = strlen(str) - 1;
    cout << boolalpha << isPalindrome(str, inp_len);
    return 0;
    
}
