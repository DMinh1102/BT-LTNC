#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]!=s[s.length()-i-1])
            {
                cout<<"No";
                return 0;
            }
    }
    cout<<"YES";
    return 0;
}