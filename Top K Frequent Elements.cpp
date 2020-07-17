class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp; 
        for (int i = 0; i < n; i++) 
            mp[arr[i]]++; 
  
        vector<int> freq[n + 1]; 
        for (auto x : mp) 
            freq[x.second].push_back(x.first); 
  
        int count = 0; 
        vector<int> ans;
   
        for (int i = n; i >= 0; i--) { 
            for (int x : freq[i]) { 
                ans.push_back(x); 
                count++; 
                if (count == k) 
                    break;
            } 
            if(count == k)
                break;
        }
        return ans;
    }
        
};