int solution(int X, vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    
     vector<int> Leaves(X,-1);
     
     for(int t=0;t<A.size();t++)
     {
        if(Leaves[A[t]-1]==-1){Leaves[A[t]-1]=t;}          
     }
     
     auto min=min_element(Leaves.begin(),Leaves.end());
     if(*min==-1){return -1;}
     
     return *max_element(Leaves.begin(),Leaves.end());
}
