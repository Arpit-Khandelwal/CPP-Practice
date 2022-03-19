// https://leetcode.com/explore/interview/card/top-interview-questions-easy/93/linked-list/553/

void deleteNode(ListNode *node)
{
    // technically copying next node val to curr node and deleting the next node

    swap(node->val, node->next->val);
    swap(node->next, node->next->next);

    // alternate:

    node->val = node->next->val;
    node->next = node->next->next;
}