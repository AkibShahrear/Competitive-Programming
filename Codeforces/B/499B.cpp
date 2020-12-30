#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    map<string,string>m,x;
    int k,n;

    while(cin>>k>>n){
    for(int i=0;i<n;i++)
    {
         string a,b;
        cin>>a>>b;
        m[a]=b;
       x[b]=a;

    }
    for(int i=0;i<k;i++)
    {
        string s;
        cin>>s;
        if(m.count(s) && m[s].length()<s.length()) s=m[s];
        else if(x.count(s) && x[s].length()<s.length()) s=x[s];

       cout<< s <<" \n"[i+1 == k];
    }

    }
    return 0;
}
