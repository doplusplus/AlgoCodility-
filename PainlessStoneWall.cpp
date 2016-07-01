
int solution(vector<int> &H) {
    // write your code in C++11 (g++ 4.8.2)
    
    vector<int> base={H[0]};
    int num=0;
    for(int i=1;i<H.size();i++)
    {
        if(H[i]>base.back()){base.push_back(H[i]);}
        if(H[i]<base.back())
        {
            while(base.back()>H[i])
            {
                base.pop_back();
                num++;
            }
             if(H[i]>base.back()){base.push_back(H[i]);}
        }
    }    
     while(base.size()>0)
            {
                if(base.back()!=0){num++;}
                base.pop_back();
            }
    return num;
}
