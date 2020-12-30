#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l = s.length();
    if((l-3)%2==0)
    {
        cout<<s[0]<<s[1]<<s[2];

        for(int i = 3; i < l;i++)
        {
            if(i%2!=0)
            {
                cout<<'-';
                cout<<s[i];
                cout<<s[i+1];
            }

        }

    }
    else{
         cout<<s[0]<<s[1];
        for(int i = 2;i < n; i++)
        {
             if(i%2==0)
            {
                cout<<'-';
                cout<<s[i];
                cout<<s[i+1];
            }

        }
    }
}
