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
    // 2 parts
    // 1. Create the pairs of the linked lists
    // 2. Create the merged linked lists

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) {
            return NULL;
        }

        while(n > 1) {
            for(int i = 0; i < n/2; i+=1) {
                lists[i] = merge2Lists(lists[i], lists[n-i-1]); // 2 pointer like, but works to target the start and end
            }
            n = (n+1)/2; // lessen the number of nodes in the tree by half
        }
        return lists.front();
        
    }

    ListNode* merge2Lists(ListNode* l1, ListNode* l2) {
        //TODO: Merge 2 lists
        // Create a dummy node that start off with NULL, and then add to the node one by one
        // The code for this is the exact same as merging 2 LLs, as the lists are sorted, so just need to sort one by one form the left
        if(l1==NULL && l2==NULL) {
            return NULL;
        }
        if(l1==NULL) {
            return l2;
        }
        if(l2==NULL) {
            return l1;
        }
        ListNode* head = NULL;
        if(l1->val <= l2->val) {
            head = l1;
            l1 = l1->next;
        } else {
            head = l2;
            l2 = l2->next;
        }

        ListNode* curr = head;
        while(l1!=NULL && l2!=NULL) {
            if(l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }

        while(l1!=NULL && l2==NULL) {
            curr->next = l1;
            curr = curr->next;
            l1 = l1->next;
        }

        while(l2!=NULL && l1==NULL) {
            curr->next = l2;
            curr = curr->next;
            l2= l2->next;
        }

        return head;
    }
};