
int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int n=A.size();  
    int ones= 0;
    for(auto e:A){if(e==1) ones++;}
    
    int pairs=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==1){ones--;}
        else{ pairs +=ones;}
        if(pairs>1000000000){return -1;}
    }
    
    return pairs;
}


//Other solution
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int k=0;int pairs=0;
    for(int i=0;i<A.size();i++){
     if(A[i]==1){
         pairs+=k; 
         if(pairs>1000000000){return -1;}
        }
     else{
         k++;
        }
    
    }
 
    return pairs;
}
