def solution(n):
    ans = 0
    a = bin(n).count("1")
    
    for i in range(n + 1, 1000001):
        b = bin(i).count("1")
        
        if a == b:
            ans = i
            break
    
    return ans