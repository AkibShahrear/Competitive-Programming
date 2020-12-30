#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
     int mx=0,mn;
     if(k1<k2) swap(k1,k2),swap(a1,a2);
     cout<<max(n-a1*(k1-1)-a2*(k2-1),0)<<" ";
     int w=min(a2,n/k2);
     cout<<w+min(a1,(n-w*k2)/k1);

}
