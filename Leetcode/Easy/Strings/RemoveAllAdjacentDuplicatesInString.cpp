
int findAdjacentDuplicate(string s)
{
    int l = s.length();
    for (int i = 0; i < l; i++)
    {
        if (s[i] == s[i + 1])
            return i;
    }

    return -1;
}
string removeDuplicates(string s)
{

    int i = findAdjacentDuplicate(s);
    while (i != -1) //TLE
    {
        s = s.substr(0, i) + s.substr(i + 2);
        i = findAdjacentDuplicate(s);
    }

    return s;
}
