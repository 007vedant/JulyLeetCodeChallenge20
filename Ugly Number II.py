class Solution:
    def nthUglyNumber(self, n: int) -> int:
        ugly = [0]*n
        ugly[0] = 1
        
        i2 = i3 = i5 = 0
        
        nxt2 = 2
        nxt3 = 3
        nxt5 = 5
        
        for i in range(1, n):
            ugly[i] = min(nxt2, nxt3, nxt5)
            
            if ugly[i] == nxt2:
                i2 += 1
                nxt2 = ugly[i2]*2
            
            if ugly[i] == nxt3:
                i3 += 1
                nxt3 = ugly[i3]*3
            
            if ugly[i] == nxt5:
                i5 += 1
                nxt5 = ugly[i5]*5
        
        
        return ugly[-1]


# Dynamic Programming