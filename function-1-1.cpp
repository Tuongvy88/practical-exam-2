#include <iostream>
using namespace std;

void print_ascending(int *vals, int len); {
    // takes an array of integers: val
    //takes length: len
    //prints out elements of vals (separated by spaces) until current element is smaller than previous element 
    //or until reach end of val */

    int max_value = vals[0];

    cout << max_value << ' ';

    for (int i=1; i<len; i++) {
        if (max_value < vals[i]) {
            max_value = vals[i];
            cout << max_value << ' ';
        }
    }

    cout << endl;
}