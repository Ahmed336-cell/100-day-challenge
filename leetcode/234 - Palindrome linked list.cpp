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
        vector<int>lis;
        while(head){
            lis.push_back(head->val);
            head=head->next;
        }

        int l=0 ; 
        int r=lis.size()-1;

        while(l<r && lis[l]==lis[r]){
            l++;
            r--;
        }
        if(l>=r){
            return true;
        }else{
            return false;
        }
    }
};
