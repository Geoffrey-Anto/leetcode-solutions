class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for(auto &i: nums) {
            mp[i]++;
        }
        
        int mx = 0;
        int curr = 0;
        
        for(auto &[k, v]: mp) {
            if(v > mx) {
                mx = v;
                curr = v;
            } else if(v == mx) {
                curr += v;
            }
        }
        
        return curr;
    }
};