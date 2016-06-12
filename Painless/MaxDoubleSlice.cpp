int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
  int n=A.size();    
    vector<int> LCut(n-2,0); LCut[0]=A[0];
    for(int i=1;i< n-2;i++)
    {        LCut[i]=A[i]+LCut[i-1];    }
 
    for(int i=1;i< LCut.size();i++)
    {        if( LCut[i-1]< LCut[i]){LCut[i] = LCut[i-1];}   }
        
 
    vector<int> RCut(n-2,0); RCut[n-3]=A[n-1];

    for(int i=n-2;i>=2;i--)
    {        RCut[i-2]=A[i]+RCut[i-1];   }
   
    for(int i=RCut.size()-2;i>=0;i--)
    {        if( RCut[i+1]< RCut[i]){RCut[i] = RCut[i+1];}  }
    
    int min = LCut[0]+A[1]+RCut[0];
 
    for (int j=2;j<A.size()-1;j++)
    {
      
        if(min>LCut[j-1]+A[j]+RCut[j-1]){min=LCut[j-1]+A[j]+RCut[j-1];}    
    }
  
    long sum=0;
    for (int e:A){sum+=e;}
    
    return sum-min;
}
