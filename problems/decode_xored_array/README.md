# Decode Xored Array

## Leetcode Link: [Decode Xored Array](https://leetcode.com/problems/decode-xored-array/)
### Language: C++

```cpp
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int> ans;
        int prev=first;
        ans.push_back(first);
        for(auto i:encoded){
            prev=i^prev;
            ans.push_back(prev);
        }
        return ans;
    }
};```



