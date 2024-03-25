#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char a[n+1][m+1]={-1};
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++) cin>>a[i][j];
    for (int i=1;i<=n;i++)
        {
            for (int j=1;j<=m;j++)
                {
                    int d=0;
                    if (a[i][j]=='*') cout<<"* ";
                    else
                        {
                            if (a[i-1][j]=='*') d++;
                            if (a[i-1][j-1]=='*') d++;
                            if (a[i][j-1]=='*') d++;
                            if (a[i+1][j]=='*') d++;
                            if (a[i][j+1]=='*') d++;
                            if (a[i+1][j+1]=='*') d++;
                            if (a[i-1][j+1]=='*') d++;
                            if (a[i+1][j-1]=='*') d++;
                            cout<<d<<' ';
                        }   
                }
            cout<<endl;
        }
}