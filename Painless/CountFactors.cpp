#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    if(N==1){return 1;}
    
    int fact=0;
    int s=sqrt(N);
    for(int i=1;i<sqrt(N);i++)
    {
            if(N%i==0) {fact+=2;}
    }  
  
    if(s*s==N){fact++;}
    
    return fact;
}
