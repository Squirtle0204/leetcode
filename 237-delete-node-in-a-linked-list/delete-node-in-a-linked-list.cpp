/**
 * Definition for singly-linked list.
 * struct Node {
 *     int val;
 *    ListNode *next;
 *     Node(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
      node->val = node->next->val;
        node->next = node->next->next;
 
        
    }
};