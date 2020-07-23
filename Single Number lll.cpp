class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int XOR = nums[0];
        for(int i=1; i<nums.size(); i++)
            XOR ^= nums[i];
        
        int right_most_set_in_xor = XOR & ~(XOR-1);
        int x = 0;
        int y = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i] & right_most_set_in_xor)
                x ^= nums[i];
            else
                y ^= nums[i];
        }
        
        return {x, y};      
    }
};