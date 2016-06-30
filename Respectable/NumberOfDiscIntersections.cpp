// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    
int res=0; 
    int n=A.size();
    vector<int> captures(n,0);
    int temp=0;
    for(int i=0;i<n-1;i++)
   {
     temp=i+A[i]>n-1?n-1:i+A[i];
     captures[temp]++;
    }
     
 for(int i=n-1;i>0;i--)
  {        captures[i-1]+=captures[i];
   }
    
    int l=0; 
    for(int i=1;i<n;i++)  
  {
      l=(n-i)-A[n-i]>=0?(n-i)-A[n-i]:0;
      res+=captures[l]-i+1;
      if(res>10000000){return -1;}
    }

    return res;
}
