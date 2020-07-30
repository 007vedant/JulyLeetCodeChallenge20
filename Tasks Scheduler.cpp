class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> cnt(256, 0);
        for(auto c:tasks)
            cnt[c]++;
        
        int sz = tasks.size();
        
        int mx = *max_element(cnt.begin(), cnt.end());
        int mx_cnt = count(cnt.begin(), cnt.end(), mx);
        
        return max(sz, (mx - 1)*(n + 1) + mx_cnt);
        

        // mx is the fequency of the task which occurs most
        // mx_cnt is the number of tasks which occur most

        
    }
};