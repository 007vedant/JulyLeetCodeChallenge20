import math

class Solution:
    def arrangeCoins(self, n: int) -> int:
        ans = math.sqrt(2*n+0.25) - 0.50
        return int(ans)


# total coins upto kth row = k*(k+1)/2
# hence solve k*(k+1)/2 - n <= 0