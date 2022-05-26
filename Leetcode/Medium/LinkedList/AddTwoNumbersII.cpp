#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int findSize(ListNode *h)
{
    int n = 0;
    while (h)
    {
        n++;
        h = h->next;
    }
    return n;
}
ListNode *reverseList(ListNode *head)
{
    ListNode *current = head;
    ListNode *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    return prev;
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

    int buffer = findSize(l1) - findSize(l2);

    ListNode *p1 = reverseList(l1);
    ListNode *p2 = reverseList(l2);

    // cout<<buffer;

    //         while(buffer>0) p1 = p1->next;
    //         while(buffer<0) p2 = p2->next;
    stack<int> st;
    int sum, carry = 0;
    while (p1 && p2)
    {
        // cout<<p1->val<<" "<<p2->val<<endl;
        sum = p1->val + p2->val + carry;
        if (sum > 9)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
            carry = 0;

        st.push(sum);
        p1 = p1->next;
        p2 = p2->next;
    }
    //         if(carry>0)
    //         {
    //             if(buffer>0)
    //             {
    //                 sum = (carry+p1->val);
    //                 p1=p1->next;
    //             }
    //             else if(buffer<0)
    //             {
    //                 sum = (p2->val + carry);
    //                 p2 = p2->next;
    //             }
    //             else sum = (carry);

    //             if(sum>9)
    //             {
    //                 carry = sum/10;
    //                 sum = sum%10;
    //             }
    //             st.push
    //         }

    while (p1)
    {
        sum = p1->val + carry;
        if (sum > 9)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
            carry = 0;

        st.push(sum);
        p1 = p1->next;
    }

    while (p2)
    {
        sum = p2->val + carry;
        if (sum > 9)
        {
            carry = 1;
            sum = sum % 10;
        }
        else
            carry = 0;

        st.push(sum);
        p2 = p2->next;
    }

    if (carry > 0)
        st.push(carry);

    ListNode *ans = new ListNode();
    ListNode *p = ans;
    while (!st.empty())
    {
        ans->val = st.top();
        st.pop();

        if (!st.empty())
            ans->next = new ListNode();
        ans = ans->next;
    }
    return (p);
}

void solve()
{
    ListNode *l1 = new ListNode(5);
    // l1->next = new ListNode(5);
    // l1->next->next = new ListNode(4);
    // l1->next->next->next = new ListNode(3);

    ListNode *l2 = new ListNode(5);
    // l2->next = new ListNode(6);
    // l2->next->next = new ListNode(4);

    ListNode *ans = addTwoNumbers(l1, l2);
    while (ans)
    {
        cout << ans->val << " ";
        ans = ans->next;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
