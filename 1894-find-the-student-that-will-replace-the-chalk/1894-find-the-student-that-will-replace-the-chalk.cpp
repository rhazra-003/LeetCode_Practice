class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long sum = 0;
        
        for (int i = 0; i < chalk.size(); i++){
            sum += chalk[i];
        }
        
        long remain = k%sum;
        
        for (int i = 0; i < chalk.size(); i++) {
            if(remain <chalk[i]) {
                return i;
            }
            
            remain -= chalk[i];
        }
        
        return 0;
    }
};