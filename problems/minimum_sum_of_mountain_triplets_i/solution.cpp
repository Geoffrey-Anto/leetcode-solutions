class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int mn=INT_MAX;
        int n=nums.size();

        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i] < nums[j] && nums[k] < nums[j]) {
                        int sum = nums[i]+nums[j]+nums[k];
                        mn = min(mn,sum);
                    }
                }
            }
        }
        
        if (mn == INT_MAX) {
            return -1;
        } 

        return mn;
    }
};