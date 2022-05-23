ListNode* reverseList(ListNode* head) 
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