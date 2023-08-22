//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
                string temp = "" , res ="" , str = "";
        stack<string> st;
        
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] != '.')
              {
                  temp += S[i];
              }
              
              else{
                  st.push(temp);
                  temp = "";
              }
        }
        st.push(temp);
        
        while(!st.empty())
        {
            str = st.top();
            res += str + ".";
            st.pop();
        }
        res.pop_back();
        return res;

    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
