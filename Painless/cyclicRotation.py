def solution(A, K):
    # write your code in Python 3.6
    N = len(A)
    if N==0 : return A
    K=K%N
    if K==0 : return A
    rotated = [ A[i] for i in range(-K,N-K) ]
    return rotated
