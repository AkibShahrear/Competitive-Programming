/*
1 2 3 4 5
1 1 2 3 3
1 1 2 2 3 4
1 2 4

*/
#include<bits/stdc++.h>
using namespace std;
long long a[2000000];
set<int> s;
int main()
{
    //array(pick x and add xx)
    //subtract x
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    int l = s.size();
    if(l < 3) cout << "YES";
    if(l > 3) cout << "NO";
    if(l == 3){
        int arr[3];
        arr[0] = *s.begin();
        arr[1] = *(++(s.begin()));
        arr[2] = *(s.rbegin());
       // cout<<"arr[0]: "<<arr[0]<<" arr[1]: "<<arr[1]<<" arr[2]: "<<arr[2]<<'\n';
        if(arr[1] - arr[0] == arr[2] - arr[1]) cout<<"YES";
        else cout << "NO";

    }
    return 0;
}
