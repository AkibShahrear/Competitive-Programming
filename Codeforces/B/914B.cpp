#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int ,int> pi;
int a[2000000];
int main()
{
    int n;
    cin >> n;
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i = 1; i <= 100000; i++){
    if(a[i] & 1)
    {
        cout<<"Conan";
        return 0;
    }
    }
        cout<<"Agasa";

    return 0;
}
