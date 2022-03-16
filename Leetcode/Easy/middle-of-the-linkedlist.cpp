class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // counting of total number of elements
        int count=0;
        ListNode *ptr = new ListNode();
        ptr = head;
        while (ptr!=NULL){
            count++;
            ptr = ptr->next;
        }
        
        // moving to the middle index
        bool logic = false;
        int index = (count/2) + 1;
        if (count%2==0){
            logic = true;
        }
        
        ptr = head;
        count = 1;
        while(count < index){
            count++;
            ptr = ptr->next;
        }
        return ptr;
        
    }
};