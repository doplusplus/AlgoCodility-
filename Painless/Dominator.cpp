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
