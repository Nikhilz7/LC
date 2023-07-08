#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == NULL)
        return list2;
    if (list2 == NULL)
        return list1;

    ListNode *ptr = list1;
    if (list1->val > list2->val)
    {
        ptr = list2;
        list2 = list2->next;
    }
    else
        list1 = list1->next;
    ListNode *current = ptr;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            current->next = list1;
            list1 = list1->next;
        }
        else
        {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    if (!list1)
        current->next = list2;
    else
        current->next = list1;

    return ptr;
}
void InsertAtHead(ListNode *&head, int d)
{
    ListNode *temp = new ListNode(d);
    temp->next = head;
    head = temp;
}
void print(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    ListNode *list1 = new ListNode(4);
    ListNode *head = list1;
    InsertAtHead(head, 2);
    InsertAtHead(head, 1);

    print(head);

    ListNode *list2 = new ListNode(4);
    ListNode *head2 = list2;
    InsertAtHead(head2, 3);
    InsertAtHead(head2, 1);

    print(head2);

    ListNode *list3 = mergeTwoLists(list1, list2);
    ListNode *head3 = list3;
    print(list3);
    return 0;
}