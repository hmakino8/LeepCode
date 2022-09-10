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
    bool isPalindrome(ListNode* head) {
        vector<int> node;
		while (head != nil) {
			node.push_back(head.val);
			head = head.next;
		}
		for (int i = 0, j = node.size() - 1; i < node.size() / 2; i++, j--) {
			if (node[i] != node[j]) return false;
		}
		return true;
    }
};
