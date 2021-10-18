#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    string s;
    cin >> s;
    if(s.length() < 2)
    {
        cout<<s;
    }
    else{
        int cnt_x = 0, cnt_y = 0;
        for(int i = 0; i < s.length(); i++)
        {
           if(s[i] == 'x')
           {
               cnt_x++;
           }
           else{
            cnt_y++;
           }
        }
        if(cnt_x > cnt_y)
        {
            int p = cnt_x - cnt_y;
            for(int i = 0; i < p; i++)
            {
                cout<<'x';
            }
        }
        else if(cnt_y > cnt_x)
        {
            int p = cnt_y - cnt_x;
            for(int i = 0; i < p; i++)
            {
                cout<<'y';
            }
        }


    }
    return 0;
}
