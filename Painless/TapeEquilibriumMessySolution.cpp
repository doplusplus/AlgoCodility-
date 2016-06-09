
#include<cmath>

int solution(vector<int> &A) {
    // write your code in C++11
    
    long ref=0;
    for (auto s=1;s<A.size();s++)
        {   
            ref += A[s];
        }
        
    long diff = A[0] - ref;
    ref = abs(diff);
    
    for (auto s=1;s<A.size()-1;s++)
        {   
            diff  += 2 * A[s];
            if(abs(diff) < ref) {ref = abs(diff);}    
        }
    
    return ref;
}  


/* Basically the performances are the same as the clear one only the number of variables differs  */
