
int solution(int A, int B, int K) {
    // write your code in C++11 (g++ 4.8.2)    
    int rA=A%K;    
    int diff=B-A;  
    int div=diff/K;
    if(rA==0){return ++div;}
    else {if(diff%K+rA>=K){div++;}}
    
    return div;
}

//other solution

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int res= B/K - A/K;
    if(A%K==0) res++;
    return res;
}
