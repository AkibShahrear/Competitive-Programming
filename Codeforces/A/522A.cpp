/*
p-->
*/
#include<bits/stdc++.h>
using namespace std;
string a[300],b[300],c[300];
int main()
{
    int n;
    cin >> n;
    map<string, int> x;
    x["polycarp"] = 1;
     int sum = 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        std::transform(c[i].begin(), c[i].end(),c[i].begin(), ::tolower);
        std::transform(a[i].begin(), a[i].end(),a[i].begin(), ::tolower);
        x[a[i]] = x[c[i]] + 1;
        sum = max(sum , x[a[i]]);
    }

    cout<<sum;

    return 0;
}
