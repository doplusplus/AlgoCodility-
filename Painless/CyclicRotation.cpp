
vector<int> solution(vector<int> &A, int K) {
    // write your code in C++11 (g++ 4.8.2)
   
    int n=A.size();
    if(K==0||n==0) return A;
    
    K=K%n;   
    vector<int> B(n,0);
    for(int i=0;i<n-K;i++){B[i+K]=A[i];}
    for(int i=0;i<K;i++){B[i]=A[n-K+i];}
     
     return B;
}
