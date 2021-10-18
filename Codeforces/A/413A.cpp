#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    int n , m, mn ,mx;
    cin >> n >> m >> mn >> mx;
    set<int>s;
    s.insert(mn);
    s.insert(mx);
    int k = 2;
    bool is = 0;
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if(x > mx || x < mn)
        {
            is = 1;
        }
        if(x == mx || x == mn)
        {
            k--;
        }

    }
    k = max(k , 0);
    int l = n - m;
    if(l < k || is == 1)
    {
        cout<<"Incorrect";
    }
    else{
        cout<<"Correct";
    }

}
