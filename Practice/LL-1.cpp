#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next = NULL;
}*first;

void Insert(int pos,int x)
{
    Node *t, *p;
    t = new Node;
    t->data = x;
    if(pos==0)
    {
        t->next = first;
        first = t;
    }
    else{
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
            p = p->next;
        if(p)
        {
        t->next = p->next;
        p->next = t;
        }
    }
}

int count(Node *p)
{
    if(p==NULL)
        return 0;
    else
        return 1 + count(p->next);
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++)
        Insert(i, arr[i]);
    cout << count(first);
}