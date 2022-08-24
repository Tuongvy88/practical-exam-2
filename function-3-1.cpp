#include <iostream> 
int next_match_count(int vals[], int length){
    
    int cnt = 0;
    for(int i=1; i<length; i++){   
        if(vals[i] == vals[i-1])
           ++cnt;
    }
    
    return cnt;
} 