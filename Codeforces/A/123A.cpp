#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define vi vector<int>
#define pi pair<int , int>
#define fast ios::sync_with_stdio(0)
#define IO cin.tie(0)
vector<int>prime;
map<int , int>pm;
map<char , int>mp;
const int sz = 10 * 1000;
int smb[256];
bool good[sz];
void solve()
{
for(int i = 2; i <= 1000; i++)
{
    bool is = 0;
    for(int j = 2; j * j <= i; j++)
    {
        if(i%j == 0)
        {
            is = 1;
            break;
        }
    }
    if(!is){
        prime.push_back(i);
        pm[i] = 1;
    }
}
string s;
cin >> s;
int l = s.length() , mx;
int cnt =  1;
good[0] = true;
for(int i = 1; i < l; i++)
{
    if(pm(i + 1) && (i + 1)*2 > l)
    {
        cnt++;
        good[i] = true;
    }
     for(int i = 0; i < l; i++)
    {
        smb[s[i]]++;
    }
    mx  = 0;
    for(int i = 0; i < 256; i++)
        if(smb[i] > smb)
}
}

int main(int argc , char ** argv)
{
    //fast; IO;

    solve();

    return 0;

}
