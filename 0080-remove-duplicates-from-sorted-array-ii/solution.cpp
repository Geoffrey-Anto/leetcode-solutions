class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int n = nums.size();

        for(int j=0; j<n; j++) {
            if(i == 0 || i == 1) {
                nums[i] = nums[j];
                i++;
                continue;
            }

            if(nums[i - 2] != nums[j]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
