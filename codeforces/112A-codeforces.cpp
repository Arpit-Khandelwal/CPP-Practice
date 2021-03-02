    #include<iostream>
    using namespace std;
    int main()
    {
        string s1,s1_new, s2,s2_new;
        cin >> s1 >> s2;
        int ch;
        for (int i = 0;i<s1.length();i++)
        {
            ch = (int)s1[i];
            if(ch<97)
                ch += 32;
            s1_new+=(char)ch;
            ch = (int)s2[i];
            if (ch < 97)
                ch += 32;
            s2_new += (char)ch;
        }
        cout << s1_new.compare(s2_new);
    }