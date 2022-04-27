char getMaxOccouringCharacter(string str)
{
    unordered_map<char,int> count;

    for(char i:str) count[i]++;

    int maxi=0;
    char ans;

    for(auto i:count)
    {
        if(i.second>maxi)
        {
            maxi = i.second;
            ans=i.first;
        }

        if(i.second==maxi) ans = min(ans,i.first);
    }
}