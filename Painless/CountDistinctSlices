// you can use includes, for example:
// #include <algorithm>
#include <cmath>
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int M, vector<int> &A){
	int n = A.size(); int start = 0;int end = start;
	long count = 0;
	vector<int> occ(M + 1,0);

	for (int i = 0; i < n; i++) {
		if (occ[A[i]] != 0) {
		    if(end>start){count-= (end-start)*(end-start + 1) / 2;}
		    end=i;		    	
			count += (end-start)*(end-start + 1) / 2;
			if(count>pow(10,9)){return pow(10,9); }
			while (A[start]!=A[i]){
				occ[A[start]] = 0;
				start++;
			}
			start++;
		}
		else {
			occ[A[i]]++;
		}
	}
	    if(end>start){count-= (end-start)*(end-start + 1) / 2;}
		end=n;		    	
		count += (end-start)*(end-start + 1) / 2;
		if(count>pow(10,9)){return pow(10,9);}
	return count;
}
