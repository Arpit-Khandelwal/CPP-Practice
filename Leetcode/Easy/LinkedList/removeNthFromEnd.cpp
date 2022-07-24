struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *p1, *p2;
    p1 = head;
    p2 = head;

    if (head->next == NULL)
        return nullptr;

    for (int i = 1; i <= n; i++)
        p2 = p2->next;

    while (p2 && p2->next != NULL) // kind of sliding window
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    p1->next = p1->next->next;
    return head;

    // alt method - naive
    if (n == 1 && head->next == nullptr)
        return nullptr;

    int size = 0;
    ListNode *ptr;
    for (ptr = head; ptr != nullptr; ptr = ptr->next)
        size++;

    if (n == size)
        return head->next;

    int count = 0;
    for (ptr = head; ptr != nullptr; ptr = ptr->next, count++)
    {
        if (count == size - n - 1)
        {
            // if(ptr->next->next!=nullptr)
            ptr->next = ptr->next->next;
            // else ptr->next=nullptr;
        }
    }

    return head;
}