def fact(n):
    ans = 1
    for i in range(1,n):
        ans = ans*i
        
    return ans
    

print fact(100)