class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        a = int(''.join(str(x) for x in digits))
        return list(str(a+1))
            