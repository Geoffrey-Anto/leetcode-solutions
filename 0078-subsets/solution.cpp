class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> ans;

        for(int mask=0; mask<(1 << n); mask++) {
            vector<int> t;

            for(int j=0; j<n; j++) {
                if(mask & (1 << j)) {
                    t.push_back(nums[j]);
                }
            }

            ans.push_back(t);
        }

        return ans;
    }
};
