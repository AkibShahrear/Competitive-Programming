#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>odd,even;
        int n;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0;i<s.length();i++)
        {
            int p=(int)s[i]-'0';
            if(p%2==0 && p!=0)
            {
                even.push_back(p);
            }
            else if(p%2!=0){
                odd.push_back(p);
            }
        }
        if(s.length()==1)
        {
            cout<<-1<<'\n';
        }
        else if(odd.size()==0 || odd.size()==1)
        {
            cout<<-1<<'\n';
        }
        else{
            cout<<odd[0]<<odd[1]<<'\n';
        }

    }
}
