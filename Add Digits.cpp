class Solution {
public:
    int addDigits(int n) {
        return n - ((10-1)*floor((n-1)/(10-1)));
    }
    
    /* ans is mathematically called digital root of a number 'n' in base b
    
    let 'b' denote base of number then a formula for its digital root is :
    
    digitalroot = n - ((b-1)*floor((n-1)/(b-1)))
    
    recursive program for digital root :
    
    int digital_root(int n){
        if(n / 10 == 0)
            return n;
        int res = 0;
        while(n){
            res += n%10;
            n /= 10;
        }
        return digital_root(res);
        
    }
};