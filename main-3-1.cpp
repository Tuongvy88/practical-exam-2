#include <iostream>
#include "function-3-1.cpp"
using namespace std;

int main()
{
    int vals[]={1,2,2,2,3,1,1,5,2,2};  //our original array
    int vals_length=10;  //length of array
    
    int res = next_match_count(vals,vals_length);
    
    cout<<"Number of Matches: "<<res;
}