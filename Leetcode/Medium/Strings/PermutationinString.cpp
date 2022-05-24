void permute(string s, string answer, vector<string> &permutations) //to find permutations
{
    if (s.length() == 0)
    {
        permutations.push_back(answer);
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0, i);
        string right_substr = s.substr(i + 1);
        string rest = left_substr + right_substr;
        permute(rest, answer + ch, permutations);
    }
}

bool checkAnagram(string s1, string s2)     //method 2
{
    // sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());   //TLE
    // cout<<s1<<" "<<s2<<endl;
    // return (s1.compare(s2)==0);

    int arr[26] = {0};
    for (char i : s1)
        arr[i - 'a']++;
    for (char i : s2)
        arr[i - 'a']--;

    for (int i = 0; i < 26; i++)
        if (arr[i] != 0)
            return false;
    return true;
}

bool checkInclusion(string s1, string s2)
{

    if (s1.length() > s2.length())
        return false;
    //         string ans="";
    //         vector<string> permutations;
    //         permute(s1,ans,permutations);        //n! complexity

    //         for(string i:permutations)
    //         {
    //             // cout<<i<<endl;
    //             if(s2.find(i)!=string::npos) return true;
    //         }

    //         return false;

    int m = s1.length();
    int n = s2.length();

    int l = 0, h = m;
    while (h <= n)
    {
        // cout<<l<<" "<<h<<endl;
        if (checkAnagram(s1, s2.substr(l, m)))      
            return true;

        l++;
        h++;
    }   
    //borderline pass - Runtime: 269 ms, faster than 10.21%.  Memory Usage: 108.8 MB, less than 5.02% 
    return false;
}

//final method
bool equalFreq(vector<int> a, vector<int> b)
    {
        for(int i=0;i<26;i++) if(a[i]!=b[i]) return false;
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
        
        if(s1.length() > s2.length()) return false;
        
        int m = s1.length();
        int n = s2.length();
                
        vector<int> freq1(26,0);
        
        for(char i:s1) freq1[i-'a']++;
        
        string b;
        int l=0;
        while(l+m<=n)
        {
            b=s2.substr(l++,m);
            vector<int> freq2(26,0);
            for(char i:b) freq2[i-'a']++;
            if(equalFreq(freq1,freq2)) return true;
        }
        return false;
        
    }