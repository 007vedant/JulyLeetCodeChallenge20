class Solution:
    def addBinary(self, a: str, b: str) -> str:
        
        ## solution with logic
        i, j = len(a)-1, len(b)-1
        carry = 0
        ans = ""
        
        while i>=0 or j>=0 or carry:
            b1 = int(a[i]) if i >= 0 else 0
            b2 = int(b[j]) if j >= 0 else 0
            summ = carry+b1+b2
            ans += str(summ%2)
            carry = summ//2
            
            i, j = i-1, j-1
        
        
        return ans[::-1]
        

        ## direct solution

        return bin(int(a, 2) + int(b, 2))[2::]