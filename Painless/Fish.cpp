int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++11 (g++ 4.8.2)
    
    int nom=0;
    vector<int> C={};
    
    for(int i=0;i<A.size();i++)
    {       
       if(C.size()==0){C.push_back(i);}
       else
       {
        if(B[C.back()]==1&&B[i]==0)
        {   
            while(B[C.back()]==1&&C.size()>0){
                nom++;
             if(A[C.back()]<A[i]){C.pop_back();}
             else{break;}
             }
        if(C.size()==0){C.push_back(i);}      
        }  
        else{C.push_back(i);}
       }
    }

    return A.size()-nom;
}


//Shorter version
int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    int n=0;
    vector<int> goUpstream;
    while(A.size()>0){
        if(B.back()==1){
            while(goUpstream.size()>0&&A.back()>goUpstream.back()){
                goUpstream.pop_back();
            }
            if(goUpstream.size()==0){n++;}
        }
        else{
            goUpstream.push_back(A.back());    
        }
     B.pop_back(); A.pop_back();
    }
 return n+goUpstream.size();
}
