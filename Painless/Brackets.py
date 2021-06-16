
def solution(S):
    # write your code in Python 3.6
    pile=[]
    for sign in S:
        if  sign == ')' or  sign == ']' or sign == '}':
            if len(pile)==0 :
                return 0
            if sign == ')' and pile[-1]=='(':
                pile.pop()
            if sign == ']' and pile[-1]=='[':
                pile.pop()
            if sign == '}' and pile[-1]=='{':
                pile.pop()
        else:
            pile.append(sign)

    return 1 if len(pile)==0 else 0
