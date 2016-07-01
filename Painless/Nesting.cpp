
int solution(string &S) {
    // write your code in C++11 (g++ 4.8.2)
    
    int count=0;
    for(int i=0;i<S.size();i++)
    {
        if(S[i]=='(') count++;
        else{count--;}
        if(count<0) return 0;
    }
    
    return count!=0?0:1;
}
