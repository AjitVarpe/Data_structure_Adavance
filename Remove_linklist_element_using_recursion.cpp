Hello Everyone! hope you all are doing great.

Approach 1 (Recursive):

Here we need to think in a recursive way, so for the base condition it is simple: that if the current node in a recursive step is null then we can simply return NULL from that (Think of it as we have given an empty list in the input).

Now, for the recursive step, we need to delete all the nodes that are in the right of our current node that have same value as val , so we'll call recursive step on node->next so that the recursion will take care of the nodes that are ahead of our current node.

Now, we only need to take care of our current node in our recursive step and here can be two cases:
a: If current node's value is equal to val , then we will simply return the next of current node i.e. node->next as to delete current node we will simply omit this node and never return this node, so it will be lost.
b: If current node's value is NOT equal to val then we want to keep this node in our list, so we will simply return this node itself.

Now, below is the code for my appraoch:


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
    ListNode* removeElements(ListNode* head, int val) {
        
           // Base Condition
        if(!head) return NULL;
		
		// Delete the nodes that are on the right of our current node
        head->next = removeElements(head->next, val);
		
		// Omit current node if this has to be deleted or else keep this node 
        return (head->val==val)? head->next:head;
    }
};
