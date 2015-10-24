int solution(vector<int> &A) 
{
unsigned int n = A.size();           //necessary to avoid conversion errors
unsigned long Sum = (n+1)*(n+2);  

for(unsigned int it=0; it < n ;it++)
    {
      Sum  -= 2*A[it];
    }

return Sum/2;
}
