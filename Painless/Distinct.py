def solution(A):
    # write your code in Python 3.6
    A.sort()
    if len(A) == 0 :
        return 0
    last = A[0]
    counter=1
    for element in A:
        if element != last:
            counter+=1
            last =element
    return counter
