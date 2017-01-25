int solution(vector<int> &A) 
{
    // write your code in C++11 (g++ 4.8.2)
    int n=A.size();
    int gains=0;
    int potGain=0;
 
    if(n==0){return 0;}
 
    for(int i=n-1;i>0;i--)
    { A[i]-=A[i-1]; }
    A[0]=0;
    
    for(int i=0;i<n-1;i++)
    {
        if(A[i]*A[i+1]>0){A[i+1]+=A[i];A[i]=0;}
    }
  
    if(A.back()<0){A.back()=0;}
    for(int i=n-1;i>0;i--)
    {
        if(A[i]>0){potGain+=A[i];}
        if(A[i]<0){potGain=A[i]+potGain>0?A[i]+potGain:0;}        
        gains= max(gains,potGain);
    }
    
    return gains;
}


//Other solution
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int n=A.size();
    int max=0;
    int potProf=0;
    
    if(n<2){return 0;}
    
    for(int i=0;i<n-1;i++){
        A[i]=A[i+1]-A[i];    
        }
    A.pop_back();
    
    for(int j=0;j<A.size();j++){
        if(potProf+A[j]>0){
        potProf+=A[j];
        max=max>potProf?max:potProf;
        }
        else{
        potProf=0;
        }
    }
 
    return max;
}
