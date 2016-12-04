Linked list

My SOLUTION TO QUESTION 2.8 HOW TO CRACK CODING INTERVIEW

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
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head, *fast=head;
        int countinitial=0;
        int countloop=0;
        bool loop=false;
        while(slow!=NULL && fast!=NULL && fast->next!=NULL)
        {
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                loop=true;
               break; 
            }
        
            countinitial++;
        }
        
        if(loop)
        {
        fast=fast->next;
        while(slow!=fast)
        {
            fast=fast->next;
            countloop++;
            
            
        }
        //logic for kth node  from the end
        countloop=countloop+1;
        fast=head;
        slow=head;
        while(countloop>=0)
        {
            countloop--;
            fast=fast->next;
        }
        
        while(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow;
        }
        
        
        
        
        
        
        return NULL;
        
        
        
        
        
    }
};
