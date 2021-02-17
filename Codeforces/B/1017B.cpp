#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s , t , p = "";
    cin >> s >> t;
   long long z = 0, o = 0;
   long long Z = 0,O = 0;
   for(int i = 0; i < n; i++)
   {
       if(t[i] == '0'){
        if(s[i] == '0')z++;
        else o++;
       }
       if(s[i] == '0') Z++;
       else O++;
   }
   cout<<z*O + o*Z - z*o<<endl;
    return 0;
}
