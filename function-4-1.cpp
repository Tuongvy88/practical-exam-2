#include <iostream>
using namespace std;


int* matrix_min_max(int **vals, int num_rows, int num_cols){
	int* mm = new int[2];

	mm[0] = mm[1] = vals[0][0];

	for(int i=0; i<num_rows; i++){
		for(int j=0; j<num_cols; j++){

			//finding the numebr of max element
            if(mm[1] > vals[i][j]){
				mm[1] = vals[i][j];
			}

			//finding min element
            if(mm[0] < vals[i][j]){
				mm[0] = vals[i][j];
			}
		}
	}

	return mm;
}