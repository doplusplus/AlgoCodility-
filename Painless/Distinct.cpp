int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    
    int n=A.size();
    if(n==0) return 0;
    
    int count=1;
    sort(A.begin(),A.end()); //nLog(n)
    for(int i =0;i<n-1;i++)
    {
        if(A[i]!=A[i+1]){count++;}    
    }
    return count;
}
