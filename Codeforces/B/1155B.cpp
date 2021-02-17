/*
11 digit
first digit 8
n
vasya first move
choose a character and erase
it from the current string
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    //int e = 0;
    vector<int>e,v;
    int p = 0;
    for(int i = 0; i < n - 10; i++)
    {
        if(s[i] == '8')
        {
           p++;
        }
        else{
            p--;
        }
    }
   if(p > 0)
   {
       cout<<"YES";
   }
   else{
    cout<<"NO";
   }
    return 0;
}
