
int solution(int A, int B, int K) {
    // write your code in C++11 (g++ 4.8.2)    
    int rA=A%K;    
    int diff=B-A;  
    int div=diff/K;
    if(rA==0){return ++div;}
    else {if(diff%K+rA>=K){div++;}}
    
    return div;
}
