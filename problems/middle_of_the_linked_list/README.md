# Middle Of The Linked List

## Leetcode Link: [Middle Of The Linked List](https://leetcode.com/problems/middle-of-the-linked-list/)
### Language: C++

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while((fast->next!=nullptr) and (fast->next->next!=nullptr)){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast->next==nullptr) return slow;
        return slow->next;
    }
};```



