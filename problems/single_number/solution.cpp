class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i:nums){
            x=x xor i;
        }
        return x;
    }
};