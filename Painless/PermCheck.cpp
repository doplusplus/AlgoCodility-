#include <algorithm>

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int n =A.size();
    vector<int> B(n,0);
    
    for(int i=0;i<n;i++)
    {
        if(A[i]<=n)
        { B[A[i]-1]=A[i];}
    }
    
    return *min_element(B.begin(),B.end());
}
