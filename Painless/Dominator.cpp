 #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    
    int n=A.size();
    if(n==0){return -1;}

    int candidate=A[0];
    int index=0;
    int numb=1;
    
    int i=1;
    while(i<n)
    {
        if(A[i]==candidate){numb++;}
        else
        {
         numb--;    
         if(numb==0){candidate=A[i+1];index=i+1;i++;numb++;}
        }        
       i++;
    }
    numb=count(A.begin(),A.end(),candidate);
    return numb>n/2?index:-1;
}



//different solution

#include <algorithm>
#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> decomp(64, 0);
    int n=A.size();
 int t,k;
    for(int i=0;i<n;i++){
    t=A[i];
    k=0;     
        while(t>=1){
            decomp[k]+=t%2;                   
            t/=2;
            k++;   
        }
    }
    
    int dom=0;
    for(int i=0;i<64;i++){
        if(decomp[i]>n/2){dom+=pow(2,i); }        
    }
    
    if(count(A.begin(), A.end(), dom)<=n/2){
        return -1;
    } 
   return find(A.begin(), A.end(), dom)-A.begin();
}
