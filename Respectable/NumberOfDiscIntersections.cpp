
int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    
    long res=0; 
    int n=A.size();
    vector<int> captures(n,0);
    
    long temp=0;
    for(int i=0;i<n-1;i++) {
     temp=(long)i+(long)A[i];
     if(temp>n-1){temp=n-1;}
     captures[temp]++;
    }
     
    for(int i=n-1;i>0;i--) {
     captures[i-1]+=captures[i];
    }
    
    long l=0; 
    for(int i=1;i<n;i++) {
      l=(n-i)-A[n-i]>=0?(n-i)-A[n-i]:0;
      res+=captures[l]-i+1;
      if(res>10000000){return -1;}
    }

return res;
}
