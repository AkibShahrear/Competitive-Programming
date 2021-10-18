#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    int n;
    cin >> n;
    int sum = 1;
    while(sum <= n)
    {
        if(sum == n)
        {
            cout<<"YES\n";
            return 0;
        }
        sum *= 2;
    }
    cout<<"NO";
    return 0;
}
