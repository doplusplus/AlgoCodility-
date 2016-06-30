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
