ListNode* removeNthFromEnd(ListNode* head, int n) {        
        ListNode *p1,*p2;
        p1=head;
        p2=head;
        
        if(head->next==NULL) return nullptr;
        
        for(int i=1;i<=n;i++) p2=p2->next;
        
        while(p2&&p2->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next;
        }
        p1->next=p1->next->next;
        return head;
    }