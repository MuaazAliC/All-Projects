#include<iostream>
using namespace std;
char* vowel(char r[], char size);
int main()
{
    const int size = 9;
    char r[size];
    int x = 0;
   
        x++;
        cout << "Enter a string: ";
        cin >> r;
        vowel(r, size);
        
}
char* vowel(char r[], char size) {

    char* ptr = r;
    int k = 0;
    int d = -1;
    for (int i = 0; i < size; i++) {
        
        if (ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u'|| ptr[i] == 'A'
            || ptr[i] == 'E' || ptr[i] == 'I' || ptr[i] == 'O' || ptr[i] == 'U') {
           
            k++;
        }
        else {
            d++;
        }
        
    }
    cout << "The number of vowels are : " << k << endl;
    cout << "The number of constants are : " << d;
    return 0;
}
  
//         webstorm
// (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u'
