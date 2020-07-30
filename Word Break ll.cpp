class Solution {
public:
    vector<string> wBreak(string &s, int idx, unordered_set<string> &words, unordered_map<int, vector<string>> &dp){
        if(dp.count(idx) == 0){
            for(int i=idx-1; i>=0; i--){
                string tail = s.substr(i, idx-i);
                if(words.count(tail) == 0)
                    continue;
                for(string sol: wBreak(s, i, words, dp)){
                    dp[idx].push_back(sol.append(tail).append(" "));
                }
            }
        }
        
        return dp[idx];
    }
    
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        unordered_set<string> words(wordDict.cbegin(), wordDict.cend());
        unordered_map<int,vector<string>> dp;
        dp[0] = {""};
        
        vector<string> ans = wBreak(s, n, words, dp);
        
        for(string &str : ans)
            str.pop_back();
        
        return ans;
        
    }
};