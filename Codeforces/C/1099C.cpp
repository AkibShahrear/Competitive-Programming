#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    string s;
    cin >> s;
    cin >> k;
    int spk = 0 , ork = 0 , pk0 = 0, pk1 = 0;;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i]=='?' || s[i] == '*')
        {
            spk++;
            if(s[i] == '?')
            {
                pk0++;
            }
            else if(s[i] == '*')
            {
                pk1++;
            }
        }
        else{
            ork++;
        }
    }
   // cout<<"spk: "<<spk<<'\n';
   // cout<<"ork: "<<ork<<'\n';
    if(k < ork)
    {
        int p = ork - k;
        if(spk < p)
        {
            cout<<"Impossible";
            return 0;
        }
        else{
            for(int i = 0 ; i < s.length(); i++)
            {
                if(s[i] == '?' && i - 1 >= 0 && s[i - 1] != '?' && s[i - 1] != '*'|| s[i] == '*' && i - 1 >= 0 && s[i - 1] != '?' && s[i - 1] != '*')
                {
                    s[i - 1] = '0';
                    ork--;
                    if(ork == k)
                    {
                        break;
                    }
                }
            }
            for(int i = 0; i < s.length(); i++)
            {
                if(s[i] != '?' && s[i] != '*' && s[i] != '0')
                {
                    cout<<s[i];
                }
            }
        }
    }
    else if(k == ork)
    {
        for(int i = 0; i < s.length(); i++)
            {
                if(s[i] != '?' && s[i] != '*')
                {
                    cout<<s[i];
                }
            }
    }
    else if(k > ork)
    {
        int l = k - ork;
        if(pk1 == 0)
        {
            cout<<"Impossible";
            return 0;
        }
        if(spk == 0)
        {
            cout<<"Impossible";
            return 0;
        }
        bool is = 0;
        for(int i = 0; i < s.length(); i++)
            {
                if(s[i] == '*' && i - 1 >= 0 && s[i - 1] != '?' && s[i - 1] != '*' && is == 0)
                {
                    is = 1;
                    for(int j = 1; j <= l; j++)
                    {
                        cout<<s[i - 1];
                    }
                }
                else
                {
                  if(s[i] != '?' && s[i] != '*')
                  {
                      cout<<s[i];
                  }
                }
            }
    }
    return 0;
}
