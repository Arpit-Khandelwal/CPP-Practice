ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    ListNode* temp=new ListNode();
    ListNode* head1=new ListNode();
    head1->next=temp;
    while(list1 && list2)
    {
        if(list1->val<=list2->val) 
        {
            temp->next=list1;
            list1=list1->next;
        }
        else
        {
            temp->next = list2;
            list2=list2->next;
        }
        temp = temp->next;
    }
    if(list1) temp->next=list1;
    if(list2) temp->next=list2;
    
    return head1->next->next;
}