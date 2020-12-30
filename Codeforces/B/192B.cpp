#include<bits/stdc++.h>
using namespace std;
int a[2010],b[2010];
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i];
    }
   int mn = 0x7FFFFFFF;
   mn = min(a[0], a[n-1]);
   for(int i = 0; i < n - 1; i++)
   {
       mn = min(max(a[i],a[i + 1]), mn);
   }
   cout << mn;
  return 0;
}
