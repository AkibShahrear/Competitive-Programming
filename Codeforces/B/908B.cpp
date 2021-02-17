#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
pi P[4] = {pi(-1, 0), pi(0, -1), pi(0, 1), pi(1 , 0)};
char a[200][200];
int main()
{
    int n , m;
    cin >> n >> m;
    int spx = 0, spy = 0 , epx = 0 , epy = 0, p = 0 , q = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 'S')
            {
                p = i;
                q = j;
            }
            if(a[i][j] == 'E')
            {
                epx = i;
                epy = j;
            }
        }
    }
    string s;
    cin >> s;
    int cnt = 0;
    sort(P , P + 4);
    do{
        bool is = 0;
        int x = p, y = q;
        for(int i = 0; s[i] != 0; i++)
        {
            int k = s[i] - '0';
            x += P[k].first;
            y += P[k].second;
            if(x < 0 || x >= n || y < 0 || y >= m)break;
            if(a[x][y] == '#') break;
            if(a[x][y] == 'E'){
                is = 1;
                break;
            }
        }
        if(is) cnt++;
    }
    while(next_permutation(P , P + 4));
    cout<<cnt;
    return 0;
}
