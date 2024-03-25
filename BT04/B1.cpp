#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[10001]={ };
    for (int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a[temp]++;
    }
    for (int i=1;i<=10000;i++)
    {
        if (a[i]>=2)
            {
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";
    return 0;
}