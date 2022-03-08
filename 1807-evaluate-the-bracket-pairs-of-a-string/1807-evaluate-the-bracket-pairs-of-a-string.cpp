class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        vector<string> st(1);
        unordered_map<string, string> m;
        
        for (auto &p : knowledge)
        {
            m[p[0]] = p[1];
        }
        
        for (auto ch: s) 
        {
            if (ch == ')') 
            {
                auto it = m.find(st.back());
            
                st.pop_back();
                
                st.back() += it != end(m) ? it->second : "?";
            }
            else if(ch == '(')
            {
                st.push_back("");
            }
            else
            {
                st.back() += ch;
            }
        }
        
        return st.front();    
    }
};