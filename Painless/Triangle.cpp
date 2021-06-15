#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)

if(A.size()==0){return 0;}
sort(A.begin(),A.end());
vector<int> B;
for(int i=0;i<A.size()-1;i++)
{
    B.push_back(A[i+1]-A[i]);
}

for (int j=A.size()-3;j>=0;j--)
{
    if(A[j]>B[j+1]){return 1;}
}
return 0;
}



//Simpler
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int n = A.size();
    if(n<3){return 0;}
    std::sort(A.begin(),A.end());
    for(int i=0; i<n-2 ; ++i){
        if(  A[i] > A[i+2] - A[i+1]){
            return 1;
        }
    }
    return 0;
}
