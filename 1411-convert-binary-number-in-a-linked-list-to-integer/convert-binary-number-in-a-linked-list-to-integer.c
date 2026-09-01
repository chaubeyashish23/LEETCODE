/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// public int getDecimalValue(struct ListNode head) {
//     int ans = 0;
//     while (head != null) {
//         ans = ans*2+head.val;
//         head = head.next;
//     }
//     return 0;
    
// }

    int getDecimalValue(struct ListNode* head){
        int ans = 0;
        while(head != NULL) {
            ans = ans * 2 + head->val;
            head = head->next;
        }
        return ans;
    }
