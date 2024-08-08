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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prev = NULL, *curr = head, *start = head;
        int count = 0, totalcount = 0;
        
        // Create a dummy node to serve as the head of the final list
        ListNode *dummy = new ListNode(0);
        ListNode *end = dummy; 
        
        // Count the total number of nodes in the list
        int n = 0;
        ListNode* temp = head;
        while(temp != nullptr)
        {
            n++;
            temp = temp->next;
        }
        while(curr != nullptr)
        {
            // Reversing 
            ListNode *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            count++;
            totalcount++; //keep track of num of nodes processed
            
            // If we have reversed k nodes, we link the reversed group to the final list
            if(count == k)
            {
                count = 0; // Reset count if k elements are reached
                end->next = prev; // This will be the first element of reversed group
                end = start;
                start->next = curr; // Linking the start of reversed group to rest of the list
                start = curr;
                prev = NULL;
                
                // If there are less than k nodes left, we break the loop
                if(n - totalcount < k) break;
            }
        }        
        return dummy->next;
    }
};