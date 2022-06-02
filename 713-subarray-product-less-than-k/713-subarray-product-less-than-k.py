class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        ans,prod,i,j=0,1,0,0
        
        while j < len(nums) :
            if prod*nums[j]<k:
                prod*=nums[j]
                ans+=(j-i+1)
                j+=1
            
            elif i<j:
                prod//=nums[i]
                i+=1
            
            else:
                i+=1
                j+=1
        
        return ans