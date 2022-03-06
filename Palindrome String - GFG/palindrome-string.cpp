// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	bool isPalindrome(string s) {
        int left=0, right=s.size()-1;
        
        while(left < right)
        {
            if(!isalnum(s[left]))
            {
                left++;
            }
            
            else if(!isalnum(s[right]))
            {
                right--;
            }
            
            else if(tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }
            
            else
            {
                left++;
                right--;
            }
        }
        
        return true;
    }

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends