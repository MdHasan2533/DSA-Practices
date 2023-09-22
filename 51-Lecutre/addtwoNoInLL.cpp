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

// WE USED ONLY 1 LOOP

class Solution
{
public:
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

    void insertAtTail(ListNode *&head, ListNode *&tail, int someVal)
    {
        ListNode *temp = new ListNode(someVal);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    struct ListNode *add(struct ListNode *l1, struct ListNode *l2)
    {
        int carry = 0;
        ListNode *ansHead = NULL;
        ListNode *ansTail = NULL;

        while (l1 != NULL || l2 != NULL || carry != 0)
        {
            int val1 = 0;
            if (l1 != NULL)
                val1 = l1->val;
            int val2 = 0;
            if (l2 != NULL)
                val2 = l2->val;

            int sum = carry + val1 + val2;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;

            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }

        return ansHead;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // step 1 : reverse the linked list
        l1 = reverse(l1);
        l2 = reverse(l2);
        // Step 2 : Add the linked list
        ListNode *ans = add(l1, l2);
        // Step 3: reverse the ans linked list
        ans = reverse(ans);
        // step 4 : return ans
        return ans;
    }
};