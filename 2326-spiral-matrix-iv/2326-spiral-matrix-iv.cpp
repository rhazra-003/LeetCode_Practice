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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        int r1=0,r2=m-1,c1=0,c2=n-1;
        
        while((r1<=r2 && c1<=c2) && head) {           
            for(int i=c1; i<=c2 && head; i++) {
                ans[r1][i]=head->val;
                head=head->next;
            }
            
            r1++;
            
            for(int i=r1; i<=r2 && head; i++) {
                ans[i][c2]=head->val;
                head=head->next;
            }
            
            c2--;
            
            for(int i=c2; i>=c1 && head; i--) {
                ans[r2][i]=head->val;
                head=head->next;
            }
            
            r2--;
            
            for(int i=r2; i>=r1 && head; i--) {
                ans[i][c1]=head->val;
                head=head->next;
            }
            
            c1++;
        }
        
        return ans;
    }
};