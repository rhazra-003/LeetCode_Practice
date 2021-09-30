class Solution {
public:
    void makeCombinations(vector<string>& combinations, string p, int can_open, int can_close){
        if(can_open==0 && can_close==0){
            combinations.push_back(p);
            
            return;
        }
        
        if(can_close>0){
            makeCombinations(combinations,p+")",can_open,can_close-1);
        }
        
        if(can_open>0){
            makeCombinations(combinations,p+"(",can_open-1,can_close+1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> combinations;
        makeCombinations(combinations,"",n,0);
    
        return combinations;
    }
};