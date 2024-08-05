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
    bool hasCycle(ListNode *head) {
        map<ListNode*, int> mpp; // address aur coutn ka map bna liya
        ListNode* temp = head;
        while (temp != NULL) {
            mpp[temp]++; 
            if (mpp[temp] > 1) { // agr count>1 mtlb ek address ek se zyda bar traverse hua h(cycle h)
                return true;
            }
            temp = temp->next;
        }
        // yha tk phoche ho mtlb cycle exists
        return false;
    }
};

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         map<ListNode*,bool> mpp ;//address aur vo present hai ki nhi uska map bnaliya
//         ListNode*temp=head;
//         while(temp!=NULL){
//             if(mpp[temp]==false){ //vo address pe phle traversal nhi phocha mtlb
//                 mpp[temp]=true; //nahi hai phle se isliy etrue krdo
//             }
//             else{
//                 //mtlb is address pe dubara traversal phocha hai
//                 return true;
//             }
//             temp = temp-> next;
//         }
//         //yha tk phoche hai mtlb loop nhi h
//         return false;
//     }
// };

//  map<ListNode*, int> mpp; // map to store the address and its count
//     ListNode* temp = head;
    
//     while (temp != NULL) {
//         mpp[temp]++; // increment the count for the current node address
//         if (mpp[temp] > 1) { // if the count is greater than 1, a cycle exists
//             return true;
//         }
//         temp = temp->next;
//     }
    
//     // If we reach here, no cycle exists
//     return false;