/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

// Since the problem deals with flattening the prime LL and the corresponding child LL's of different nodes in self similar manner
// recursion is used to accomplish the task.

class Solution {
public:
    Node* flatten(Node* head) {
        Node* ptr = head;
        
        while(ptr != NULL && ptr->child == NULL)
            ptr = ptr->next;
        
        if(ptr != NULL){
            Node* child_tail = ptr->child;
            while(child_tail->next != NULL)
                child_tail = child_tail->next;
            
            Node* rem_head = flatten(ptr->next);
            if(rem_head != NULL){
                child_tail->next = rem_head;
                rem_head->prev = child_tail;
            }
            
            Node* child_head = flatten(ptr->child);
            ptr->next = child_head;
            child_head->prev = ptr;
            ptr->child = NULL;
            
        }
        
        return head;
        
    }
};