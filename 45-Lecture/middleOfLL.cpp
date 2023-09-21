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
    ListNode *getMiddle(ListNode *head)
    {

        // for 1 or no elements
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        // for 2 elements
        if (head->next->next == NULL)
        {
            return head->next;
        }

        ListNode *fast = head->next;
        ListNode *slow = head;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }

    ListNode *middleNode(ListNode *head)
    {
        return getMiddle(head);
    }
};