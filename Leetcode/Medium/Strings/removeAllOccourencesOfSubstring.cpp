// https://leetcode.com/problems/remove-all-occurrences-of-a-substring

string removeOccurrences(string s, string part)
{
    while (s.find(part) != string::npos)
    {
        s = s.substr(0, s.find(part)) + s.substr(s.find(part) + part.length());
    }
    return s;
}