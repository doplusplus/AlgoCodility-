
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




//Other solution
int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int max=0;
    if(N<5){return 0;}
    
    while(N%2==0){N/=2;}
    N/=2;
    while(N/2>=1){
        int tempMax=0;
        while(N%2==0){
            tempMax++;    
              N/=2; 
            }
            N/=2;
        max=tempMax>max?tempMax:max;
        }
    return max;
}
