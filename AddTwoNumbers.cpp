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
int revnum(int n)
{
    int rev = 0;
    int x = n;
    int i;
    while (x != 0)
    {
        i = rev * 10;
        rev = i + x % 10;
        x = x / 10;
    }
    return rev;
}
void addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int num1 = 0, num2 = 0;
    while (l1 != NULL)
    {
        num1 *= 10;
        num1 += l1->val;
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        num2 *= 10;
        num2 += l2->val;
        l2 = l2->next;
    }
    int rev1 = revnum(num1);
    int rev2 = revnum(num2);
    int sum = rev1 + rev2; // 807

    ListNode *head = NULL, *prev = NULL;
    while (sum != 0)
    {
        ListNode *cur = new ListNode(sum % 10);
        sum /= 10;
    }
    return cur;

    // while (t != NULL)
    // {
    //     cout << t->val << " ";
    //     t = t->next;
    // }
    // ListNode

    return;
}
int main()
{
    ListNode *first = NULL;
    ListNode *second = NULL;
    ListNode *third = NULL;

    first = new ListNode();
    second = new ListNode();
    third = new ListNode();

    first->val = 2;
    first->next = second;

    second->val = 4;
    second->next = third;

    third->val = 3;
    third->next = NULL;

    ListNode *one = NULL;
    ListNode *two = NULL;
    ListNode *three = NULL;

    one = new ListNode();
    two = new ListNode();
    three = new ListNode();

    one->val = 5;
    one->next = two;

    two->val = 6;
    two->next = three;

    three->val = 4;
    three->next = NULL;

    addTwoNumbers(first, one);

    return 0;
}