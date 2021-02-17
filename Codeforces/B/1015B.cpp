#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s,t,p,q;
    cin>>s>>t;
    vector<int>v;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == t[i]) continue;
        for(int j = i; j < n; j++)
        {
            if(s[j] == t[i])
            {
                for(int k = j - 1; k >= i; k--)
                {
                    v.push_back(k + 1);
                    swap(s[k] , s[k + 1]);
                }
                break;
            }

        }
          if(s[i] != t[i])
            {
                cout<<-1;
                exit(0);
            }
    }
    cout<<v.size()<<'\n';
    for(int i = 0; i < v.size(); i++)
    {
        cout<< v[i] <<" ";
    }

}

