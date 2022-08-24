#include<iostream>
#include "function-2-1.cpp"
using namespace std;

int main(){
	
	//create a loop to call lookup_month 
	for(int i=0;i<15;i++){
		
		cout << "calling month_lookup(" << i << ") =>    " << month_lookup(i) << endl;
		
	}
	
	return 0;
	
}