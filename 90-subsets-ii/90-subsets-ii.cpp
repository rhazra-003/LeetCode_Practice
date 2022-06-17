class Solution {
public:
    void abc(int i,set<vector<int>> &ans,vector<int> temp, vector<int> nums){
        if(i==nums.size())
        {
            sort(temp.begin(), temp.end());
            ans.insert(temp);
            return;
        }
        
        abc(i+1,ans,temp,nums);
        temp.push_back(nums[i]);
        
        abc(i+1,ans,temp,nums);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> temp;
        
        abc(0,ans,temp,nums);
        vector<vector<int>> final_ans(ans.begin(), ans.end());
        
        return final_ans;
    }
};