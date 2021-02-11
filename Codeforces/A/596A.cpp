#include<bits/stdc++.h>
using namespace std;
int n;
set<int>a,b;
int val(set<int>&s){
   return ((*s.rbegin())-(*s.begin()));
}
int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        a.insert(x[i]);
        b.insert(y[i]);
    }
    if(a.size()!= 2 || b.size()!= 2)
    {
        cout<<-1;
    }
    else{
        cout<<val(a)*val(b);
    }

}

