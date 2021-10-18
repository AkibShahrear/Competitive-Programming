#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x , t, a, b , da , db;
    cin >> x >> t >> a >> b >>da >> db;
    int tmp = 0;
    if(x == 0)
    {
        cout<<"YES";
        return 0;
    }
    for(int i = 0; i < t; i++)
    {
        int p = a - (i*da);
         if(p == x)
            {
                cout<<"YES\n";
                return 0;
            }
        for(int j = 0; j < t; j++)
        {
            int q = b - (j * db);
             if(q == x)
            {
                cout<<"YES\n";
                return 0;
            }
            if((p + q) == x)
            {
                cout<<"YES\n";
                return 0;
            }
        }

    }
    cout<<"NO";


}
