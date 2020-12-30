#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                cout<<j+1<<" "<<j+2<<'\n';
                swap(a[j],a[j+1]);
            }
        }
    }


}
