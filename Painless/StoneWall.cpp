
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

// minimum height is 1 in this one
int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
    std::vector<int> stack ={H[0]};
    int count = 1;
    for(auto height : H ){
        if(height > stack.back()){
            count++;
            stack.push_back(height);
        }
        if(height < stack.back()){
            while( height < stack.back() ){
                stack.pop_back();
            }
            if(height > stack.back()){
                count++;
                stack.push_back(height);
            }
        }
    }
    return count;
}
