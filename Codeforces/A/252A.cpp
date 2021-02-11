#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n == 1)
    {
        cout<<a[0];
        return 0;    }
      mx = 0;
     for(int i = 0; i < n; i++)
    {

        for(int j = i; j < n; j++)
        {
            int cnt = 0;
            for(int k = i; k <= j; k++)
            {
                cnt = cnt ^ a[k];
            }
            //cout<<a[i]<<'\n';
            mx = max(mx,cnt);
        }
        //cout<<a[i];
    }
    cout<<mx;
}
