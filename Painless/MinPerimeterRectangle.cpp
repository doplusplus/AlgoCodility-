#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)

int a=sqrt(N);
while(N%a!=0){a--;}
int b=N/a;

long p=2*(a+b);
return p;
}
