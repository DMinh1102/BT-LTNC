#include <bits/stdc++.h>

using namespace std;

int a[10001];

int check(int x)
{
    int d=0,b[6]={ };
    for (int i=0;i<6;i++)
    {
        if (x!=0) 
            {
                b[d]=x%10;
                x/=10;
                d++;
            }
    }
    for (int i=0;i<d;i++)
    {
        if (b[i]!=b[d-i-1]) return 0;
    }
    return 1;
}


void init()
{
    for (int i=1;i<10000;i++)
    {
        a[i]=check(i);
    }
}

int main()
{
    init();
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,d=0;
        cin>>n>>m;
        for (int i=n;i<=m;i++) if (a[i]==1) d++;
        cout<<d<<endl;

    }
}