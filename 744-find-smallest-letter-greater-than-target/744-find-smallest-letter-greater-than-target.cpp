class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters.back() <= target) 
        {
            return letters.front();
        }
        
        int l = 0, h = letters.size() - 1;
        
        while (l < h) 
        {
            auto mid = (l + h) / 2;
            
            if (target < letters[mid]) 
            {
                h = mid;
            }
            else 
            {
                l = mid + 1;
            }
        }
        
        return letters[l];
    }
};