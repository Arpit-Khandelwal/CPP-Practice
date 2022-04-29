ListNode* reverse(ListNode *head)
    {
        if(head==nullptr) return head;
        ListNode* ptr = head->next;
        ListNode* prev = head;
        
        ListNode* i=head;
        i->next=nullptr;
        while(ptr)
        {
            prev = ptr;
            ptr = ptr->next;
            prev->next = i;
            i=prev;
        }
        return prev;
        
    }
    ListNode* cloneList(ListNode* head)
    {
        ListNode *ptr;
        ptr->val = (head->val);
        ListNode *h;
        h->next=ptr;
        while(head)
        {
            ListNode *p;
            p->val = (head->val);
            ptr->next=p;
            ptr=p;
            head=head->next;
        }
        return h->next;
    }
    bool isPalindrome(ListNode* head) 
    {
        if(!head || !head->next) return true;
        ListNode *reversedHead = reverse(cloneList(head));
        while(reversedHead->val == head->val)
        {
            reversedHead = reversedHead->next;
            head=head->next;
        }
        
        if(!head && !reversedHead) return false;
        return true;
        
        
    }