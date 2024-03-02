#include <iostream>
#include <math.h>


using namespace std;

int main() {
    int n;
    bool t=true;
    cin>>n;
    if (n<=3) cout<<"no";
    else 
        {
            for (int i=2;i<=sqrt(n);i++)
                if (n%i==0) t=false;
        }
    if (t==false) cout<<"no";
    else cout<<"yes";
    return 0;
}