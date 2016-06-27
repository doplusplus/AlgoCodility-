// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) 

{
    // write your code in C++11 (g++ 4.8.2)
  int n=S.size();  
  vector<int> Sp1(n+1,0),Sp2(n+1,0),Sp3(n+1,0),Sp4(n+1,0); 
  
  for(int i=0;i<n;i++)       
 {
    switch(S[i])
    {
    case 'A':    
        Sp1[i+1]++;
        break;        
    case 'C':     
       Sp2[i+1]++;
        break;
    case 'G':    
        Sp3[i+1]++;
        break; 
    case 'T':    
        Sp4[i+1]++;
        break;
    }
 }
    
  for(int i=0;i<n;i++)
    {
        Sp1[i+1]+= Sp1[i];
        Sp2[i+1]+= Sp2[i];
        Sp3[i+1]+= Sp3[i];     
        Sp4[i+1]+= Sp4[i];
    }
 
   for(int i=0;i<Q.size();i++) 
    {
    int r=0;
     if(Sp4[Q[i]+1]-Sp4[P[i]]>0){r=4;}
     if(Sp3[Q[i]+1]-Sp3[P[i]]>0){r=3;}
     if(Sp2[Q[i]+1]-Sp2[P[i]]>0){r=2;}
     if(Sp1[Q[i]+1]-Sp1[P[i]]>0){r=1;}  
     Q[i]=r;
    }
  
  return Q;
}
