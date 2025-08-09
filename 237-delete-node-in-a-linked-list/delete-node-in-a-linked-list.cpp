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
      ListNode* temp = node->next;
    node->val = temp->val;           
    node->next = temp->next; 
 
        
    }
};