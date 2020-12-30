#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >v;
    int n,m;
    cin>>n>>m;
    int a[n],b[m],l=0;
    bool k=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>a[i]>>b[i];
        //v.push_back(make_pair(x,y));

      l=l<b[i] && l>=a[i]?b[i]:l;
    }
    int p=b[0];
   if(l>=m)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    //sort(v.begin(),v.end());

}
