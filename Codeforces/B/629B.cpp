#include<bits/stdc++.h>
using namespace std;
int f[367],m[367];
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    char p;
    for(int i=0;i<n;i++)
    {
        cin>>p>>a[i]>>b[i];
        if(p=='M')
        {
            for(int j = a[i]; j <= b[i]; j++)
            {
                m[j]++;
            }
        }
        else{
            for(int j = a[i]; j <= b[i]; j++)
            {
                f[j]++;
            }
        }
    }
    int sum = 0;
    for(int  i = 1;i <= 366;i++ )
    {
        sum = max(sum, 2 * min(f[i], m[i]));
    }
    cout<<sum;
}
