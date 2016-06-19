
//================= first solution =======================================
int solution(vector<int> &A) 
{
unsigned int n = A.size();           
unsigned long Sum = (n+1)*(n+2);  //necessary to avoid conversion errors

for(unsigned int it=0; it < n ;it++)
    {
      Sum  -= 2*A[it];
    }

return Sum/2;
}


//================= second solution =======================================
int solution(vector<int> &A) 
{
long Sum = 1;

for(int it=1; it<= A.size() ;it++)
    {
      Sum +=it+1;
      Sum-=A[it-1];
    }

return Sum;
}
