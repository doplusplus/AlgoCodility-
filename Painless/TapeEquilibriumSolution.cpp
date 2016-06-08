
#include<cmath>

int solution(vector<int> &A) {
    // write your code in C++11
    
    long left = A[0];
    long right=0;
    for (auto s=1;s<A.size();s++)
        {   
            right += A[s];
        }
    auto min = abs(right - left);
    
    for (auto s=1;s<A.size()-1;s++)
        {   
            left  += A[s];
            right -= A[s];
            
            if(abs(right - left) < min){min =abs(right - left);}    
        }
    
    return min;
    
}  


// PERFORMANCE TEST
/*to compare to other solutions
▶ medium_random1 
random medium, numbers from 0 to 100, length = ~10,000 ✔OK
1. 0.009 s OK       0.010 s
▶ medium_random2 
random medium, numbers from -1,000 to 50, length = ~10,000 ✔OK
1. 0.010 s OK       0.010 s
▶ large_ones 
large sequence, numbers from -1 to 1, length = ~100,000 ✔OK
1. 0.015 s OK       0.015 s
2. 0.015 s OK       0.015 s
▶ large_random 
random large, length = ~100,000 ✔OK
1. 0.019 s OK       0.019 s
2. 0.019 s OK       0.018 s
▶ large_sequence 
large sequence, length = ~100,000 ✔OK
1. 0.012 s OK       0.013 s
▶ large_extreme 
large test with maximal and minimal values, length = ~100,000 ✔OK
1. 0.020 s OK       0.020 s
2. 0.020 s OK       0.021 s
3. 0.018 s OK       0.019 s
*/


