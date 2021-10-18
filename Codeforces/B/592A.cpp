#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string s[8];
int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    for(int i = 0; i < 8; i++)
    {
        cin >> s[i];
    }

    int A = 10, B = 10;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {

            if(s[i][j] == 'W')
            {
               // cout<<"i: "<<i<<" j: "<<j<<'\n';
                int cnt = 0;
                int l = i;
                while(l >= 0)
                {
                    cnt++;
                    l--;
                    if(s[l][j] == 'B' || s[l][j] == 'W')
                    {
                        cnt = -1;
                        break;
                    }
                    if(l == 0)
                    {
                        break;
                    }

                }
                if(cnt != -1){
                A = min(A , cnt);
                }
            }
            else if(s[i][j] == 'B')
            {
              //   cout<<"i: "<<i<<" j: "<<j<<'\n';
                int cnt = 0;
                int l = i;
                while(l <= 7)
                {
                   // cout<<"l: "<<l<<" cnt: "<<cnt<<'\n';
                    cnt++;
                    l++;
                    if(s[l][j] == 'B' || s[l][j] == 'W')
                    {
                        cnt = -1;
                        break;
                    }
                    if(l == 7)
                    {
                        break;
                    }
                }
                if(cnt != -1){
                B = min(B , cnt);
               // cout<<"B: "<<B<<'\n';
                }
            }
        }
    }
    //cout<<"A: "<<A<<" B: "<<B<<'\n';
    if(A <= B)
    {
        cout<<"A";
    }
    else {
        cout<<"B"<<'\n';
    }

    return 0;
}
