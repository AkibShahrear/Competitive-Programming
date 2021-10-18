#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string a[10];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
    for(int i = 0; i < 9; i++)
    {
      cin >> a[i];
    }
    a[0][0] = a[0][1];
    a[1][3] = a[1][4];
    a[2][6] = a[2][7];
    a[3][1] = a[3][2];
    a[4][4] = a[4][5];
    a[5][7] = a[5][8];
    a[6][2] = a[6][1];
    a[7][5] = a[7][4];
    a[8][8] = a[8][7];

       for(int i = 0; i < 9; i++)
    {
        cout<<a[i]<<'\n';
    }
    }
    return 0;
}
