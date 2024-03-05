#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool x=false;
    int n;
    cin>>n;
    int a[n+1];
    memset(a,0,sizeof(a));
    for (int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        a[t]++;
    }
    for (int i=1;i<=n;i++) if (a[i]>=2) x=true;
    if (x==false) cout<<"NO";
    else cout<<"YES";
    return 0;
}