class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int cnt = 0;

        sort(points.begin(), points.end(), [&](auto &a, auto &b) {
            return a[1] < b[1];
        });

        int currMax = 0;

        for(auto &i: points) {
            auto s = i[0];
            int end = i[1];

            if(cnt == 0 || currMax < s) {
                currMax = end;
                cnt++;
            }
        }

        return cnt;
    }
};
