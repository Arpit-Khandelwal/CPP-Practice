// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string removePair(string s)
    {
        // code here

        stack<char> st;

        for (char i : s)
        {
            if (st.empty())
            {
                st.push(i);
                continue;
            }
            if (st.top() == i)
                st.pop();
            else
                st.push(i);
        }

        string ans = "";
        if (st.empty())
            return "Empty String";
        while (!st.empty())
        {
            ans = st.top() + ans;
            // cout<<st.top();
            st.pop();
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        Solution obj;
        string res = obj.removePair(s);

        cout << res << endl;
    }
}
// } Driver Code Ends