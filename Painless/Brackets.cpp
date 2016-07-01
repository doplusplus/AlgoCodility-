int solution(string &S) {
    // write your code in C++11 (g++ 4.8.2)
    
    int n=S.size();
    string Comp;
    for(int i=0;i<n;i++)
    {
        if(Comp.size()==0) Comp.push_back(S[i]);
        else
        {
            if(
                (S[i]=='}'&&Comp.back()=='{')||
                (S[i]==')'&&Comp.back()=='(')||
                (S[i]==']'&&Comp.back()=='['))
            {Comp.pop_back();}
            else{Comp.push_back(S[i]);}
        }
    }
    
    int res= Comp.size()!=0?0:1;
    return res;
}
