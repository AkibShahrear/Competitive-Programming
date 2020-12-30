#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main()
{
    vector<int>v;
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }

    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<'\n';
        v.push_back(*it);
    }
       sort(v.begin(),v.end());
    cout<<abs(v[1]-v[0]);
    v.clear();
    s.clear();


}
