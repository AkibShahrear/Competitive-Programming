#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    vector<char>v;
    string s , p, k = "", l = "";
    cin >> s;
  for(int i  = 0;i < s.size(); i++)
  {
      while(p.size() && p[p.size() - 1] < s[i]) p.erase(p.end() - 1);
      p.push_back(s[i]);
  }
  cout<<p;
}
