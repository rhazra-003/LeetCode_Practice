class Solution {
public:
    bool isValid(string s) {
        stack<char> St;
        
        for(int i=0;i<s.length();i++){
            if(St.empty())
                St.push(s[i]);
            else if(s[i]==')' && St.top()=='(')
                St.pop();
            else if(s[i]=='}' && St.top()=='{')
                St.pop();
            else if(s[i]==']' && St.top()=='[')
                St.pop();
            else
                St.push(s[i]);
        }
        
        if(St.empty())
            return true;
        
        return false;
    }
};