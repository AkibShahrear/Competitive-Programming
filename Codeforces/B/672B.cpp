#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
    set<char>s;
    int n;
    cin>>n;
   char b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        s.insert(b[i]);
        a[b[i]]++;
    }
    if(n>26)
    {
        cout<<-1;
        return 0;
    }

   /* for(int i=0;i<n;i++)
    {
        cout<<a[b[i]]<<'\n';
    }*/
    cout<<n-s.size();
}
