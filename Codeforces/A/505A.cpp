#include<bits/stdc++.h>
using namespace std;
bool ispal(string s)
{
    int l =s.length();
    for(int i = 0; i < (l/2); i++)
    {
        //cout<<s[i] <<" "<<s[l-i]<<'\n';
        if(s[i] != s[l-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s;
    cin>>s;
    s = "#" + s;
    int l = s.length();
    for(int i = 0; i < l; i++)
    {
        for(int j = 'a'; j <= 'z'; j++)
        {
            s[i] = j;
        //    cout<<s<<'\n';
            if(ispal(s))
            {
                cout << s << endl;
                return 0;
            }
        }
        if (i < s.size() - 1) swap(s[i], s[i+1]);
      //  cout<<"new s: "<<s<<'\n';
    }

     cout<<"NA";
}
