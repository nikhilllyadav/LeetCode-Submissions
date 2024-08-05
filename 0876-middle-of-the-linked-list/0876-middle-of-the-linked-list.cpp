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
    int findlength(ListNode*&head){
        ListNode*temp = head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int len=findlength(head);
        int pos=len/2 +1;
        ListNode*temp=head;
        while(pos!=1){
            pos--;
            temp = temp->next;
        }
        return temp;
    }
};