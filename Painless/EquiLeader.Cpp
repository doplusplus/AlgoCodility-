#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    
    int n=A.size();
    vector<int> L={A[0]};

    for(int i=1;i<n;i++)
    {
        if(L.size()>0&&A[i]!=L.back()){L.pop_back();}
        else{L.push_back(A[i]);}
    }
    
    if(L.size()==0){return 0;}
    
    int leader=L.back();
    int equi=0;
    int nleft=0;
    int nright=count(A.begin(),A.end(),leader);

 for(int i=0;i<n;i++)
    {
     if(A[i]==leader){nleft++;nright--;}   
     if((nleft>(i+1)/2)&&(nright>(n-i-1)/2)){equi++;}        
    }
    
    return equi;
}
