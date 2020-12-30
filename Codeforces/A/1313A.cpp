#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int ans=0;
       if(a<b) swap(a,b);
       if(a<c) swap(a,c);
       if(b<c) swap(b,c);
       if(a){a--;ans++;}
       if(b) {b--;ans++;}
       if(c) {c--;ans++;}
       if(a&&b){a--;b--;ans++;}
       if(a&&c){a--;c--;ans++;}
       if(b&&c){b--;c--;ans++;}
       if(a&&b&&c){a--;b--;c--;ans++;}
       cout<<ans<<'\n';



    }
}
