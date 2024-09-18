bool compare(string a,string b) {
    return a+b > b+a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> str;
		
        for(int i : nums) {
           str.push_back(to_string(i)); 
        } 
        
        sort(str.begin(), str.end(), compare);
        
        string res;
        
        for(int i=0; i<str.size(); i++) { 
            res += str[i];
        }
        
        return res[0] == '0' ? "0" : res;
    }
};