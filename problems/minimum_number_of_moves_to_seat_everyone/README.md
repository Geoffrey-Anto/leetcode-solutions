# Minimum Number Of Moves To Seat Everyone

## Leetcode Link: [Minimum Number Of Moves To Seat Everyone](https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/)
### Language: C++

```cpp
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int c=0;
        for(int i=0;i<seats.size();i++){
            c+=abs(seats[i]-students[i]);
        }
        return c;
    }
};```



