#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0 , mx = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(') cnt++; else cnt--;
        mx = min(mx , cnt);
    }
    puts((cnt == 0 && mx >= -1)?"Yes":"No");
}
