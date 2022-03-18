class Solution { // isdigit(char) stl
public:
    string defangIPaddr(string address) {
        string defangIP("");
        
        for(char c: address)
        {
            if(isdigit(c)) 
                defangIP += c;
            else 
                defangIP += "[.]";
        }
        
        return defangIP;
    }
};