#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    string s;
    cin >> s;
    string p = "0";
    p += s;
    //s = p;
    int j = s.length() - 1;
    int cnt  = 0;
    //cout<<"s.size==> "<<s.length()<<'\n';
    int car = 0;
    while(j > 0)
    {
        //cout<<"s[j]: "<<s[j]<<'\n';
        if(s[j] == '1')
        {
            for(j ; j >= 0; j--)
            {
                //cout<<"s: "<<s<<'\n';
                if(s[j] == '1')
                {
                    s[j] = '0';
                    //j--;
                    car = 1;
                    cnt++;
                }
                else if(s[j] == '0')
                {
                    s[j] = '1';
                    car--;
                    cnt++;
                    break;
                }
            }
        }
        else{
            cnt++;
            if(car == 1)
            {
                car = 0;
            }
            j--;
        }
    }
    if(s == "1")
    {
        cout<<0;
    }
    else{
    cout<<cnt + car;
    }
}

int main()
{
//ios::sync_with_stdio(0);
//cin.tie(0);

solve();

return 0;
}
