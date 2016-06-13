vector<int> solution(int N, vector<int> &A) {

vector<int> count;
for(int i =0;i < N;i++)
    { count.push_back(0);}

int Smax=0;
int tmax =0;
unsigned int maxPos=0;
unsigned int lastPos=0;

while (maxPos < A.size())
    {
        if(A[maxPos] == N+1)
        {
            for(int i =lastPos;i<maxPos;i++)
            {
                count[A[i]-1]++;            
            }
          
            for(int i =lastPos;i<maxPos;i++)
            {
              if(count[A[i]-1] > tmax)
                {tmax=count[A[i]-1];}
              count[A[i]-1]=0;
            }
          
            Smax += tmax;
            tmax = 0;
            lastPos=maxPos+1;
        }
        maxPos++;
    }

    
for(auto it = count.begin(); it!=count.end();it++)
    {
        *it=Smax;
    }
    
for(int i =lastPos;i < A.size();i++)
    {
        count[A[i]-1]++;
    }
    
return count;
}
