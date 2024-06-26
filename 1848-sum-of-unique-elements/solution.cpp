class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int isPresent[101];
        memset(&isPresent,-1,sizeof(isPresent));
        for(auto &i:nums){
            isPresent[i]++;
        }
        int s=0;
        for(auto &i:nums){
            if(isPresent[i] == 0){
                s=s+i;
            }
        }
        return s;
    }
};
