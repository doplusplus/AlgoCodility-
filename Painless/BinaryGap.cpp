
int solution(int N) {
    // write your code in C++11 (g++ 4.8.2)
    
    int MaxCount=0;
    int tempCount=0;
    bool count=false;
    
    while(N>=1)
    {
        if(N%2==1)
        {
         count=true;
         MaxCount=tempCount>MaxCount?tempCount:MaxCount;  
         tempCount=0;
        }
        if(N%2==0&&count==true){tempCount++;}
        N=(int)N/2;
    }
    
    return MaxCount;
}
