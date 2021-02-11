#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int px, py,r = 0,u = 0, d = 0, l = 0;
        cin >> px >> py;
        if(px < 0)
        {
            l = abs(px);
        }
        else if(px >= 0)
        {
            r = abs(px);
        }
          if(py < 0)
        {
            d = abs(py);
        }
        else if(py >= 0)
        {
            u = abs(py);
        }
        int L = 0, R = 0, U = 0, D = 0;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'R')
            {
                R++;
            }
            else if(s[i] == 'L')
            {
                L++;
            }
            else if(s[i] == 'U')
            {
                U++;
            }
            else if(s[i] == 'D')
            {
                D++;
            }
        }
        if(R >= r && U >= u && D >= d && L >= l)
        {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}
