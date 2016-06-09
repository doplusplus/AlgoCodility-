
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

