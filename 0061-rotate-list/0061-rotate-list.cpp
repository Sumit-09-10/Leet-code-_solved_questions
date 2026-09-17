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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL) return head;
        int length = 0;
        for (ListNode* t = head; t != NULL; t = t->next) length++;
        k = k % length; 
        for(int i=0; i<k; i++){
            ListNode* temp = head;
            while(temp->next->next != NULL){ 
                temp = temp->next;
            }
            ListNode* newHead = temp->next;
            temp->next = NULL;
            newHead->next = head;
            head = newHead;
        }
        return head;
    }
};
