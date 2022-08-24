#include<iostream>
#include "function-2-1.cpp"
using namespace std;

//test function
int main(){
	
	//create a loop to call lookup_month repeatedly
	for(int i=0;i<15;i++){
		
		//call month_lookup
		cout << "calling month_lookup(" << i << ") =>    " << month_lookup(i) << endl;
		
	}
	
	return 0;
	
}