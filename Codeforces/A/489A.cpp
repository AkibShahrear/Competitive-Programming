#include<bits/stdc++.h>
using namespace std;
int a[3001];
vector<int>v,p;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        //p[v[i]] = i;
    }
   for(int i = n - 1; i >= 0; i--)
    {
       int mp = 0;
       for(int j = 0; j <= i; j++)
       {
           if(a[j] > a[mp])
            mp = j;
       }
       if(mp != i)
       {
           v.push_back(i);
           p.push_back(mp);
           swap(a[i] , a[mp]);
       }
    }
    cout<<v.size()<<'\n';
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i] <<" "<<p[i]<<'\n';
    }

    return 0;
}
