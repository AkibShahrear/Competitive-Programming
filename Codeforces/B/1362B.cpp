/*
set S
replace each element of S with s(+)k

*/
#include<bits/stdc++.h>
using namespace std;
int s[2000],w[2000];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
           // cout<<(s[i] ^ 1)<<" ";
           w[i] = s[i];
        }
        sort(w,w + n);
        bool is = 0;
        for(int i = 1; i <= 1024; i++)
        {
            v.clear();
            for(int j = 0;j < n; j++)
            {
                int p =(s[j]^i);
                v.push_back(p);
            }
            sort(v.begin(),v.end());
            int cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(v[j] == w[j])
                {
                    cnt++;
                }
            }
            if(cnt == n)
            {
                is = 1;
                cout<<i<<'\n';
                break;
            }
        }
        if(!is)
        {
            cout<< -1<<'\n';
        }


    }


    return 0;
}
