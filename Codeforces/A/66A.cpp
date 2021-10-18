#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string str = "9223372036854775807";
string str1 = "9223372036854775808";
void solve()
{
    string s;
    cin >> s;
    int l = s.length();
    if(s[0] == '-')
    {
        l--;
    }
    if(l < 20)
    {
        ll p = 0;
        int k = 0;
        if(s[0] == '-')
        {
            k = 1;
        }
        if(l == 19 && k == 0)
        {
            for(int i = 0; i < l; i++)
            {
                int r = str[i] - '0';
                int d = s[i] - '0';
                //cout<<"r: "<<r<<" d: "<<d<<'\n';
                if(r < d)
                {
                    cout<<"BigInteger";
                    return;
                }
                else if(r > d){
                    break;
                }
            }
        }
        if(l == 19 && k == 1)
        {
            for(int i = 1; i < (l + 1); i++)
            {
                int r = str1[i] - '0';
                int d = s[i] - '0';
                if(r < d)
                {
                    cout<<"BigInteger";
                    return;
                }
                 else if(r > d){
                    break;
                }
            }
        }
        for(int i = k; i < s.length(); i++)
        {
            p *= 10;
            p += (s[i] - '0');
        }
        if(k == 1)
        {
            p *= (-1ll);
        }
        if(p >= (-1ll*128) && p <= 127)
        {
            cout<<"byte";
        }
        else if(p >= - 32768 && p <= 32767){
        cout<<"short";

        }
        else if(p >= -2147483648 && p <= 2147483647){
        cout<<"int";
        }
        else if(p >= -9223372036854775808 && p <= 9223372036854775807)
        {
            cout<<"long";
        }
    }
    else{
        cout<<"BigInteger";
    }

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
