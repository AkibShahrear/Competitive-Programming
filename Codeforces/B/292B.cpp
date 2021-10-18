#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int b[100010];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    int cnt  = 0 , diff_cnt = 0 , star_cnt = 0 , star_cnt2 = 0, p = 0 , q =0;


    for(int i = 0; i < m; i++)
    {
        int x , y;
        cin >> x >> y;
        b[x]++;
        b[y]++;
            if(abs(x - y) == 1)
            {
                cnt++;
            }
            if(abs(x - y) == (n - 1))
            {
                diff_cnt++;
            }
            if(i == 0)
            {
                p = x , q = y;
            }
            if(x == p || y == p)
            {
                star_cnt++;
            }
            if(y == q || x == q)
            {
                star_cnt2++;
            }
    }
   if(star_cnt == m || star_cnt2 ==  m)
    {
        cout<<"star topology";
        return 0;
    }
    int one_con = 0, two_con = 0;
    for(int i = 1; i <= n; i++)
    {
        if(b[i] == 2)
        {
            two_con++;
        }
        else if(b[i] == 1)
        {
            one_con++;
        }
    }
    if(one_con == 2 && two_con == n - 2)
    {
        cout<<"bus topology";
        return 0;
    }
    else if(one_con == 0 && two_con == m)
    {
        cout<<"ring topology";
        return 0;
    }

    else{
        cout<<"unknown topology";
    }
    return 0;
}
