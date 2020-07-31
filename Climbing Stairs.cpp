class Solution {
public:
    int climbStairs(int n) {
        if(n <= 1)
            return 1;
        
        int f = 1, s = 1;
        int c;
        for(int i=2; i<=n; i++){
            c = f+s;
            f = s;
            s = c;
        }
        
        return c;
        
        // exactly same as calculating nth fibonacci number
        // can also be done in O(logn) time using matrix exp. etc
    }
};