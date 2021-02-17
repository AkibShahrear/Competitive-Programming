#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , k;
    cin >> n >> k;
    string s ,p;
    cin >> s;
    p = s;
    sort(p.begin(),p.end());
    vector<char>v;
    v.push_back(p[0]);
    int l = 0;
    for(int i = 0; i < n - 1 ; i++)
    {
        if(p[i] != p[i + 1])
        {
            v.push_back(p[i + 1]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        int p = 0;;
        for(int j = 0; j < n; j++)
        {
            if(v[l] == s[j]){
             s[j] = '0';
                k--;
                 if(k == 0)
                {
                 break;
                }
            }
        }
        l++;
       if(k == 0)
       {
           break;
       }
    }
    for(int i = 0; i < n; i++)
    {
        if(s[i] != '0')
        {
            cout<<s[i];
        }
    }
}
