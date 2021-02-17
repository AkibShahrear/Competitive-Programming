#include<bits/stdc++.h>
using namespace std;
int a[200];
int b[200];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
            a[b[i]]++;
        }
        vector<int>v;
        bool ok = 0;
        for(int i = 0; i < n; i++)
        {
            bool is = 0;
                for(int j = b[i] + 1; j <= (2*n); j++)
                {
                    if(a[j] == 0)
                    {
                        is = 1;
                        v.push_back(b[i]);
                        v.push_back(j);
                        a[j] = 1;
                        break;
                    }
                }
                if(!is)
                {
                    ok = 1;
                    break;
                }
            }
            if(ok)
            {
                cout<<-1<<'\n';
            }
            else{
                for(int i = 0; i < v.size(); i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<'\n';
            }
        }




    return 0;
}
