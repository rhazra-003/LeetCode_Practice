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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    map<pair<ListNode*, TreeNode*>, bool> m;
    bool check(ListNode* head, TreeNode* root, ListNode* ihead){
        if(head==NULL){
            return true;
        }
        if(root==NULL){
            return false;
        }
        if(m.count({head, root})!=0){
            return m[{head, root}];
        }
        bool o1=false,o2=false;
        if(ihead->val==root->val){
            o1 = check(ihead->next, root->left, ihead) || check(ihead->next, root->right, ihead);
        }
        else{
            o1 = check(ihead, root->left, ihead) || check(ihead, root->right, ihead);
        }
        if(head->val==root->val){
            o2 = check(head->next, root->left, ihead) || check(head->next, root->right, ihead);
        }
        return m[{head, root}]=o1||o2;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        return check(head, root, head);
    }
};