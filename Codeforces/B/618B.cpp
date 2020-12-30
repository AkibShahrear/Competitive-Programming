#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    bool is = 0;
    for(int i=0;i<n;i++)
    {
        int mx = 0;
        for(int j=0;j<n;j++)
        {
            mx = max(mx,a[i][j]);
        }

        if(mx == n-1 && !is)
        {
            cout<<n<<" ";
            is=1;
        }
        else{
        cout<<mx<<" ";
        }
    }
}





































































































































































