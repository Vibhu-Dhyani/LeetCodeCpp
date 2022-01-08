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
class Solution {
  public:
    ListNode * addTwoNumbers(ListNode * l1, ListNode * l2) {

      ListNode * result = NULL, * head = NULL;
      int c = 0;
      while (l1 && l2) {
        ListNode * p = new ListNode((l1 -> val + l2 -> val + c) % 10);
        if (l1 -> val + l2 -> val + c > 9) {
          c = 1;
        } else {
          c = 0;
        }
        if (result == NULL) {
          result = p;
          head = result;
        } else {
          head -> next = p;
          head = head -> next;
        }
        l1 = l1 -> next;
        l2 = l2 -> next;
      }
      while (l1) {
        ListNode * px = new ListNode((l1 -> val + c) % 10);
        if (l1 -> val + c > 9) {
          c = 1;
        } else {
          c = 0;
        }
        head -> next = px;
        head = head -> next;
        l1 = l1 -> next;;
      }
      while (l2) {
        ListNode * px = new ListNode((l2 -> val + c) % 10);
        if (l2 -> val + c > 9) {
          c = 1;
        } else {
          c = 0;
        }
        head -> next = px;
        head = head -> next;
        l2 = l2 -> next;
      }
      if (c) {
        ListNode * p2 = new ListNode(c);
        head -> next = p2;

      }
      return result;
    }
};