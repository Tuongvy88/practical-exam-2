#include <iostream>
using namespace std;
// declare a function
void print_ascending(int *vals, int len){
// access the array using for loop
for(int i=0; i<len-1; i++){
// if right element is greater than left element the break the loop
if(vals[i]>vals[i+1]){
break;
}
// otherwise
else{
cout<<vals[i]<<" ";
}
}
}