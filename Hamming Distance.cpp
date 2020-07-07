class Solution {
public:
    int hammingDistance(int x, int y) {
        int xo = x^y;
        return __builtin_popcount(xo); // counting set bits
        
    }
};