```at least K repeating characters```: 保证法不保证; 所以反过来找 ```freq < K```的, 这个char一定不在任何满足条件的substring中: 去掉这个char在前后两段substring中找longest substring; 其实这个就是divide & conquer的思路 

其实是一类题: ```at least```...

另外, 处理数组中的substring的类型的题: 
1. two pointers/sliding window;  
2. dp;  
3. divide & conquer

#### Java foreach loop a String: 

> toCharArray()把String变成能foreach遍历的array; 并不能直接foreach遍历String, 必须要array

```
for (char ch: "xyz".toCharArray()) {
  ... 
}
```

---

21. merge two linked list: 复习链表 
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1), *cur = dummy;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                cur->next = l1;
                l1 = l1->next;
            } else {
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        cur->next = l1 ? l1 : l2;
        return dummy->next;
    }
};
```
