#include<bits/stdc++.h>
using namespace std;
int b[50000];
int main()
{
    vector<int>v1,v2;
    int m;
    cin>>m;
    int a[m];
    memset(b,0,sizeof(b));
    for(int i = 0; i < m; i++)
    {

        cin>>a[i];
        b[a[i]]++;
    }
   sort(a,a+m);
   for(int i = 1; i <= 5000; i++)
   {
       if(b[i])
       {
           v1.push_back(i);
           b[i]--;
       }
   }
   int n = v1.size();
   for(int i = v1[n-1] - 1; i >= 1; i--)
   {
    if(b[i])
    {
        v1.push_back(i);
    }
   }
   cout<<v1.size()<<'\n';
   for(int i = 0; i < v1.size(); i++)
   {
       cout<< v1[i]<<" ";
   }


}

