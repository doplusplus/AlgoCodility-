int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    vector<int> B(A.size(),0);
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<=A.size()&&A[i]>0)
        {B[A[i]-1]++;}
    }
    
    for(int j=0;j<B.size();j++)
    {
        if(B[j]==0){return j+1;}    
    }
    
    return A.size()+1;
}
