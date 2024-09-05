class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int total = mean * (n + rolls.size());
        int sum = 0;
        
        for(int i=0; i<rolls.size(); i++) {
            sum += rolls[i];
        }
        
        if((total-sum) < n || (total-sum) > 6*n){
            return {};
        }
        
        int rem = (total-sum) % n;
        vector<int> ans(n, (total-sum)/n);
        
        for(int i=0; i<rem; i++){
            ans[i]+=1;
        }
           
        return ans; 
    }
};