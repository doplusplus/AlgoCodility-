def solution(A, B, K):
    # write your code in Python 3.6
    offset = 1 if A%K==0 else 0
    return int(B/K) -int(A/K) + offset
