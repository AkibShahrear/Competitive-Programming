#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
 /*   for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(a[i]<a[i-1])
            {
                swap(a[i],a[i-1]);
            }
        }
        if(i>1 && (i%2!=0))
        {
            if(a[i]>a[i-1])
            {
                swap(a[i],a[i-1]);
            }
        }
    }*/
    for(int i=1;i<=(n/2);i++)
    {
        cout<<a[i]<<" "<<a[n-i+1]<<" ";
    }
    if(n%2!=0)
    {
        cout<<a[(n/2)+1];
    }

}
