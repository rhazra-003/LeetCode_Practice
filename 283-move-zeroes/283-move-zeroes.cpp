class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==0)return;
        
        int i, k=0,count=0;
        
        for( i=0;i<nums.size();i++){
            if(nums[i]!=0)
             nums[k++]=nums[i];
            else
                count++;
        }
        
        while(count!=0){
           nums[k++]=0;
            
            count--;
        }
        
        return ; 
    }
};