class Solution {
public:
    
void solve(string s, int i, vector<string> &ans, string op, vector<string> mapping)
{
    if(i>=s.size())
    {
        ans.push_back(op);
        return;
    }

    int digit = s[i] - 48;
    op.push_back(mapping[digit][0]);
    solve(s, i + 1, ans, op, mapping);

    op.pop_back();
    op.push_back(mapping[digit][1]);
    solve(s, i + 1, ans, op, mapping);

    op.pop_back();
    op.push_back(mapping[digit][2]);
    solve(s, i + 1, ans, op, mapping);

    if(mapping[digit].length()>3) 
    {
        op.pop_back();
        op.push_back(mapping[digit][3]);
        solve(s, i + 1, ans, op, mapping);
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(digits.length()==0) return {};
        
        solve(digits,0,ans,"",mapping);
        return ans;
    }
};