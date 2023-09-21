/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *findMid(ListNode *head)
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
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;
        // step 1 : find middle
        ListNode *middle = findMid(head);
        // step 2: reverse list after middle
        ListNode *temp = middle->next;
        middle->next = reverse(temp);
        // step 3: compare two halfs
        ListNode *head1 = head;
        ListNode *head2 = middle->next;
        while (head2 != NULL)
        {
            if (head2->val != head1->val)
            {
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        // step4 : repeat step 2
        temp = middle->next;
        middle->next = reverse(temp);

        return true;
    }
};