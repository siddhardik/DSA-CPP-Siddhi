// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

// } Driver Code Ends
/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{

private:
    // Add code here
    void insertAtTail(Node *&tail, Node *curr)
    {
        tail->next = curr;
        tail = curr;
    }

public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node *segregate(Node *head)
    {

        Node *zeroHead = new Node(-1);
        Node *zeroTail = zeroHead;
        Node *oneHead = new Node(-1);
        Node *oneTail = oneHead;
        Node *twoHead = new Node(-1);
        Node *twoTail = twoHead;

        Node *curr = head;

        // create separate list 0s, 1s and 2s
        while (curr != NULL)
        {

            int value = curr->data;

            if (value == 0)
            {
                insertAtTail(zeroTail, curr);
            }
            else if (value == 1)
            {
                insertAtTail(oneTail, curr);
            }
            else if (value == 2)
            {
                insertAtTail(twoTail, curr);
            }
            curr = curr->next;
        }

        // merge 3 sublist

        // 1s list not empty
        if (oneHead->next != NULL)
        {
            zeroTail->next = oneHead->next;
        }
        else
        {
            // 1s list -> empty
            zeroTail->next = twoHead->next;
        }
        oneTail->next = twoHead->next;
        twoTail->next = NULL;
        // twoTail->next = NULL;

        // setup head
        head = zeroHead->next;

        // delete dummy nodes
        delete zeroHead;
        delete oneHead;
        delete twoHead;

        return head;
    }
};

// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1)
{
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &value);

        if (i == 0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main()
{

    int n;

    int t;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
} // } Driver Code Ends

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        // let the list with smaller head be cur1
        ListNode *h, *cur1, *cur2;
        if (list1->val <= list2->val)
        {
            h = cur1 = list1;
            cur2 = list2;
        }
        else
        {
            h = cur1 = list2;
            cur2 = list1;
        }
        if (cur1->next == NULL)
        {
            cur1->next = cur2;
            return cur1;
        }
        // stop when one of the list ends
        while (cur2 != NULL && cur1 != NULL)
        {
            // cout << cur1->val << " " << cur2->val << endl;
            if (cur1->next == NULL)
            {
                cur1->next = cur2;
                // done processing first list
                cur1 = NULL;
            }
            else if (cur2->val <= cur1->next->val)
            {
                // merge cur2 into l1 and move cur2
                ListNode *tmp = cur1->next;
                cur1->next = cur2;
                cur2 = cur2->next;
                cur1->next->next = tmp;
            }
            else
            {
                // move cur1 to the next
                cur1 = cur1->next;
            }
        }
        return h;
    }
};

//

/

    class Solution
{
public:
    ListNode *getMid(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }
    ListNode *reverse(ListNode *head)
    {

        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(ListNode *head)
    {
        if (head->next == NULL)
        {
            return true;
        }

        // step 1 -> find Middle
        ListNode *middle = getMid(head);
        // cout << "Middle " << middle->val << endl;

        // step2 -> reverse List after Middle
        ListNode *temp = middle->next;
        middle->next = reverse(temp);

        // step3 - Compare both halves
        ListNode *head1 = head;
        ListNode *head2 = middle->next;

        while (head2 != NULL)
        {
            if (head2->val != head1->val)
            {
                return 0;
            }
            head1 = head1->next;
            head2 = head2->next;
        }

        // step4 - repeat step 2
        temp = middle->next;
        middle->next = reverse(temp);

        return true;
    }
};