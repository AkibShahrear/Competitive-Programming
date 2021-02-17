/*
1 = 1
2 = 1+4 = 0
3 = 1 + 8 + 27 = 1
4 = 4
5 = 1 + 32 + 243 + 1024 + 3125 = 0
6 = 1
7 = 4
8 = 2
9 = 0
10 = 0

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long ans = 0;
    if(s.size() == 1)
        {
            ans = s[0] - '0';
        }
    else{
        ans = (s[s.size() - 2] - '0')*10, ans += (s[s.size() - 1] - '0');
    }
    if(ans % 4)
        return cout << "0\n",0;
    return cout<<"4\n",0;

    return 0;
}
