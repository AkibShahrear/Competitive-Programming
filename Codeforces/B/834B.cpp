#include<bits/stdc++.h>
using namespace std;
char a[1000100];
map<char,int>mp,cnt;
unordered_map<char,int>last_pos;
unordered_set<char>active;
int main()
{
   int n,k;
   string s;
   cin>>n>>k>>s;
   for(int i=0;i<n;i++)
   {
       last_pos[s[i]] = i;
   }
   for(int i=0;i<n;i++)
   {
       active.insert(s[i]);
       if(active.size()>k)
       {
           cout<<"YES"<<endl;
           return 0;

       }
       if(last_pos[s[i]] == i)
        active.erase(s[i]);
   }
cout<<"NO"<<endl;

}
