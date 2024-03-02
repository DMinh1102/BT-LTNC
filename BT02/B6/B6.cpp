#include <iostream>
#include <math.h>


using namespace std;

int main() {
    int n;
    cin>>n;
    //int a[n+1];
    //for (int i=1;i<=n;i++) a[i]=i;
    for (int i=1;i<=n;i++)
        {
            for (int j=i;j<=n+i;j++) if (j>n) cout<<j-n<<' ';
            else cout<<j<<' ';
            cout<<endl;
        }
}
