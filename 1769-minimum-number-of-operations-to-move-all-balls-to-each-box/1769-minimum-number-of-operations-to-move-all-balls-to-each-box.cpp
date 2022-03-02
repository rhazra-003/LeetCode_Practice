class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res(boxes.length());
        int last_cost=0, sum=boxes[0]-'0';
        for(int i=1; i < boxes.length(); i++)
        {
            res[i] += sum+last_cost;
            last_cost=res[i];
            sum += (boxes[i]-'0');
        }
        
        last_cost=0;
        sum = boxes[boxes.length()-1]-'0';
        
        for(int i=boxes.length()-2; i>=0; i--)
        {
            res[i] += sum+last_cost;
            last_cost=(sum+last_cost);
            sum += (boxes[i]-'0');
        }
        
        return res;
    }
};